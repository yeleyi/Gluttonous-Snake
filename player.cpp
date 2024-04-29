#include "player.h"
  
pair<int, int> extendPlayerLength(Player &P, char **map, int width, int height, int dirX, int dirY) {
    /*P.body.push_back(P.body.back());
    string command, lastcommand;
    int round = 0;
    for (int i = 1; i < P.body.size(); i++)
        P.body[i] = P.body[i - 1];
    if (round == 1){
        if (command == "w"){
            P.body[0].first = P.body[1].first;
            P.body[0].second = P.body[1].second - 1;
        }
        if (command == "s"){
            P.body[0].first = P.body[1].first;
            P.body[0].second = P.body[1].second + 1;
        }
        if (command == "a"){
            P.body[0].second = P.body[1].second;
            P.body[0].first = P.body[1].first - 1;
        }
        if (command == "d"){
            P.body[0].second = P.body[1].second;
            P.body[0].first = P.body[1].first + 1;
        }
    }
    else if (round == 0){
        if (lastcommand == "w"){
            P.body[0].first = P.body[1].first;
            P.body[0].second = P.body[1].second - 1;
        }
        if (lastcommand == "s"){
            P.body[0].first = P.body[1].first;
            P.body[0].second = P.body[1].second + 1;
        }
        if (lastcommand == "a"){
            P.body[0].second = P.body[1].second;
            P.body[0].first = P.body[1].first - 1;
        }
        if (lastcommand == "d"){
            P.body[0].second = P.body[1].second;
            P.body[0].first = P.body[1].first + 1;
        }
    }*/
    /*获取玩家当前的位置和移动方向
        int currentX = P.body.back().first;
        int currentY = P.body.back().second;

        // 根据移动方向确定新的坐标
        int newX = currentX-dirX;
        int newY = currentY-dirY;

        // 检查新的位置是否在地图范围内
        if (map[newY][newX] != 'T') {
                return make_pair(newX, newY);
        }
        else{
                for (int y=0; y<height; ++y){
                        for (int x=0; x<width; ++x){
                                if (map[y][x] == 'T'){
                                        return make_pair(x,y);
                                }
                        }
                }
        }
        return make_pair(currentX, currentY);*/
  
}
