#include "Player.h"
#include "unsorted.h"
#include <iostream>

using namespace std;

int main() {
    Player player1("player1", 5);
    Player player2("player2", 15);
    Player player3("player3", 10);
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
