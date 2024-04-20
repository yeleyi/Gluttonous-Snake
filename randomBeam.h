#ifndef RANDOM_BEAM_H
#define RANDOM_BEAM_H

#include <iostream>
#include <ctime>

int beansCount = 0;

// 随机生成数字的函数
int randomInt(int min, int max){
  return min + rand() % (max -min + 1);
}
// 随机在地图上生成豆子的函数
void RandomBeam::generateBean() {
    if (beansCount_ >= 3) {
        return;
    }

    int beanX, beanY;
    do {
        beanX = randomInt(0, width_ - 1);
        beanY = randomInt(0, height_ - 1);
    } while (map_[beanX][beanY] != ' ' || isPlayerPosition(beanX, beanY));

    map_[beanX][beanY] = 'B'; // Assuming 'B' represents a bean
    ++beansCount_;
}

// 判断生成地点是否有Player
int isPlayerPosition(int playerX, int playerY, int beanX, int beanY){
  return (playerX == beanX && playerY == beanY);
}
#endif
