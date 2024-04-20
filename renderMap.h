#ifndef RENDERMAP_H
#define RENDERMAP_H
#include <ncurses.h>

// 渲染地图
void renderMap(int width, int height, char map){
  clear();
  for (int y=0; y<height; ++y){
    for (int x=0; x<width; ++x){
      printw("%c", map[y][x]);
    }
    printw("\n");
  }
  refresh(); // 刷新屏幕
}

#endif
