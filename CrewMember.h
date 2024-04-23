#ifndef CREWMEMBER_H
#define CREWMEMBER_H
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

class CrewMember : public Player {
    public:
        CrewMember(const std::string& name, int susLevel) : Player(name, susLevel){};
        void accusePlayer(Player& otherPlayer);
        void runTasks();
        bool isImposter() const { return false; }
};


#endif