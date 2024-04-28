#ifndef PLAYER
#define PLAYER
#include <iostream>
#include <string>
using namespace std;

class Player {
    public:
        Player();
        // Constructor.
        Player(string name, int susLevel);
        // Constructor with parameters.
        int compareTo(Player* otherPlayer);
        // Function: Compares this player's susLevel with another player's.
        // Pre: otherPlayer points to a valid Player object.
        // Post: Returns 0 if both players have the same susLevel. Otherwise, return 1.
        bool equals(Player* otherPlayer);
        // Function: Checks if this player is equal to another player.
        // Pre: otherPlayer points to a valid Player object.
        // Post: Returns true if both players have the same name, susLevel, and frozen status. Otherwise, returns false.
        string toString();
        // Function: Converts Player object to a string representation.
        // Post: Returns a string containing the player's name, susLevel, and frozen status.
        string getName();
        // Function: Returns the name of the player.
        // Post: Returns the name of the player as a string.
        int getSusLevel();
        // Function: Returns the susLevel of the player.
        // Post: Returns the susLevel of the player as an integer.
        void setSusLevel(int susLevel);
        // Function: Sets the susLevel of the player.
        // Pre: susLevel is a valid integer.
        // Post: Sets the susLevel of the player to the specified value.
        void changeSusLevel(int susLevel);
        // Function: Changes the susLevel of the player by a specified amount.
        // Pre: susLevel is a valid integer.
        // Post: Increases or decreases the susLevel of the player by the specified amount.
        bool isFrozen();
        // Function: Checks if the player is frozen.
        // Post: Returns true if the player is frozen, otherwise returns false.
        void setFrozen(bool isFrozen);
        // Function: Sets the frozen status of the player.
        // Pre: isFrozen is a valid boolean value.
        // Post: Sets the frozen status of the player to the specified boolean value.
        bool isImposter() const  { return true; }

    private:
        string name; // Name of the player
        int susLevel; // Suspicion level of the player
        bool frozen = false; // Frozen status of the player
};

#endif
