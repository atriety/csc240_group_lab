#include "Player.h"
#include <iostream>
#include <string>
using namespace std;
const int MAX_ITEMS = 11;

Player::Player() {
    name = "";
    susLevel = 0; 
}

Player::Player(string name, int susLevel) {
    this->name = name;
     if (susLevel >= 0) {
        this->susLevel = susLevel;
    } else {
        this->susLevel = 0;
    }   
}

int Player::compareTo(Player* otherPlayer) {
    return susLevel - otherPlayer->getSusLevel();
};

bool Player::equals(Player* otherPlayer) {
    return name == otherPlayer->getName() && frozen == otherPlayer->isFrozen() && susLevel == otherPlayer->getSusLevel();
};

string Player::toString() {
    string frozenString = frozen ? "frozen" : "not frozen";
    return "My name is " + name + ", and I have a susLevel of " + to_string(susLevel) + ". I am currently " + frozenString + ".";
};

string Player::getName() {
    return name;
};

int Player::getSusLevel() {
    return susLevel;
};

void Player::setSusLevel(int susLevel) {
    this->susLevel = susLevel;
};

void Player::changeSusLevel(int susAmount) {
    int tempSus = this->susLevel + susAmount;
    setSusLevel(tempSus);
};

bool Player::isFrozen() {
    return frozen;
};

void Player::setFrozen(bool isFrozen) {
    frozen = isFrozen;
};
        