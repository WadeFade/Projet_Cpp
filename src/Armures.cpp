#include "Armures.h"
#include <iostream>
Armures::Armures()
{
    //ctor
    this->resistance = 0;
}

Armures::~Armures()
{
    //dtor
}

//=========setter==========
void Armures::setResistance(int resistance){
    this->resistance = resistance;
}

//=========getter==========
int Armures::getResistance(){
    return this->resistance;
}
//============Methodes================
void Armures::affichageItem(){
    cout << "Id item : " << this->idItem << endl;
    cout << "Nom item : " << this->nomItem << endl;
    cout << "Resistance : " << this->resistance << endl;
}
