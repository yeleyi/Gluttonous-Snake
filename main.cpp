#include <iostream>
#include <string>
#include "map.h"
using namespace std;

int main(){
  map();
  
  for (int i = 0; i < row + 2; i++)
    delete[] map[i];
  delete[] map;
  return 0;
}
