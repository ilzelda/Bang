#ifndef GAMEUNITS_H_
#define GAMEUNITS_H_

#include "components.h"

class Player
{
  private:
    char* role;
    Character ch;
    int life;
    int place; //자리배치
    char* cards_on_h;
    struct Field
    {      
    };
    int range;
  public:
    Player();
    ~Player();
    char* rtnRole() {return role;};
    void draw();
    int resetRange();
};

class Game
{
  private:
    int n_player;
    int n_sheriff;
    int n_vice;
    int n_outlaw;
    int n_renegade;
    Player* player_table;
  public:
    Game();
    void set_n_player(int n);
    void setPlayerrole();
};



#endif