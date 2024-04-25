#ifndef MOVEPLAYER_H
#define MOVEPLAYER_H
#include "map.h"
#include "player.h"
#include <ncurses.h>
#include <conio.h>
#include <string>

using namespace std;

// 地图大小
// const int width;
// const int height;

// 地图
// char map[height][width];

// 玩家初始位置
// int playerX = width/2;
// int playerY = height/2;

void movePlayer(int width, int height, Player &P, std::string **map);

#endif
