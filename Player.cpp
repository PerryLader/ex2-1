#include "Player.h"
#include "utilities.h"
#include <string>
#include <stdbool.h>
#include <assert.h>
#include <cstring>
#include <iostream>


const int LEVEL1 = 1 ;
const unsigned int ZERO_COINS = 0 ;
const int ZERO = 0 ;

using std::strcpy;
using std::strlen;



char* Player::allocateAndCopy(const char* str, int size) {
    return strcpy(new char[size+1], str);
}

Player::Player ( char* name , int maxHP , int force) 
{
    
    this -> name = allocateAndCopy(name, strlen(name));         //error: is name const?
    this -> level = LEVEL1 ;
    this -> force = force ;
    this -> maxHP = maxHP ;
    this -> HP = this->maxHP ;  
    this -> coins = ZERO_COINS ;
}

Player::Player (const Player& p1):
    name(p1.name),
    level (p1.level),
    force(p1.force),
    maxHP(p1.maxHP),
    HP(p1.HP),
    coins(p1.coins){
}

Player&  Player::operator=( const Player& p1)
{
    if (this== &p1)
    {
        return *this;
    }

    name = p1.name;
    level = p1.level;
    force= p1.force; 
    maxHP= p1.maxHP;
    HP=p1.HP;
    coins=p1.coins;
    
    return *this;
}

Player::~Player()
{
    delete[] name; 
}



//----------------------------------------------------

void Player::printInfo ()
{
    printPlayerInfo( this -> name , this -> level , this -> force , this -> HP , this -> coins ) ;
}

void Player::levelUp ()
{
    if (this->level < 10)
    {
        this -> level++ ;
    }
}

int Player::getLevel ()
{
    return this -> level ;
}

void Player::buff (int addForce)
{
    this->force += addForce;
}

void Player::heal (int addHP)
{
    this -> HP += addHP ;
    if (this -> HP > this -> maxHP)
    {
        this -> HP = this -> maxHP;
    }
}

void Player::damage (int removeHP)
{
    this -> HP -= removeHP ;
    if (this -> HP < ZERO )
    {
        this -> HP = ZERO;
    }
}

bool Player::isKnockedOut ()
{
    if( this -> HP <= ZERO )
    {
        return true ; 
    }
    return false ;
}

void Player::addCoins ( unsigned int plusCoins)
{
    assert ( plusCoins >= 0 );
    this -> coins += plusCoins;

}

bool Player::pay ( unsigned int coinsToPay)
{
    assert ( coinsToPay ) ;
    if ( coinsToPay > this -> coins )      
    {
        return false ;
    }
    this -> coins -= coinsToPay ;
    assert ( this -> coins >= ZERO) ;
    return true;
}

int Player::getAttackStrength()
{
    int attackForce= 0;
    attackForce += this-> force;
    attackForce += this-> level;

    return attackForce;
}
