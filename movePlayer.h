#ifndef MOVEPLAYER_H
#define MOVEPLAYER_H
#include "map.h"
#include "player.h"
#include <iostream>
#include <ncurses.h>

using namespace std;

void movePlayer(int width, int height, Player &P, char **map, int ch, int &dirX, int &dirY, int &beansCount);

#endif
