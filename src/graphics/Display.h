#ifndef FLOOD_FILL_DISPLAY
#define FLOOD_FILL_DISPLAY

#include "define.h"
#include "logic/MazeAlgorithm.h"

// convert screen space to pixel space
void display_screenspace_to_pixelspace(int *x, int *y);

// flood fill drawing function
void ff_draw(ff_map *source);

#endif
