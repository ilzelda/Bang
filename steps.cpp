#include <iostream>

#include "units.h"

using std::cout;
using std::cin;

void PrepareGame(Game bang)
{
  int n_players;
  cout << "number of players (4 ~ 7): ";
  cin >> n_players;
  bang.set_n_player(n_players);
  
}