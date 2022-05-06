#ifndef EX2_PLAYER_H
#define EX2_PLAYER_H

#include <iostream>
#include <string>
#include <stdbool.h>
#include <assert.h>



class Player
{
    private:
        char* name;  //The name of the player
        int level;  //The current player's level
        int force;  // The force of the player
        int maxHP;  //The max health points
        int HP;     //The current max health
        unsigned int coins;  //The amount of the player's coins

        static char* allocateAndCopy(const char* str, int size);

    public:
        Player ( char* name , int maxHP = 100 , int force= 5);    //constructor
        Player (const Player& p1); //copy
        ~Player();  //deconstructor
        Player&  operator = ( const Player& p1);  //assigning
        
        
        void printInfo();
        void levelUp();
        int getLevel();
        void buff(int addForce);
        void heal (int addHP);
        void damage(int removeHP);
        bool isKnockedOut ();
        void addCoins(unsigned int plusCoins);
        bool pay ( unsigned int coinsToPay);
        int getAttackStrength();

};

    
#endif //EX2_PLAYER_H
