#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "map.h"

using namespace std;

struct Player{
  std::vector<std::pair<int, int>> body; //玩家的身体，每个元素表示一个身体部位的坐标
};

// 当玩家触碰豆子时调用，扩展玩家长度
  void extendPlayerLength(Player &player) {
    if 
    player.body.push_back(player.body.back());
  }

#endif
