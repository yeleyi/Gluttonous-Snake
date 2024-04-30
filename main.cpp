#include <iostream>
#include <thread>
#include <chrono>
#include <ncurses.h>
#include "map.h"
#include "movePlayer.h"
#include "renderMap.h"
#include "randomBeam.h"
#include "player.h"
using namespace std;

int main(){
  int width, height;
  cout << "How wide do you want your map to be?" << endl;
  cin >> width;
  cout << "How high do you want your map to be?" << endl;
  cin >> height;
  while (width < 20 || height < 20){
    cout << "The map is too small. Please input again." << endl;
    cout << "How wide do you want your map to be?" << endl;
    cin >> width;
    cout << "How high do you want your map to be?" << endl;
    cin >> height;
    if (width >= 20 && height >= 20)
      break;
    else
      continue;
  }

  int dirX = 0;
  int dirY = -1;
  // 初始化地图数组
  char **map = new char *[width + 2];
  for (int i = 0; i < width + 2; i++)
        map[i] = new char[height + 2];
  Player P; //创建一个Player P
  P.body.push_back(make_pair(width/2, height/2));
  mapf(width, height, map);
  int beansCount = 0;
  initscr(); // 初始化 ncurses
  cbreak(); // 禁用行缓冲（让按键立即生效）
  noecho(); // 关闭回显

  nodelay(stdscr, true);

  renderMap(width, height, map, P); // 初始渲染地图

  int score = 0;
  int sleep = 520;

  //游戏循环
  while (true){
    // 每个循环休眠一段时间，模拟游戏速度
    if (score % 5 == 0){
      sleep = sleep - 20;
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(sleep));
    // 移动玩家

    int ch = getch();
    movePlayer(width, height, P, map, ch, dirX, dirY, beansCount/* sleep*/);
    //std::this_thread::sleep_for(std::chrono::milliseconds(sleep));
    P.body[0].first += dirX;
    P.body[0].second += dirY;
    if (map[P.body[0].second][P.body[0].first] == '#'){
      // 撞墙，游戏结束
      endwin();
      std::cout << "Game Over!" << std::endl;
      cout << "Your score is " << score << "." << endl;
      exit(0);
    }

    // 检查是否碰撞B
    if (map[P.body[0].second][P.body[0].first] == 'B'){
      beansCount--;
      score = score + 1;
    /*  if (sleep >= 0){
        sleep = sleep - 20;
      }
      else{
        sleep = sleep;
      }*/
      /*auto newCoord = extendPlayerLength(P,map,width, height, dirX, dirY);
      map[newCoord.second][newCoord.first]= 'T';*/
    }
   /* if (map[P.body[0].first][P.body[0].second] == 'P'){
      //撞到自身，游戏结束
      cout << "Game Over!" << endl;
      cout << "Your score is " << score << endl;
        exit(0);
      }*/
    map[P.body[0].second][P.body[0].first] = 'P';
    map[P.body[0].second-dirY][P.body[0].first-dirX] = '.';

    // 检查地图上是否有bean
    if (beansCount == 0) {
      generateBean(width, height, P, map);
      beansCount++;
    }

    renderMap(width, height, map, P); // 更新并重新渲染地图
  }



  for (int i = 0; i < width + 2; i++)
    delete[] map[i];
  delete[] map;
  endwin();
  return 0;
}

                                                                                                                                                                                                 96,1          Bot

