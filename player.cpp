#include "player.h"

void extendPlayerLength(Player &P) {
  string command, lastcommand;
  int round = 0;
  P.body.push_back(P.body.back());
  for (int i = 1; i < P.body.size(); i++)
    P.body[i] = P.body[i - 1];
  if (round == 1){
    if (command == "w"){
      P.body[0].first = P.body[1].first;
      P.body[0].second = P.body[1].second - 1;
    }
    if (command == "s"){
      P.body[0].first = P.body[1].first;
      P.body[0].second = P.body[1].second + 1;
    }
    if (command == "a"){
      P.body[0].second = P.body[1].second;
      P.body[0].first = P.body[1].first - 1;
    }
    if (command == "d"){
      P.body[0].second = P.body[1].second;
      P.body[0].first = P.body[1].first + 1;
    }
  }
  else if (round == 0){
    if (lastcommand == "w"){
      P.body[0].first = P.body[1].first;
      P.body[0].second = P.body[1].second - 1;
    }
    if (lastcommand == "s"){
      P.body[0].first = P.body[1].first;
      P.body[0].second = P.body[1].second + 1;
    }
    if (lastcommand == "a"){
      P.body[0].second = P.body[1].second;
      P.body[0].first = P.body[1].first - 1;
    }
    if (lastcommand == "d"){
      P.body[0].second = P.body[1].second;
      P.body[0].first = P.body[1].first + 1;
    }
}
