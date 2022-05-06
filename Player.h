//
// Created by 
//

#ifndef EX2_PLAYER_H
#define EX2_PLAYER_H


/*
 * Features of a player.
 */


/**
 * The following functions are available:           change!
 *   1.1 player	        - Creates a new empty RLE list.
 *   1.2 		    - Deletes an existing RLE list and frees all its resources.
 *   RLEListAppend           - Appends a character to the end of the list.
 *   RLEListSize		        - Returns the total number of characters a given RLE list holds.
 *   RLEListRemove	        - Removes a character at a given index in the list.
 *   RLEListGet              - Returns the character found at a given index.
 *   RLEListExportToString   - Returns a string of all the characters in the RLE list.
 *   RLEListMap              - Transforms the list by applying a given function to each character in the list.
*/





class Player
{
    private:
        char name;  //The name of the player
        int level;  //The current player's level
        int force;  // The force of the player
        int maxHP;  //The max health points
        int HP;     //The current max health
        int coins;  //The amount of the player's coins

    /*
     *C'tor of Player:
     *
     * @param name - 
     * @param level - 
     * @param force - 
     * @param maxHP - 
     * @param HP - 
     * @param coins - 
     * @return
     *      New instance of Player.
    */
    public:
        Player(char name, int level, int force, int maxHP, int HP, int coins);
        ~Player();

    
    explicit Player(char name= '\0', int level = 1, int force= 5, int maxHP= 100, int HP = maxHP, int coins = 0) 
    {
        this->name = name;
        this->level = level;
        this->force = force;
        this->maxHP = maxHP;
        this->HP = HP;
        this->coins = coins;
    }





};

    


//--------------------------------------------------------------


/*
 * Numeric stats of a card.
 */
/*
struct CardStats{
    int force;  // The force of the monster
    int loot; // The profit you get when winning a battle or when getting a "Treasure" card
    int hpLossOnDefeat; // The amount of hp you lose when losing the battle

    int cost; // The cost of a "Buff/Heal" card
    int heal; // The amount of HP you get when buying a "HEAL" card
    int buff; // The amount of force you get when buying a "BUFF" card


    /*
     *C'tor of CardStats:
     *
     * @param force - The force of the card (monster).
     * @param hpLoss - HP loss when losing the battle.
     * @param cost - The cost of the card when is type is "Buff" or "Heal".
     * @param heal - The amount of HP is given when buying a "Heal" card.
     * @param buff - The amount of force is given when buying a "Buff" card.
     * @param loot - The profit from winning a battle or when getting a "Treasure" card.
     * @return
     *      New instance of CardStats.
    */
   /*
    explicit CardStats(int force = 0, int hpLoss = 0, int cost = 0, int heal = 0, int buff = 0, int loot = 0) {
        this->force = force;
        this->hpLossOnDefeat = hpLoss;
        this->cost = cost;
        this->heal = heal;
        this->buff = buff;
        this->loot = loot;
    }
};



/*
 * Prints info of a Battle card:
 *
 * @param card - Stats of the card.
 * @return
 *      void
 */
//void printBattleCardInfo(const CardStats& card);


/*
 * Prints info of a Battle outcomes:
 *
 * @param win - Boolean.
 * @return
 *      void
 */
//void printBattleResult(bool win);


/*
 * Prints info of a Buff card:
 *
 * @param win - Is the player won or lost the battle?
 * @return
 *      void
 */
//void printBuffCardInfo(const CardStats& card);


/*
 * Prints info of a Heal card:
 *
 * @param card - Stats of the card.
 * @return
 *      void
 */
//void printHealCardInfo(const CardStats& card);


/*
 * Prints info of a Treasure card:
 *
 * @param card - Stats of the card.
 * @return
 *      void
 */
//void printTreasureCardInfo(const CardStats& card);


/*
 * Prints the details of the player:
 *
 * @param name - The name of the player.
 * @param level - The player's level.
 * @param force - The player's force.
 * @param hp - The player's HP points.
 * @param coins - The player's amount of coins.
 * @return
 *      void
 */
//void printPlayerInfo(const char* name, int level, int force, int hp, int coins);



#endif //EX2_PLAYER_H
