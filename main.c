#include <stdio.h>
#include <stdbool.h>
#include "SwinGame.h"

#define CIRCLE_RADIUS 90

int main()
{
    open_graphics_window("Circle Moving", 800, 600);
float x = 400;
float y = 300;
    do
    {
        process_events();

        clear_screen_to(ColorWhite);

        draw_framerate_with_simple_font(0,0);

draw_circle(ColorGreen, x, y, CIRCLE_RADIUS);

//Moving The circle Logic
if (key_down(275) &&  (screen_width()-x + CIRCLE_RADIUS < screen_width()))
{
  x = x-1;
}

else if (key_down(276) &&  (x + CIRCLE_RADIUS < screen_width()))
{
x = x+1;
}

else if (key_down(274) && (y + CIRCLE_RADIUS < screen_height()))
{
  y = y+1;
}

else if (key_down(273) && (screen_height()-y + CIRCLE_RADIUS < screen_height()))
{
  y = y-1;
}

///end of Logic////



        refresh_screen_restrict_fps(60);
    } while ( ! window_close_requested() );

    return 0;
}
