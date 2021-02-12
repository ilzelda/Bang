#include <iostream>
#include <cstdlib>

#include "units.h"

Game::Game()
{
  n_sheriff=1;
  n_renegade=1;
}

void Game::set_n_player(int n)
{
  n_player=n;

  if(n_player==5)
  {
    n_vice=1;
    n_outlaw=2;
  }
  else if(n_player==6)
  {
    n_vice=1;
    n_outlaw=3;
  }
  else if(n_player==7)
  {
    n_vice=2;
    n_outlaw=3;
  }
  else if(n_player==8)
  {
    n_vice=2
    n_outlaw=3;
    n_renegade=2;
  }

  player_table= new int[n_player];
}

void Game::set_playerrole
{
  
}