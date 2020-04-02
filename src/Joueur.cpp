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
<<<<<<< HEAD
=======
    this->slots=5;
    this->spellAppris=1;
>>>>>>> 66bdc9335605420ca4ae9816da616aeec3817aaf
    this->mana=0;
    this->experience=0;
    this->inventaire.resize(slots,0);
    this->spellz.resize(spellAppris,0);
}

Joueur::~Joueur()
{
    //dtor
}

/* *********************************** Getter ********************************************* */
int Joueur::getNombreSlots(){
    return this->inventaire.size();
}
int Joueur::getNombreSpellAppris(){
    return this->spellz.size();
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
<<<<<<< HEAD
Item* Joueur::getInventaire(int positionDansInventaire){
    return this->inventaire.at(positionDansInventaire);
=======
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
>>>>>>> 66bdc9335605420ca4ae9816da616aeec3817aaf
}
Spell* Joueur::getSpellz(int positionDansInventaire){
    return this->spellz.at(positionDansInventaire);
}
/* *********************************** Setter ********************************************* */
void Joueur::setMana(int mana){
    this->mana=mana;
}
void Joueur::setExperience(int experience){
    this->experience=experience;
}
void Joueur::setNiveau(int niveau){
    this->niveau=niveau;
}
<<<<<<< HEAD
=======
void Joueur::setSpellAppris(int spellAppris){
    this->spellAppris=spellAppris;
}
>>>>>>> 66bdc9335605420ca4ae9816da616aeec3817aaf
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
<<<<<<< HEAD
=======
    cout << "Slots : " << this->slots << endl;
>>>>>>> 66bdc9335605420ca4ae9816da616aeec3817aaf
    cout << "Experience : " << this->experience << endl;
    cout << "Resistance : " << this->resistance << endl;
    cout << "Initiative : " << this->initiative << endl;
    cout << "CoupCritique : " << this->coupCritique << endl;
    cout << "EchecCritique : " << this->echecCritique << endl;
    cout << "Esquive : " << this->esquive << endl;
}
<<<<<<< HEAD
void Joueur::affichageInventaire(){
    cout << "Inventaire : " << endl;
    for (int i=0;i<(this->inventaire.size());i++){
        this->getInventaire(i)->affichageItem();
    }
}
=======
>>>>>>> 66bdc9335605420ca4ae9816da616aeec3817aaf

