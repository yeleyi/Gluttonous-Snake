#include <iostream>
#include <string>

using namespace std;

int main(){
  
  
  
  for (int i = 0; i < row + 2; i++)
    delete[] map[i];
  delete[] map;
  return 0;
}
