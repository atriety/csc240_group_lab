#ifndef PLAYER
#define PLAYER
#include <iostream>
#include <string>
using namespace std;

class Player {
    public:
        Player();
        Player(string name, int susLevel);
        int compareTo(Player* otherPlayer);
        bool equals(Player* otherPlayer);
        string toString();
        string getName();
        int getSusLevel();
        void setSusLevel(int susLevel);
        bool isFrozen();
        void setFrozen(bool isFrozen);
       
    private:
        string name;
        int susLevel;
        bool frozen = false;
};


class Crewmate: public Player {

};


class Imposter: public Player {


// sort function to find highest level player
// sort function to find lowest level player

};


#endif
