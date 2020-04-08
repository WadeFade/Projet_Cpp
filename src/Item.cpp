#include "Item.h"
#include <string>
#include <iostream>
using namespace std;

Item::Item()
{
    this->idItem = 0;
    this->nomItem = "Default";
    this->tauxDrop = 0;
    this->durability = 1;
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

void Item::setTauxDrop(double taux){
    this->tauxDrop = taux;
}

void Item::setDurability(int durability){
    this->durability=durability;
}

//===============getter==================
int Item::getIdItem(){
    return this->idItem;
}

string Item::getNomItem(){
    return this->nomItem;
}

double Item::getTauxDrop(){
    return this->tauxDrop;
}
int Item::getDurability(){
    return this->durability;
}
//===============méhodes=================
void Item::affichageItem(){
    cout << "Id item : " << this->idItem << endl;
    cout << "Nom item : " << this->nomItem << endl;
}
int Item::type(){
    return 0;
}

void Item::addDurability(int dura){
    this->durability += dura;
}
