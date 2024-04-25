#ifndef RANDOM_BEAM_H
#define RANDOM_BEAM_H

#include <iostream>
#include <ctime>
#include "player.h"

// 随机生成数字的函数
int randomInt(int min, int max);

// 随机在地图上生成豆子的函数
void generateBean(int width, int height, const Player &P, char **map);

// 判断生成地点是否有Player
int isPlayerPosition(int playerX, int playerY, int beanX, int beanY);
#endif
