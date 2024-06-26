#include "unsorted.h"
#include <iostream>
using namespace std;
enum RelationType  {LESS, GREATER, EQUAL};

struct NodeType
{
    Player info;
    NodeType* next;
};

UnsortedType::UnsortedType()  // Class constructor
{
  length = 0;
  listData = NULL;
}
bool UnsortedType::IsFull() const
// Returns true if there is no room for another ItemType
//  on the free store; false otherwise.
{
  NodeType* location;
  try
  {
    location = new NodeType;
    delete location;
    return false;
  }
  catch(std::bad_alloc exception)
  {
    return true;
  }
}

int UnsortedType::GetLength() const
// Pre: UnsortedType is instantiated.
// Post: Number of items in the list is returned.
{
  return length;
}

void UnsortedType::MakeEmpty()
// Pre: UnsortedType is instantiated.
// Post: List is empty; all items have been deallocated.
{
  NodeType* tempPtr;

    while (listData != NULL)
    {
      tempPtr = listData;
      listData = listData->next;
      delete tempPtr;
  }
  length = 0;
}
void UnsortedType::PutItem(Player player)
// item is in the list; length has been incremented.
{
  NodeType* location;			// Declare a pointer to a node

  location = new NodeType;		// Get a new node 
  location->info = player;		// Store the item in the node
  location->next = listData;	// Store address of first node 
						//   in next field of new node
  listData = location;		// Store address of new node into
						//   external pointer
  length++;				// Increment length of the list
}

Player UnsortedType::GetItem(Player& player, bool& found)
// Pre:  Key member(s) of item is initialized.
// Post: If found, item's key matches an element's key in the 
//       list and a copy of that element has been stored in item;
//       otherwise, item is unchanged. 
{
  bool moreToSearch;
  NodeType* location;

  location = listData;
  found = false;
  moreToSearch = (location != NULL);

  while (moreToSearch && !found) 
  {
    switch (player.compareTo(&(location->info)))
    {
      case LESS    : 
      case GREATER : location = location->next;
                     moreToSearch = (location != NULL);
                     break;
      case EQUAL   : found = true;
                     player = location->info;
                     break;
    }
  }
  return player;
}

 void UnsortedType::DeleteItem(Player player)
// Pre:  item's key has been initialized.
//       An element in the list has a key that matches item's.
// Post: No element in the list has a key that matches item's.
{
  NodeType* location = listData;
  NodeType* tempLocation;

  // Locate node to be deleted.
  if (player.compareTo(&(listData->info)) == EQUAL) {
    tempLocation = location;
    listData = listData->next;		// Delete first node.
  } else {
    while (player.compareTo(&((location->next)->info)) != EQUAL)
      location = location->next;

    // Delete node at location->next
    tempLocation = location->next;
    location->next = (location->next)->next;
  }
  delete tempLocation;
  length--;
}

void UnsortedType::ResetList()
// Post: Current position has been initialized.
{
  currentPos = NULL;
}
 
Player UnsortedType::GetNextItem()
// Post:  A copy of the next item in the list is returned.
//        When the end of the list is reached, currentPos
//        is reset to begin again.
{
  Player player;
  if (currentPos == NULL)
    currentPos = listData;
  else
    currentPos = currentPos->next;
  player = currentPos->info;
  return player;
}

UnsortedType::~UnsortedType()
// Post: List is empty; all items have been deallocated.
{
  NodeType* tempPtr;

  while (listData != NULL)
  {
    tempPtr = listData;
    listData = listData->next;
    delete tempPtr;
  }
}

void UnsortedType::Print()
// Print all elements in the list
// Post-condition: Prints all elements in the list if the list is not empty. If the list is empty, it prints "Empty list."
{
  ResetList();
	if(length == 0){
		cout << "Empty list." << endl;
	} else{
		Player playerTmp;
		do{
			playerTmp = GetNextItem();
			cout << playerTmp.toString() << endl;
		}while(currentPos->next != NULL);
	}
}

void UnsortedType::SortPlayers() 
//Uses Bubble sort algorithm to sort players based on their Suslevels and prints out rankings.
// Pre: players is a valid UnsortedType containing Player objects
// Post: Sorts the players UnsortedType and prints the players rankings based on ascending order of susLevel.
  {
    ResetList();
    if (GetLength() <= 1) {
      return;
    }
    
    for(int i = 0; i < GetLength() - 1; ++i) {
      currentPos = listData;
      for(int j = 0; j < GetLength() - i - 1; ++j){
        if(currentPos->info.getSusLevel() > currentPos->next->info.getSusLevel()) {
          Player tempPlayer = currentPos->info;
          currentPos->info = currentPos->next->info;
          currentPos->next->info = tempPlayer;
        }
        currentPos = currentPos->next;
      }
     }
  }





