#include "Joueur.h"
#include <string>

using namespace std;
Joueur::Joueur()
{
    //ctor
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
