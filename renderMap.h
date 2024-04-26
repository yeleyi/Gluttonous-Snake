#ifndef RENDERMAP_H
#define RENDERMAP_H
#include <ncurses.h>
#include <string>
#include <iostream>
#include <iomanip>
#include "player.h"
// 渲染地图
void renderMap(int width, int height, char **map, Player &P);

#endif
