#ifndef MAP_H
#define MAP_H
#include <string>
void map(){
  int width, height;
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
  string ** map = new string * [row + 2];
  for (int i = 0; i < row + 2; i++)
    map[i] = new string [column + 2];
  for (int i = 0; i < row + 2; i++){
    for (int j = 0; j < column + 2; j++){
      if (i = 0 || i = row + 1 || j = 0 || j = column + 1)
        map[row][column] = "#";
      else
        map[row][column] = ".";
    }
  }
}

#endif
