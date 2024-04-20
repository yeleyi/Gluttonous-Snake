#ifndef MOVEPLAYER_H
#define MOVEPLAYER_H
#include "map.h"
#include <ncurses.h>
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

// 移动方向
int dx=0;
int dy=-1; //初始向上移动

void movePlayer(int width, int height, int playerX, int playerY){
  //更新玩家位置
  string command;
  while true{
    if (cin >> command){
      if (map[playerY][playerX] == '#')
      if (command == "a" or command == "A")
        playerY -= 1;
      else if (command == "d" or command == "D")
        playerY += 1;
      else if (command == "w" or command == "W")
        playerX -= 1;
      else if (command == "s" or command == "S")
        playerX += 1;
    // 检查是否撞墙
    else{
      playerX += dx;
      playerY += dy;
    }
      if (map[playerY][playerX] == '#'){
        // 撞墙，游戏结束
          endwin();
          std::cout << "Game Over!" << std::endl;
          break;
          exit(0);
      }
      if (map[playerY][playerX] == "P"){
        cout << "Game Over!" << endl;
        break;
      }
  // 更新地图
    map[playerY - dy][playerX - dx] = '.';
    map[playerY][playerX] = 'P';
}
    }

#endif
