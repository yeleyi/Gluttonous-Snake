#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <ncurses.h>
#include "map.h"
#include "movePlayer.h"
#include "renderMap.h"
#include "random Bean.h"
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
  map(width, height);
  int playerX = width/2;
  int playerY = height/2;

  initscr(); // 初始化 ncurses
  cbreak(); // 禁用行缓冲（让按键立即生效）
  noecho(); // 关闭回显

  renderMap(); // 初始渲染地图

  //游戏循环
  while (true){
    // 每个循环休眠一段时间，模拟游戏速度
    std::this_thread::sleep_for(std::chrono:milliseconds(200));

    // 移动玩家
    movePlayer(width, height, playerX, playerY);
    renderMap(); // 更新并重新渲染地图
  }
  
  
  
  for (int i = 0; i < row + 2; i++)
    delete[] map[i];
  delete[] map;
  return 0;
}
