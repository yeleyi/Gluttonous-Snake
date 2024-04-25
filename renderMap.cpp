#include "renderMap.h"

void renderMap(int width, int height, std::string **map){
  clear();
  for (int y=0; y<height; ++y){
    for (int x=0; x<width; ++x){
      printw("%c", map[y][x].c_str());
    }
    printw("\n");
  }
  refresh(); // 刷新屏幕
}
