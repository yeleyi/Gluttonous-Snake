#ifndef RANDOM_BEAM_H
#define RANDOM_BEAM_H

#include <stdlib.h>
#include <time.h>

// 随机生成数字的函数
int randomInt(int min, int max){
  return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}
// 随机在地图上生成豆子的函数
void generateBean(int width, int height, int playerX, int playerY, char map[width][height]){
  int beanX, beanY;

  // 生成随机豆子的位置
  do {
    beanX = randomInt(0, width - 1);
    beanY = randomInt(0, height - 1);
  } while (map[beanX][beanY] != '#' || isPlayerPosition(playerX, playerY, beanX, beanY));

  // 放置B
  map[beanX][beanY] = 'B';
}

// 判断生成地点是否有Player
int isPlayerPosition(int playerX, int playerY, int beanX, int beanY){
  return (playerX == beanX && playerY == beanY);
}
#endif
