#include <iostream>
#include "ItemType.h"
using namespace std;

ItemType::ItemType() { 
  value = "";
}

RelationType ItemType::ComparedTo(ItemType otherItem) const {
  if (value < otherItem.value)
    return LESS;
  else if (value > otherItem.value)
    return GREATER;
  else return EQUAL;
}

ItemType::ItemType(string name) {
  value = name;
}

void ItemType::Print() const {
  cout << value << " ";
}
