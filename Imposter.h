#ifndef IMPOSTER_H
#define IMPOSTER_H
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

class Imposter : public Player {
    public:
        Imposter(const std::string& name, int susLevel) : Player(name, susLevel){};
        void freezePlayer(Player& otherPlayer);
        void sabotagePlayer(Player& otherPlayer);
        bool isImposter() const { return true; }
};

#endif