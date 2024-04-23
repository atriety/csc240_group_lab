#include "Imposter.h"


// Imposter::Imposter(const std::string& name, int susLevel) : Player(name, susLevel) {};

void Imposter::freezePlayer(Player& otherPlayer) {
    if (otherPlayer.isFrozen()) {
        cout << "Player already frozen!!" <<endl;
        changeSusLevel(5);
    } else {
        otherPlayer.setFrozen(true);
    }
    
};

void Imposter::sabotagePlayer(Player& otherPlayer) {
    if (otherPlayer.isFrozen()) {
        cout << "Player already frozen!!" <<endl;
        changeSusLevel(5);
    } else {
        otherPlayer.changeSusLevel(3);
    }
};