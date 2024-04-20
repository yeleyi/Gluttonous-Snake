#include <iostream>
#include <string>
#include "map.h"
#include "movePlayer.h"
using namespace std;

int main(){
  int width, height;
  cout << "How wide do you want your map to be?" << endl;
  cin >> width;
  cout << "How high do you want your map to be?" << endl;
  cin >> height;
  while (width <  || height < ){
    cout << "The map is too small. Please input again." << endl;
    cout << "How wide do you want your map to be?" << endl;
    cin >> width;
    cout << "How high do you want your map to be?" << endl;
    cin >> height;
    if (width >=  && height >= )
      break;
    else
      continue;
  }
  map(width, height);
  int playerX = width/2;
  int playerY = height/2;
  
  for (int i = 0; i < row + 2; i++)
    delete[] map[i];
  delete[] map;
  return 0;
}
