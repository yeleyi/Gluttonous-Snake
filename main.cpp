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
  cout << "How large do you want your map to be?" << endl;
  cin >> width;
  height = width;
  while (width < 20 || height < 20){
    cout << "The map is too small. Please input again." << endl;
    cout << "How large do you want your map to be?" << endl;
  cin >> width;
    if (width >= 20 && height >= 20)
      break;
    else
      continue;
  }

  int dirX = 0;
  int dirY = -1;

  char **map = new char *[width + 2];
  for (int i = 0; i < width + 2; i++)
    map[i] = new char[height + 2];
  Player P;
  P.body.push_back(make_pair(width/2, height/2));
  mapf(width, height, map);
  int beansCount = 0;
  
  initscr();
  cbreak();
  noecho();

  nodelay(stdscr, true);

  renderMap(width, height, map, P);

  int score = 0;
  int speed = 550-width-height;
  int level = 0;


  while (true){

    if (score == 3){
        level =1;
    }
    if (score == 6){
        level =2;
    }
    if (score == 9){
        level =3;
    }
    if (score == 12){
        level =4;
    }
    if (score == 15){
        level =5;
    }
    if (score == 18){
        level = 6;
    }
    if (score == 21){
        level = 7;
    }
    if (score == 24){
        level = 8;
    }
    if (score == 27){
        level = 9;
    }
    if (score == 30){
        endwin();
        std::cout << "You Win!" << std::endl;
        cout << "Your score is " << score << "." << endl;
        exit(0);
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(speed-level*(speed/11)));

    int ch = getch();
    movePlayer(width, height, P, map, ch, dirX, dirY, beansCount);

    P.body[0].first += dirX;
    P.body[0].second += dirY;
    if (map[P.body[0].second][P.body[0].first] == '#'){

      endwin();
      std::cout << "Game Over!" << std::endl;
      cout << "Your score is " << score << "." << endl;
      exit(0);
    }


    if (map[P.body[0].second][P.body[0].first] == 'B'){
      beansCount--;
      score = score + 1;
    }
   
    map[P.body[0].second][P.body[0].first] = 'P';
    map[P.body[0].second-dirY][P.body[0].first-dirX] = '.';


    if (beansCount == 0) {
      generateBean(width, height, P, map);
      beansCount++;
    }

    renderMap(width, height, map, P);
  }



  for (int i = 0; i < width + 2; i++)
    delete[] map[i];
  delete[] map;
  endwin();
  return 0;
}
