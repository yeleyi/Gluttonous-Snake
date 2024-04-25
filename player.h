#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "map.h"
#include "movePlayer.h"
#include <string>
using namespace std;

struct Player{
  std::vector<std::pair<int, int>> body; //玩家的身体，每个元素表示一个身体部位的坐标
};

// 当玩家触碰豆子时调用，扩展玩家长度
void extendPlayerLength(Player &P) { 
  string command, lastcommand;
  int round;
  P.body.push_back(P.body.back());
  for (int i == 1; i < P.body.size(); i++)
    P.body[i] = P.body[i - 1];
  if (round == 1){
    if (command == "w"){
      P.body[0].first = P.body[1].first;
      P.body[0].second = P.body[1].second - 1;
    }
    if (command == "s"){
      P.body[0].first = P.body[1].first;
      P.body[0].second = P.body[1].second + 1;
    }
    if (command == "a"){
      P.body[0].second = P.body[1].second;
      P.body[0].first = P.body[1].first - 1;
    }
    if (command == "d"){
      P.body[0].second = P.body[1].second;
      P.body[0].first = P.body[1].first + 1;
    }
  }
  else if (round == 0){
    if (last command == "w"){
      P.body[0].first = P.body[1].first;
      P.body[0].second = P.body[1].second - 1;
    }
    if (last command == "s"){
      P.body[0].first = P.body[1].first;
      P.body[0].second = P.body[1].second + 1;
    }
    if (last command == "a"){
      P.body[0].second = P.body[1].second;
      P.body[0].first = P.body[1].first - 1;
    }
    if (last command == "d"){
      P.body[0].second = P.body[1].second;
      P.body[0].first = P.body[1].first + 1;
    }
}
#endif
