#include "randomBeam.h"


// generate a random integer for the position of the random bean
int randomInt(int min, int max){
static bool initialized = false;
  if (!initialized){
    srand(time(NULL));
    initialized = true;
  }
  return min + rand() % (max -min + 1);
}

// generate random bean using the random integer
void generateBean(int width, int height, const Player &P, char **map) {
  int beanX, beanY;

  do{
    beanX = randomInt(1, width -2);
    beanY = randomInt(1, height-2);
  } while (map[beanX][beanY] != '.');

  map[beanX][beanY] = 'B';
}

// check if player position = random bean position, if yes don't generate the bean on this position
int isPlayerPosition(int playerX, int playerY, int beanX, int beanY){
  return (playerX != beanX && playerY != beanY);
}

