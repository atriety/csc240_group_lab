#include <string>
using namespace std;
const int MAX_ITEMS = 5;
enum RelationType  {LESS, GREATER, EQUAL};

class ItemType { 
  public:
    ItemType();
    ItemType(string name);
    RelationType ComparedTo(ItemType) const;
    void Print() const;

  private:
    string value;
};
 
