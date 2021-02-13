#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

#include "units.h"

using std::string;

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
    n_vice=2;
    n_outlaw=3;
    n_renegade=2;
  }

  player_table= new Player[n_player];
}

void Game::setPlayerrole()
{
  const char* rolelist[4]={"sheriff","vice","outlaw","renegade"};
  
  srand((static_cast<unsigned int>(time(NULL))));
  int* shuffle= new int[n_player];
  for(int i=0;i<n_player;i++)
  {
    shuffle[i]=i;
  }
  for(int i=0;i<50;i++)
  {
    int x=rand()%n_player;
    int y=rand()%n_player;
    int temp=shuffle[x];
    shuffle[x]=shuffle[y];
    shuffle[y]=temp;
  }
  
  for(int i=0;i<n_player;)
  {
    for(int j=0;j<4;j++)
    if(j==0)
    {
      for(int count=0;count<n_sheriff;count++)
      {
        strcpy(player_table[shuffle[i]].rtnRole(),rolelist[j]);
      }
    }
    else if(j==1)
    {
      for(int count=0;count<n_vice;count++)
      {
        strcpy(player_table[shuffle[i]].rtnRole(),rolelist[j]);
      }
    }
    else if(j==2)
    {
      for(int count=0;count<n_outlaw;count++)
      {
        strcpy(player_table[shuffle[i]].rtnRole(),rolelist[j]);
      }
    }
    else if(j==3)
    {
      for(int count=0;count<n_renegade;count++)
      {
        strcpy(player_table[shuffle[i]].rtnRole(),rolelist[j]);
      }
    }
  }
}