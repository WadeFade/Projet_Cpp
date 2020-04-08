#include "Spell.h"
#include <string>
#include <iostream>

using namespace std;
Spell::Spell()
{
    //ctor
    this->manaCost=25;
    this->tempsDeRechargement=0;
    //new
    this->canalisationSpell=0;
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
void Spell::affichageSpell(){
    cout<<endl;
    cout<<"Mana cost : " << this->manaCost << endl;
    cout<<"Temps De Rechargement : " << this->tempsDeRechargement << endl;
    cout<<"Element : " << this->element << endl;
    cout<<"Canalisation Spell : " << this->canalisationSpell << endl;
    cout<<"Valeur Buff Attaque : " << this->buffAttaque << endl;
    cout<<"Valeur Buff Vie : " << this->buffVie << endl;
    cout<<"Valeur Buff Initiative : " << this->buffInitiative << endl;
    cout<<"Valeur Buff Resistance : " << this->buffResistance << endl;
    cout<<"Valeur Buff Coup Critique : " << this->buffCoupCritique << endl;
    cout<<"Valeur Buff Echec Critique : " << this->buffEchecCritique << endl;
    cout<<"Valeur Degat Du Spell : " << this->degatDuSpell << endl;
}
/* *********************************** Getter ********************************************* */
int Spell::getManaCost(){
    return this->manaCost;
}

int Spell::getTempsDeRechargement(){
    return this->tempsDeRechargement;
}

string Spell::getElement(){
    return this->element;
}

int Spell::getCanalisationSpell(){
    return this->canalisationSpell;
}

int Spell::getBuffAttaque(){
    return this->buffAttaque;
}

int Spell::getBuffVie(){
    return this->buffVie;
}

int Spell::getBuffInitiative(){
    return this->buffInitiative;
}

int Spell::getBuffResistance(){
    return this->buffResistance;
}

int Spell::getBuffCoupCritique(){
    return this->buffCoupCritique;
}

int Spell::getBuffEchecCritique(){
    return this->buffEchecCritique;
}

int Spell::getDegat(){
    return this->degatDuSpell;
}

// new
string Spell::getNom(){
    return this->nomSpell;
}
/* *********************************** Setter ********************************************* */
void Spell::setManaCost(int manaCost){
    this->manaCost=manaCost;
}

void Spell::setTempsDeRechargement(int tempsDeRechargement){
    this->tempsDeRechargement=tempsDeRechargement;
}

/* "Suiton" // "Futon" // "Doton" // "Raiton" // "Katon" */
void Spell::setElement(string element){
    this->element=element;
}

void Spell::setCanalisationSpell(int canalisationSpell){
    //Augmenter la canalisation a chaque tour
    this->canalisationSpell=canalisationSpell;
}

void Spell::setBuffAttaque(int buffAttaque){
    this->buffAttaque=buffAttaque;
}

void Spell::setBuffVie(int buffVie){
    this->buffVie=buffVie;
}

void Spell::setBuffInitiative(int buffInitiative){
    this->buffInitiative=buffInitiative;
}

void Spell::setBuffResistance(int buffResistance){
    this->buffResistance=buffResistance;
}

void Spell::setBuffCoupCritique(int buffCoupCritique){
    this->buffCoupCritique=buffCoupCritique;
}

void Spell::setBuffEchecCritique(int buffEchecCritique){
    this->buffEchecCritique=buffEchecCritique;
}

void Spell::setDegat(int degatDuSpell){
    this->degatDuSpell=degatDuSpell;
}
// new
void Spell::setNom(string nomSpell){
    this->nomSpell=nomSpell;
}
