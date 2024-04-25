#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <ncurses.h>
#include "map.hpp"
#include "movePlayer.hpp"
#include "renderMap.hpp"
#include "randomBeam.hpp"
#include "player.hpp"
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
    // 初始化地图数组
    string **map = new string *[width + 2];
    for (int i = 0; i < width + 2; i++)
        map[i] = new string[height + 2];
  Player P; //创建一个Player P
  P.body.push_back(make_pair(width/2, height/2));
  mapf(width, height, map);
  int beansCount = 0;

  initscr(); // 初始化 ncurses
  cbreak(); // 禁用行缓冲（让按键立即生效）
  noecho(); // 关闭回显

  renderMap(width, height, map); // 初始渲染地图

  //游戏循环
  while (true){
    // 每个循环休眠一段时间，模拟游戏速度
    std::this_thread::sleep_for(std::chrono::milliseconds(200));

    // 移动玩家
    movePlayer(width, height, P, map);

    // 检查地图上是否有bean
    if (beansCount < 1) {
      generateBean(width, height, P, map);
      beansCount++;
    }

    // 检查是否碰撞B
    if (map[P.body[0].first][P.body[0].second] == "B"){
      beansCount--;
      extendPlayerLength(P);
    }
    
    renderMap(width, height, map); // 更新并重新渲染地图
  }
  
  
  
  for (int i = 0; i < width + 2; i++)
    delete[] map[i];
  delete[] map;
  return 0;
}
