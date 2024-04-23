#include "Player.h"
#include "CrewMember.h"
#include "Imposter.h"
#include "unsorted.h"
#include <string>
#include <iostream>

using namespace std;
void gameOver(UnsortedType& players);

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
    gameOver(players);
    return 0;
}

// Checks if the game is over by determining the winning side
// Pre: players is a valid UnsortedType containing Player objects
// Post:Prints the result of the game based on the number of impostors and crewmates remaining
//      If there are no impostors, prints "Crewmates Win!"
//      If the number of impostors is greater than or equal to the number of crewmates, prints "Impostors Win!"
void gameOver(UnsortedType& players) {
    int impostorCount = 0;
    int crewmateCount = 0;
    
    players.ResetList();
     for (int i = 0; i < players.GetLength(); i++) {
        Player currentPlayer = players.GetNextItem();
        if (currentPlayer.isFrozen()) {
            continue;  
        }
        if (currentPlayer.isImposter() && !currentPlayer.isFrozen()) {
            impostorCount++;
        } else if (!currentPlayer.isImposter() && !currentPlayer.isFrozen()) {
            crewmateCount++;
        }
    }
    if (impostorCount == 0) {
        cout << "Crewmates Win!" << endl;   
    } else if (impostorCount >= crewmateCount) {
        cout << "Impostors Win!" << endl;
    }
}
