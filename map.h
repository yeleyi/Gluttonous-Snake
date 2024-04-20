#ifndef MAP_H
#define MAP_H
#include <string>
void map(){
  int row, column;
  cout << "How many rows would you like?" << endl;
  cin >> row;
  cout << "How many columns would you like?" << endl;
  cin >> column;
  while (row <  || column < ){
    cout << "The map is too small. Please input again." << endl;
    cout << "How many rows would you like?" << endl;
    cin >> row;
    cout << "How many columns would you like?" << endl;
    cin >> column;
    if (row >=  && column >= )
      break;
    else
      continue;
  }
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
}

#endif
