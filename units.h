#ifndef GAMEUNITS_H_
#define GAMEUNITS_H_

#include "components.h"

class Game
{
  private:
    int n_player;
    int n_sheriff
    int n_vice;
    int n_outlaw;
    int n_renegade;
    int* player_table;
  public:
    Game();
    void set_n_player(int n);
    void set_playerrole;
}

class Player
{
  private:
    char* role;
    Character ch;
    int life;
    int place; //자리배치
    char* cards_on_h;
    Field fld;
    int range
    

  public:
    Player();
    ~Player();
    void draw();
    int reset_range();
}

#endif