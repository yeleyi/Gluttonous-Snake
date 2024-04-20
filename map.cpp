#include <iostream>
#include <string>

using namespace std;

int main(){
  cout << "How many rows would you like?" << endl;
  int row, column;
  cin >> row;
  cout << "How many columns would you like?" << endl;
  cin >> column;
  int ** map = new int * [map];
  for (int i = 0; i < row; i++)
    map[i] = new int [column];





  for (int i = 0; i < row; i++)
    delete[] map[i];
  delete[] map;
  return 0;
}
