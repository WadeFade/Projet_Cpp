#include "Cristaux.h"
#include <iostream>
Cristaux::Cristaux()
{
    //ctor
    this->vieSup = 0;
    this->manaSup = 0;
}

Cristaux::~Cristaux()
{
    //dtor
}

//=========setter==========
void Cristaux::setVieSup(int vieSup){
    this->vieSup = vieSup;
}

void Cristaux::setManaSup(int manaSup){
    this->manaSup = manaSup;
}

//=========getter==========
int Cristaux::getVieSup(){
    return this->vieSup;
}

int Cristaux::getManaSup(){
    return this->manaSup;
}
//============Methodes================
void Cristaux::affichageItem(){
    cout << "Id item : " << this->idItem << endl;
    cout << "Nom item : " << this->nomItem << endl;
    cout << "Cristaux Mana Sup : " << this->manaSup << endl;
    cout << "Cristaux Vie Sup : " << this->vieSup << endl;
}
int Cristaux::type(){
    return 4;
}
