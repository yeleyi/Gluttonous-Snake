#include "map.h"
void mapf(int width, int height, char ** map){
  //map = new std::string * [width + 2];
  /* for (int i = 0; i < width + 2; i++){
        //map[i] = new std::string [height + 2];
        for (int i = 0; i < width + 2; i++){
            for (int j = 0; j < height + 2; j++){
                if (i == 0 || i == width + 1 || j == 0 || j == height + 1)
                    map[width][height] = '#';
                else
                    map[width][height] = '.';
            }
        }
    }*/
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            map[y][x] = '.';
        }
    }

    // 设置边界为 '#'
    for (int x = 0; x < width; ++x) {
        map[0][x] = '#';
        map[height - 1][x] = '#';
    }
    for (int y = 0; y < height; ++y) {
        map[y][0] = '#';
        map[y][width - 1] = '#';
    }
}
