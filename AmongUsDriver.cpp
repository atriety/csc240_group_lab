#include "Player.h"
#include "CrewMember.h"
#include "Imposter.h"
#include "unsorted.h"
#include <iostream>

using namespace std;


// void showRankings() {
// sort function to find sus levels and if frozen moved to bottom
// }

int main() {
    CrewMember player1("player1", 5);
    CrewMember player2("player2", 15);
    Imposter player3("player3", 10);
    cout << player1.getName() << " " << player1.getSusLevel()<< endl;
    cout << player2.getName() << " " << player2.getSusLevel()<< endl;
    cout << player3.getName() << " " << player3.getSusLevel()<< endl;
    player3.sabotagePlayer(player1);
    player3.sabotagePlayer(player1);
    player3.sabotagePlayer(player1);
    player3.sabotagePlayer(player1);
    player1.accusePlayer(player3);
    player2.runTasks();
    cout << player1.getName() << " " << player1.getSusLevel()<< endl;
    cout << player2.getName() << " " << player2.getSusLevel()<< endl;
    cout << player3.getName() << " " << player3.getSusLevel()<< endl;
    UnsortedType players;
    players.PutItem(player1);
    players.PutItem(player2);
    players.PutItem(player3);
    players.Print();
    return 0;
}
