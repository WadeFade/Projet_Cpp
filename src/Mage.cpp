#include "Mage.h"
#include <string>
#include <iostream>

using namespace std;
Mage::Mage()
{
    //ctor
    this->nom="Mage";
    this->attaque=125;
    this->mana=150;
    this->vie=80;
    this->vieMax=80;
    this->canalisationSpell=0;
}

Mage::~Mage()
{
    //dtor
}

/* *********************************** Methodes ******************************************* */
void Mage::spellBuffAttaque(){
    this->attaque+=10;
}
void Mage::spellBuffVie(){
    this->vie+=10;
    this->vieMax+=10;
}
void Mage::spellBuffInitiative(){
    this->initiative+=10;
}
void Mage::spellBuffResistance(){
    this->resistance+=10;
}
void Mage::spellBuffCoupCritique(){
    this->coupCritique+=10;
}
void Mage::spellBuffEchecCritique(){
    this->attaque=0;
}
/* *********************************** Getter ********************************************* */
int Mage::getCanalisationSpell(){
    return this->canalisationSpell;
}
/* *********************************** Setter ********************************************* */
void Mage::setCanalisationSpell(int canalisationSpell){
    //Augmenter la canalisation a chaque tour
    this->canalisationSpell=canalisationSpell;
}
void Mage::affichageEntite(){
    cout << "Mage : " << endl;
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
    cout << "Canalisation Spell : " << this->canalisationSpell << endl;
}
