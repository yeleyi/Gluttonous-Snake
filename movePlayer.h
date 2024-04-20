#ifndef MOVEPLAYER_H
#define MOVEPLAYER_H
#include "map.h"

// 地图大小
const int width;
const int height;

// 地图
char map[height][width];

// 玩家初始位置
int playerX = width/2;
int playerY = height/2;

// 移动方向
int dx=0;
int dy=-1; //初始向上移动

void movePlayer(){
  //更新玩家位置
  playerX += dx;
  playerY += dy;

  // 检查是否撞墙
  if (map[playerY][playerX] == '#'){
      // 撞墙，游戏结束
      endwin();
      std::cout << "Game Over!" << std::endl;
      exit(0);
  }
  // 更新地图
  map[playerY - dy][playerX - dx] = '.';
  map[playerY][playerX] = 'P';
}

#endif
