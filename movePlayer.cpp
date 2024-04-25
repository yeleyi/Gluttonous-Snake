#include "movePlayer.hpp"
#include <iostream>

void movePlayer(int width, int height, Player &P, std::string **map){
  //更新玩家位置
  string command, lastcommand;
  int round = 0;
  while (true){
    if (cin >> command){
      round = 1;
      if (lastcommand == "d"){
        if (command == "a")
          P.body[0].first += 1;
        else if (command == "d")
          P.body[0].first += 1;
        else if (command == "w")
          P.body[0].second -= 1;
        else if (command == "s")
          P.body[0].second += 1;
      }
      if (lastcommand == "a"){
        if (command == "a")
          P.body[0].first -= 1;
        else if (command == "d")
          P.body[0].first -= 1;
        else if (command == "w")
          P.body[0].second -= 1;
        else if (command == "s")
          P.body[0].second += 1;
      }
      if (lastcommand == "w"){
        if (command == "a")
          P.body[0].first -= 1;
        else if (command == "d")
          P.body[0].first += 1;
        else if (command == "w")
          P.body[0].second -= 1;
        else if (command == "s")
          P.body[0].second -= 1;
      }
      if (lastcommand == "s"){
        if (command == "a")
          P.body[0].first -= 1;
        else if (command == "d")
          P.body[0].first += 1;
        else if (command == "w")
          P.body[0].second += 1;
        else if (command == "s")
          P.body[0].second += 1;
      }
      lastcommand = command;
    }
    else{
      round = 0;
      if (lastcommand == "w")
        P.body[0].second -= 1;
      if (lastcommand == "d")
        P.body[0].first += 1;
      if (lastcommand == "s")
        P.body[0].second += 1;
      if (lastcommand == "a")
        P.body[0].first -= 1;
    }
    
    if (map[P.body[0].first][P.body[0].second] == "#"){
      // 撞墙，游戏结束
        endwin();
        std::cout << "Game Over!" << std::endl;
        exit(0);
    }
    if (map[P.body[0].first][P.body[0].second] == "P"){
      //撞到自身，游戏结束
      cout << "Game Over!" << endl;
        exit(0);
      }

    
  // 更新地图
    map[P.body[0].first - 1][P.body[0].second] = ".";
      map[P.body[0].first][P.body[0].second] = "P";
    lastcommand = command;
  }
}