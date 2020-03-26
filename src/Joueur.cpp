#include "Joueur.h"
#include <string>
#include <iostream>

using namespace std;
Joueur::Joueur()
{
    //ctor
    this->niveau=1;
    this->slots=5;
    this->mana=0;
    this->experience=0;
}

Joueur::~Joueur()
{
    //dtor
}
/* *********************************** Methodes ******************************************* */

/* *********************************** Getter ********************************************* */
int Joueur::getSlots(){
    return this->slots;
}
int Joueur::getMana(){
    return this->mana;
}
int Joueur::getExperience(){
    return this->experience;
}
int Joueur::getNiveau(){
    return this->niveau;
}
/* *********************************** Setter ********************************************* */
void Joueur::setSlots(int slots){
    this->slots=slots;
}
void Joueur::setMana(int mana){
    this->mana=mana;
}
void Joueur::setExperience(int experience){
    this->experience=experience;
}
void Joueur::setNiveau(int niveau){
    this->niveau=niveau;
}
void Joueur::affichageEntite(){
    cout << "Joueur : " << endl;
    cout << "Nom : " << this->nom << endl;
    cout << "Attaque : " << this->attaque << endl;
    cout << "Niveau : " << this->niveau << endl;
    cout << "Mana : " << this->mana << endl;
    cout << "Slots : " << this->slots << endl;
    cout << "Experience : " << this->experience << endl;
    cout << "Resistance : " << this->resistance << endl;
    cout << "Initiative : " << this->initiative << endl;
    cout << "CoupCritique : " << this->coupCritique << endl;
    cout << "EchecCritique : " << this->echecCritique << endl;
    cout << "Esquive : " << this->esquive << endl;
}
