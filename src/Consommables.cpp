#include "Consommables.h"
#include <iostream>
Consommables::Consommables(int id, string nom, int regenV, int regenM, string type, double taux, int dura)
{
    //ctor
    this->idItem = id;
    this->nomItem = nom;
    this->regenVie = regenV;
    this->regenMana = regenM;
    this->typePotion = type;
    this->tauxDrop = taux;
    this->durability = dura;
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
int Consommables::type(){
    if ((this->regenVie)>0){
        return 3;
    } else if ((this->regenMana)>0){
        return 4;
    }
    return 3;
}
