#include "Joueur.h"
#include <string>
#include <vector>
#include <iostream>
#include "Item.h"
#include "Spell.h"

using namespace std;
Joueur::Joueur()
{
    //ctor
    this->niveau=1;
    this->slots=5;
    this->spellAppris=1;
    this->mana=0;
    this->experience=0;
    this->inventaire.resize(slots,0);
    this->inventaire.resize(spellAppris,0);
}

Joueur::~Joueur()
{
    //dtor
}

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
int Joueur::getSpellAppris(){
    return this->spellAppris;
}
Item* Joueur::getInventaire(int positionDansInventaire){
    return this->inventaire.at(positionDansInventaire);
}
Spell* Joueur::getSpellz(int positionDansInventaire){
    return this->spellz.at(positionDansInventaire);
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
void Joueur::setSpellAppris(int spellAppris){
    this->spellAppris=spellAppris;
}
void Joueur::setInventaire(Item* unItem){
    this->inventaire.push_back(unItem);
}
void Joueur::setSpellz(Spell* unSpell){
    this->spellz.push_back(unSpell);
}
/* *********************************** Methodes ******************************************* */
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

