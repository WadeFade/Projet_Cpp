#include "Cristaux.h"
#include <iostream>
Cristaux::Cristaux(int id, string nom, int vieS, int manaS, string type, double taux, int dura)
{
    //ctor
    this->idItem = id;
    this->nomItem = nom;
    this->vieSup = vieS;
    this->manaSup = manaS;
    this->typeCristal = type;
    this->tauxDrop = taux;
    this->durability = dura;
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
    if ((this->vieSup)>0){
        return 5;
    } else if ((this->manaSup)>0){
        return 6;
    }
    return 5;
}
