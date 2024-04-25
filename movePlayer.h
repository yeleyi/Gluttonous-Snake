#ifndef MOVEPLAYER_H
#define MOVEPLAYER_H
#include "map.h"
#include "player.h"
#include <ncurses.h>
#include <string>

using namespace std;


void movePlayer(int width, int height, Player &P, char **map, char command, char lastcommand, int round,int ch, int &dirX, int &dirY);

#endif
