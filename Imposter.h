#ifndef IMPOSTER_H
#define IMPOSTER_H
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

class Imposter : public Player {
    public:
        Imposter(const std::string& name, int susLevel) : Player(name, susLevel){};
        //Child Class Constructor
        void freezePlayer(Player& otherPlayer);
        // Function: "Freezes" the target player. Penalizes freexing player if target player is already frozen.
        // Pre: Target player must be instantiated.
        // Post: Target player frozen status set to true, if previously not frozen. If target player is already frozen then freezing player's suslevel increased by 5.
        void sabotagePlayer(Player& otherPlayer);
        // Function: Increase target player's if the player is not frozen. Penalizes the sabotaging player if they target player is frozen.
        // Pre: Target player must be instantiated.
        // Post: If the target player is not frozen increase the susLevel by 3, if target player is frozen increases the sabotaging player's suslevel by 5. 
        bool isImposter() const { return true; }
        // Function: Identifies if player is an Imposter class
        // Post: returns true
};

#endif