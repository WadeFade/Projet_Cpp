#include "Armes.h"
#include <iostream>
Armes::Armes()
{
    //ctor
    this->attaque = 0;
    this->typeArme = "Epee";
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
void Armes::deviensUneEpee(){
    this->typeArme="Epee";
}
void Armes::deviensUneHache(){
    this->typeArme="Hache";
}
void Armes::deviensUnArc(){
    this->typeArme="Arc";
}
void Armes::deviensUneBaguette(){
    this->typeArme="Baguette";
}
void Armes::deviensUneDague(){
    this->typeArme="Dague";
}
void Armes::deviensUnBaton(){
    this->typeArme="Baton";
}
void Armes::deviensUnePelle(){
    this->typeArme="Pelle";
}
void Armes::deviensUnMarteau(){
    this->typeArme="Marteau";
}
void Armes::affichageItem(){
    cout << "Id item : " << this->idItem << endl;
    cout << "Nom item : " << this->nomItem << endl;
    cout << "Type item : " << this->typeArme << endl;
    cout << "Attaque : " << this->attaque << endl;
}
