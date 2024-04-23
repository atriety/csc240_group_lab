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
        void changeSusLevel(int susLevel);
        bool isFrozen();
        void setFrozen(bool isFrozen);
       
    private:
        string name;
        int susLevel;
        bool frozen = false;
};

#endif
