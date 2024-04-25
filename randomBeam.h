#ifndef RANDOM_BEAM_H
#define RANDOM_BEAM_H

#include <iostream>
#include <ctime>
#include "player.h"

// 随机生成数字的函数
int randomInt(int min, int max){
  return min + rand() % (max -min + 1);
}
// 随机在地图上生成豆子的函数
void generateBean(int width, int height, const Player &P, char map[width][height]) {
    int beanX, beanY;

    // 随机生成bean的位置
    if (map[beanX][beanY] != '#' && isPlayerPosition(P.body[0].first, P.body[0].second, beanX, beanY)){
      beanX = randomInt(0, width-1);
      beanY = randomInt(0, height-1);
    }
    // 放置bean
    map[beanX][beanY] = 'B';
}

// 判断生成地点是否有Player
int isPlayerPosition(int playerX, int playerY, int beanX, int beanY){
  return (playerX != beanX && playerY != beanY);
}

#endif
