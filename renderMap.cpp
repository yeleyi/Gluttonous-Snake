#include "renderMap.h"
  
void renderMap(int width, int height, char **map, Player &P){
  clear();
  for (int y=0; y<height; ++y){
    for (int x=0; x<width; ++x){
      printw("%c", map[y][x]);
    }
    printw("\n");
  }

  for (int i=1; i<P.body.size(); ++i){
    map[P.body[i].second][P.body[i].first] = 'T';
  }

  refresh();
}

