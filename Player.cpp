#include "Player.h"
#include "utilities.h"
#include <string>
#include <stdbool.h>
#include <assert.h>

const int LEVEL1 = 1 ;
const unsigned int ZERO_COINS = 0 ;
const int ZERO = 0 ;




Player(char name, int level, int force, int maxHP, int HP, int coins)
{
    this->name= name;
    this->level= level;
    this->force= force;
    this->maxHP= maxHP;
    this->HP= HP;
    this->coins= coins;
}

Player::~Player()
{
    delete name;
    delete level;
    delete force;
    delete maxHP;
    delete HP;
    delete coins;

}