#ifndef MAP_H
#define MAP_H
#include <string>
//Initialized the map with "#" at the edge and "." in the middle
void map(int width, int height){
  string ** map = new string * [width + 2];
  for (int i = 0; i < width + 2; i++)
    map[i] = new string [height + 2];
  for (int i = 0; i < width + 2; i++){
    for (int j = 0; j < height + 2; j++){
      if (i == 0 || i == width + 1 || j == 0 || j == height + 1)
        map[width][height] = "#";
      else
        map[width][height] = ".";
    }
  }
}

#endif
