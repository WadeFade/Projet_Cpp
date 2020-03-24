#include "Item.h"
#include <string>
using namespace std;

Item::Item()
{
    this->idItem = 0;
    this->nomItem = "Default";
}

Item::~Item()
{
    //dtor
}


//================setter==================
void Item::setIdItem(int idItem){
    this->idItem = idItem;
}

void Item::setNomItem(string nomItem){
    this->nomItem = nomItem;
}

//===============getter==================
int Item::getIdItem(){
    return this->idItem;
}

string Item::getNomItem(){
    return this->nomItem;
}
