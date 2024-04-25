#include "movePlayer.h"
#include <iostream>

void movePlayer(int width, int height, Player &P, char **map, char command, char lastcommand, int round,int ch, int &dirX, int &dirY){
      if (ch != ERR) {
            switch (ch) {
                case 'w':
                    // 上移逻辑
                        std::cout << "检测到w移动"<<std::endl;
                    if (dirX!=0){
                        dirX=0;
                        dirY=-1;
                    }
                    break;
                case 's':
                    // 下移逻辑
                    std::cout << "检测到s移动"<<std::endl;
                    if (dirX!=0){
                        dirX=0;
                        dirY=1;
                    }
                    break;
                case 'a':
                    // 左移逻辑
                    std::cout << "检测到a移动"<<std::endl;
                    if (dirY!=0){
                        dirX=-1;
                        dirY=0;
                    }
                    break;
                case 'd':
                    // 右移逻辑
                    std::cout << "检测到d移动"<<std::endl;
                    if (dirY!=0){
                        dirX=1;
                        dirY=0;
                    }
                    break;
                default:
                    break;
            }
            flushinp();
        }
    P.body[0].first += dirX;
    P.body[0].second += dirY;
    if (map[P.body[0].second][P.body[0].first] == '#'){
      // 撞墙，游戏结束
        endwin();
        std::cout << "Game Over!" << std::endl;
        exit(0);
    }
   /* if (map[P.body[0].first][P.body[0].second] == 'P'){
      //撞到自身，游戏结束
      cout << "Game Over!" << endl;
        exit(0);
      }*/
    map[P.body[0].second][P.body[0].first] = 'P';
    map[P.body[0].second-dirY][P.body[0].first-dirX] = '.';
    lastcommand = command;
}

