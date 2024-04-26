#include "randomBeam.h"
  
int randomInt(int min, int max){
        static bool initialized = false;
        if (!initialized){
                srand(time(NULL));
                initialized = true;
        }
        return min + rand() % (max -min + 1);
}
// 随机在地图上生成豆子的函数
void generateBean(int width, int height, const Player &P, char **map) {
    int beanX, beanY;

    do{
        beanX = randomInt(1, width -2);
        beanY = randomInt(1, height-2);
    } while (map[beanX][beanY] != '.');
    // 放置bean
    map[beanX][beanY] = 'B';
}

// 判断生成地点是否有Player
int isPlayerPosition(int playerX, int playerY, int beanX, int beanY){
  return (playerX != beanX && playerY != beanY);
}

