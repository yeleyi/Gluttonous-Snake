#include "map.h"
void mapf(int width, int height, std::string ** map){
  map = new std::string * [width + 2];
  for (int i = 0; i < width + 2; i++)
    map[i] = new std::string [height + 2];
  for (int i = 0; i < width + 2; i++){
    for (int j = 0; j < height + 2; j++){
      if (i == 0 || i == width + 1 || j == 0 || j == height + 1)
        map[width][height] = "#";
      else
        map[width][height] = ".";
    }
  }
}
