#include <iostream>
#include "Donjon.h"
#include "Item.h"

using namespace std;

int main()
{
    Item* monItem = new Item();

    monItem->setIdItem(11544);

    cout << "ID_Item : " << monItem->getIdItem() << endl;

    return 0;
}
