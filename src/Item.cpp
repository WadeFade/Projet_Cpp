#include "Item.h"
#include <string>
#include <iostream>
using namespace std;

Item::Item()
{
    this->idItem = 0;
    this->nomItem = "Default";
    this->tauxDrop = 0;
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
//===============méhodes=================
void Item::affichageItem(){
    cout << "Id item : " << this->idItem << endl;
    cout << "Nom item : " << this->nomItem << endl;
}
