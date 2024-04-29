#ifndef CREWMEMBER_H
#define CREWMEMBER_H
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

class CrewMember : public Player {
    public:
        CrewMember(const std::string& name, int susLevel) : Player(name, susLevel){};
        //Child Class Constructor
        void accusePlayer(Player& otherPlayer);
        // Function: Modifies the susLevels based on the relative value of the target player's susLevel.
        // Pre: Both players have a susLevel that is a valid integer.
        // Post: Increase the target player's susLevel if their level is higher than the accusing player. Increase the accusing player's susLevel by 3 if the susLevels are equal. 
        // Increase the accusing player's susLevel by 5 is the opposing player's susLevel is lower.
        void runTasks();
        // Function: Modifies the current player's susLevel. 
        // Pre: susLevel is a valid integer.
        // Post: If susLevel is less than 5 but greater than 0 set to 0. If suslevel greater than 5 reduce suslevel by 5. If susLevel is less that or equal 0 then increase susLevel by 5. 
        bool isImposter() const { return false; }
        // Function: Identifies if player is an Imposter class
        // Post: returns false

};
#endif