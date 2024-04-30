#ifndef RANDOM_BEAM_H
#define RANDOM_BEAM_H

#include <iostream>
#include <ctime>
#include "player.h"


int randomInt(int min, int max);

void generateBean(int width, int height, const Player &P, char **map);

int isPlayerPosition(int playerX, int playerY, int beanX, int beanY);
#endif
