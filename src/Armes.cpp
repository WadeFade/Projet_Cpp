#include "Armes.h"
#include <iostream>
Armes::Armes(int id, int atck, string type, double taux, string nom, int dura)
{
    //ctor
    this->idItem = id;
    this->attaque = atck;
    this->typeArme = type;
    this->tauxDrop = taux;
    this->nomItem = nom;
    this->durability = dura;
}

Armes::~Armes()
{
    //dtor
}

//=============setter=================
void Armes::setAttaque(int attaque){
    this->attaque = attaque;
}
void Armes::setTypeArme(string typeArme){
    this->typeArme=typeArme;
}
//=============getter=================
int Armes::getAttaque(){
    return this->attaque;
}
string Armes::getTypeArme(){
    return this->typeArme;
}
//============Methodes================


void Armes::affichageItem(){
    cout << "Id item : " << this->idItem << endl;
    cout << "Nom item : " << this->nomItem << endl;
    cout << "Type item : " << this->typeArme << endl;
    cout << "Attaque : " << this->attaque << endl;
}
int Armes::type(){
    return 1;
}
