#include "movePlayer.h"
#include <thread>
#include <chrono>

using namespace std;

// detect player input and change direction of player P.

void movePlayer(int width, int height, Player &P, char **map,int ch, int &dirX, int &dirY, int &beansCount){
    if (ch != ERR) {
        switch (ch) {
            case 'w':

                if (dirX!=0){
                    dirX=0;
                    dirY=-1;
                    }
                break;
            case 's':

                if (dirX!=0){
                    dirX=0;
                    dirY=1;
                }

                break;
            case 'a':

                if (dirY!=0){
                    dirX=-1;
                    dirY=0;
                }
                break;
            case 'd':

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

