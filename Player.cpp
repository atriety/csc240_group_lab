#include "Player.h"
#include <iostream>
#include <string>
using namespace std;
const int MAX_ITEMS = 11;

// Class constructor
// Post: player's name is set to empty string and susLevel is set to 0.
Player::Player() {
    name = "";
    susLevel = 0; 
}

// Constructor with parameters
// Pre: name is a valid string representing the player's name and 
//      susLevel is an integer representing the suspicion level.
// Post:Initializes the name and susLevel of the player.
//      If susLevel is non-negative, sets the player's suspicion level to susLevel.
//      Otherwise, sets the suspicion level to 0.
Player::Player(string name, int susLevel) {
    this->name = name;
     if (susLevel >= 0) {
        this->susLevel = susLevel;
    } else {
        this->susLevel = 0;
    }   
}

// Compares this player's susLevel with another player's.
// Pre: otherPlayer points to a valid Player object.
// Post: Returns 0 if both players have the same susLevel. Otherwise, return 1.
int Player::compareTo(Player* otherPlayer) {
    return susLevel - otherPlayer->getSusLevel();
};

// Checks if this player is equal to another player.
// Pre: otherPlayer points to a valid Player object.
// Post: Returns true if both players have the same name, susLevel, and frozen status. Otherwise, returns false.
bool Player::equals(Player* otherPlayer) {
    return name == otherPlayer->getName() && frozen == otherPlayer->isFrozen() && susLevel == otherPlayer->getSusLevel();
};

// Converts Player object to a string representation.
// Post: Returns a string containing the player's name, susLevel, and frozen status.
string Player::toString() {
    string frozenString = frozen ? "frozen" : "not frozen";
    return "My name is " + name + ", and I have a susLevel of " + to_string(susLevel) + ". I am currently " + frozenString + ".";
};

// Returns the name of the player.
// Post: Returns the name of the player as a string.
string Player::getName() {
    return name;
};

// Returns the susLevel of the player.
// Post: Returns the susLevel of the player as an integer.
int Player::getSusLevel() {
    return susLevel;
};

// Sets the susLevel of the player.
// Post: Sets the susLevel of the player to the specified value.
void Player::setSusLevel(int susLevel) {
    this->susLevel = susLevel;
};

// Changes the susLevel of the player by a specified amount.
// Post: Increases or decreases the susLevel of the player by the specified amount.
void Player::changeSusLevel(int susAmount) {
    int tempSus = this->susLevel + susAmount;
    setSusLevel(tempSus);
};

// Checks if the player is frozen.
// Post: Returns true if the player is frozen, otherwise returns false.
bool Player::isFrozen() {
    return frozen;
};

// Sets the frozen status of the player.
// Post: Sets the frozen status of the player to the specified boolean value.
void Player::setFrozen(bool isFrozen) {
    frozen = isFrozen;
};
        