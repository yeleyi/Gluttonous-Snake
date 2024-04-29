#include "movePlayer.h"
#include <thread>
#include <chrono>

using namespace std;
  
void movePlayer(int width, int height, Player &P, char **map,int ch, int &dirX, int &dirY, int &beansCount, int &sleep){
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
}

