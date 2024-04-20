#include <iostream>
#include <string>

using namespace std;

int main(){
  cout << "How many rows would you like?" << endl;
  int row, column;
  cin >> row;
  cout << "How many columns would you like?" << endl;
  cin >> column;
  int ** map = new int * [row + 2];
  for (int i = 0; i < row + 2; i++)
    map[i] = new int [column + 2];
  for (int i = 0; i < row + 2; i++){
    for (int j = 0; j < column + 2; j++){
      if (i = 0 || i = row + 1 || j = 0 || j = column + 1)
        map[row][column] = 1;
      else
        map[row][column] = 0;
    }
  }
  
  
  for (int i = 0; i < row + 2; i++)
    delete[] map[i];
  delete[] map;
  return 0;
}
