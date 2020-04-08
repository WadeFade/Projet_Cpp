#include "Armures.h"
#include <iostream>
Armures::Armures(int id, string nom, int res, double taux, int dura)
{
    //ctor
    this->idItem = id;
    this->nomItem = nom;
    this->resistance = res;
    this->tauxDrop = taux;
    this->durability = dura;

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

int Armures::type(){
    return 2;
}
