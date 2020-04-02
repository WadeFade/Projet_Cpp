#include "Consommables.h"
#include <iostream>
Consommables::Consommables()
{
    //ctor
    this->regenVie = 0;
    this->regenMana = 0;
}

Consommables::~Consommables()
{
    //dtor
}

//=========setter==========
void Consommables::setRegenVie(int regenVie){
    this->regenVie = regenVie;
}

void Consommables::setRegenMana(int regenMana){
    this->regenMana = regenMana;
}

//=========getter==========
int Consommables::getRegenVie(){
    return this->regenVie;
}

int Consommables::getRegenMana(){
    return this->regenMana;
}
//============Methodes================
void Consommables::affichageItem(){
    cout << "Id item : " << this->idItem << endl;
    cout << "Nom item : " << this->nomItem << endl;

    cout << "Regen Mana : " << this->regenMana << endl;
    cout << "Regen Vie : " << this->regenVie << endl;


}
