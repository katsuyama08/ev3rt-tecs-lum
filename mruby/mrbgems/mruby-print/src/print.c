#include "mruby.h"
#include "mruby/string.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#if defined(__MINGW32__) || defined(__MINGW64__)
# include <windows.h>
# include <io.h>
#endif

static void
printstr(mrb_state *mrb, mrb_value obj)
{
  if (mrb_string_p(obj)) {
#if defined(__MINGW32__) || defined(__MINGW64__)
    if (isatty(fileno(stdout))) {
      DWORD written;
      int mlen = RSTRING_LEN(obj);
      char* utf8 = RSTRING_PTR(obj);
      int wlen = MultiByteToWideChar(CP_UTF8, 0, utf8, mlen, NULL, 0);
      wchar_t* utf16 = mrb_malloc(mrb, (wlen+1) * sizeof(wchar_t));
      if (utf16 == NULL) return;
      if (MultiByteToWideChar(CP_UTF8, 0, utf8, mlen, utf16, wlen) > 0) {
        utf16[wlen] = 0;
        WriteConsoleW(GetStdHandle(STD_OUTPUT_HANDLE),
          utf16, wlen, &written, NULL);
      }
      mrb_free(mrb, utf16);
    } else
#endif
//TODO:
      fputs(RSTRING_PTR(obj), stdout);
  }
}

/* 15.3.1.2.9  */
/* 15.3.1.3.34 */
mrb_value
mrb_printstr(mrb_state *mrb, mrb_value self)
{
  mrb_value argv;

  mrb_get_args(mrb, "o", &argv);
  printstr(mrb, argv);

  return argv;
}

void
mrb_mruby_print_gem_init(mrb_state* mrb)
{
  struct RClass *krn;
  krn = mrb->kernel_module;
  mrb_define_method(mrb, krn, "__printstr__", mrb_printstr, MRB_ARGS_REQ(1));
}

void
mrb_mruby_print_gem_final(mrb_state* mrb)
{
}
