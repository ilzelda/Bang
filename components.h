#ifndef COMPONENTS_H_
#define COMPONENTS_H_

Card deck[];
Card used_cards[];

class Field
{
  private:
  // gun
  // items
  public:
    Field();
    ~Field();
}

class Character
{
  private:
    char* name;
    int life;
  public:
    Character();
    ~Character();
    int reset_life();
}

class Card
{
  private:
    char* name;
  public:
    Card():
    ~Card();
}

class Gun
{
  int range;
}
#endif