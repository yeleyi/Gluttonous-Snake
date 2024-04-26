#include "map.h"
void mapf(int width, int height, char ** map){
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
