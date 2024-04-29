#include "CrewMember.h"

using namespace std;

void CrewMember::accusePlayer(Player& otherPlayer){
    if (getSusLevel() > otherPlayer.getSusLevel()) {
        otherPlayer.changeSusLevel(5);
    } else if (getSusLevel() == otherPlayer.getSusLevel()) {
        changeSusLevel(3);
    } else {
        otherPlayer.changeSusLevel(5);
    } 
};

void CrewMember::runTasks(){
    if (getSusLevel() < 5 && getSusLevel() > 0) {
        setSusLevel(0);
    } else if (getSusLevel() <= 0){
        cout << "You have no sus but continue to do tasks which is sus..." <<endl;
        changeSusLevel(5);
    } else {
        changeSusLevel(-5);
    }
};