#include "Spell.h"
#include <string>

Spell::Spell()
{
    //ctor
    this->manaCost=25;
    this->tempsDeRechargement=0;
    this->multiplicateurDeDegats=1.5;
    this->element="Raiton";
}

Spell::~Spell()
{
    //dtor
}

/* *********************************** Methodes ******************************************* */
void Spell::reduireTempsDeChargement(){
    if (this->tempsDeRechargement>0){
        this->tempsDeRechargement--;
    }
}
/* *********************************** Getter ********************************************* */
int Spell::getManaCost(){
    return this->manaCost;
}
int Spell::getTempsDeRechargement(){
    return this->tempsDeRechargement;
}
double Spell::getMultiplicateurDeDegats(){
    return this->multiplicateurDeDegats;
}
string Spell::getElement(){
    return this->element;
}
/* *********************************** Setter ********************************************* */
void Spell::setManaCost(int manaCost){
    this->manaCost=manaCost;
}
void Spell::setTempsDeRechargement(int tempsDeRechargement){
    this->tempsDeRechargement=tempsDeRechargement;
}
void Spell::setMultiplicateurDeDegats(double multiplicateurDeDegats){
    this->multiplicateurDeDegats=multiplicateurDeDegats;
}
/** "Suiton" // "Futon" // "Doton" // "Raiton" // "Katon" **/
void Spell::setElement(string element){
    this->element=element;
}

