#include "mbed_debug.h"

#define NOT_IMPLEMENTED_SYMBOL(SYM) void SYM() { debug("%s called.\r\n", __FUNCTION__); }

NOT_IMPLEMENTED_SYMBOL(abort)
NOT_IMPLEMENTED_SYMBOL(_sbrk)
//NOT_IMPLEMENTED_SYMBOL(_exit)
NOT_IMPLEMENTED_SYMBOL(_kill)
NOT_IMPLEMENTED_SYMBOL(_getpid)

// Error handling in mbed_error.c etc.
//NOT_IMPLEMENTED_SYMBOL(error);
NOT_IMPLEMENTED_SYMBOL(mbed_assert_internal);
NOT_IMPLEMENTED_SYMBOL(mbed_die);

void mbed_error_vfprintf(const char * format, va_list arg) {
    vfprintf(stderr, format, arg);
}

void toppers_mbed_initialize() {
    mbed_sdk_init();
    mbed_main();
    //main();
}

/** Like strstr but does not need 'buffer' to be NULL-terminated */
#pragma weak strnstr /* Default implementation */
char*
strnstr(const char* buffer, const char* token, size_t n)
{
  const char* p;
  int tokenlen = (int)strlen(token);
  if (tokenlen == 0) {
    return (char *)(size_t)buffer;
  }
  for (p = buffer; *p && (p + tokenlen <= buffer + n); p++) {
    if ((*p == *token) && (strncmp(p, token, tokenlen) == 0)) {
      return (char *)(size_t)p;
    }
  }
  return NULL;
} 
