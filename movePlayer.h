#ifndef MOVEPLAYER_H
#define MOVEPLAYER_H
#include "map.h"
#include "player.h"
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

void movePlayer(int width, int height, const Player &P){
  //更新玩家位置
  string command, lastcommand;
  while true{
    if (cin >> command){
      if (last command == "d"){
        if (command == "a")
          P.body[0].first += 1;
        else if (command == "d")
          P.body[0].first += 1;
        else if (command == "w")
          P.body[0].second -= 1;
        else if (command == "s")
          P.body[0].second += 1;
      }
      if (last command == "a"){
        if (command == "a")
          P.body[0].first -= 1;
        else if (command == "d")
          P.body[0].first -= 1;
        else if (command == "w")
          P.body[0].second -= 1;
        else if (command == "s")
          P.body[0].second += 1;
      }
      if (last command == "w"){
        if (command == "a")
          P.body[0].first -= 1;
        else if (command == "d")
          P.body[0].first += 1;
        else if (command == "w")
          P.body[0].second -= 1;
        else if (command == "s")
          P.body[0].second -= 1;
      }
      if (last command == "s"){
        if (command == "a")
          P.body[0].first -= 1;
        else if (command == "d")
          P.body[0].first += 1;
        else if (command == "w")
          P.body[0].second += 1;
        else if (command == "s")
          P.body[0].second += 1;
      }
    }
    // 检查是否撞墙
    else{
      if (last command == "w")
        P.body[0].second -= 1;
      if (last command == "d")
        P.body[0].first += 1;
      if (last command == "s")
        P.body[0].second += 1;
      if (last command == "a")
        P.body[0].first -= 1;
    }
    if (map[P.body[0].second][P.body[0].first] == '#'){
      // 撞墙，游戏结束
        endwin();
        std::cout << "Game Over!" << std::endl;
        break;
        exit(0);
      }
    if (map[P.body[0].second][P.body[0].first] == "P"){
      cout << "Game Over!" << endl;
      break;
      }

    //当P走到B上的时候调用extendPlayerLength这个函数。
    
  // 更新地图
    map[P.body[0].second - dy][P.body[0].first] = '.';
    map[P.body[0].second][P.body[0].first] = 'P';
    lastcommand = command;
  }
}

#endif
