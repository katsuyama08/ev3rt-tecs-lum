#include "ev3api.h"
#include "app.h"

void main_task(intptr_t unused) {
    lcdfont_t font = EV3_FONT_MEDIUM;
    ev3_lcd_set_font(font);
    
    ev3_lcd_draw_string("Sample", 0, 0);
}
