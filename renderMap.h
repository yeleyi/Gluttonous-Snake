#ifndef RENDERMAP_H
#define RENDERMAP_H
#include <ncurses.h>
#include <iostream>
#include <iomanip>
#include "player.h"

void renderMap(int width, int height, char **map, Player &P);

#endif
