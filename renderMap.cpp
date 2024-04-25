#include "renderMap.h"
#include <iomanip>

void renderMap(int width, int height, char **map){
  clear();
  for (int y=0; y<height; ++y){
    for (int x=0; x<width; ++x){
            printw("%c", map[y][x]);
    }
    printw("\n");
  }
  refresh(); // 刷新屏幕
}

