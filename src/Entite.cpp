#include "Entite.h"
#include <string>

using namespace std;
Entite::Entite()
{
    //ctor
    this->nom="default";
    this->id=0;
    this->niveau=1;
    this->vie=100;
    this->vieMax=100;
    this->attaque=10;
    this->resistance=10;
    this->initiative=100;
    this->coupCritique=10;
    this->echecCritique=5;
}

Entite::~Entite()
{
    //dtor
}
/* *********************************** Getter ********************************************* */
string Entite::getNom(){
    return this->nom;
}
int Entite::getId(){
    return this->id;
}
int Entite::getNiveau(){
    return this->niveau;
}
int Entite::getVie(){
    return this->vie;
}
int Entite::getVieMax(){
    return this->vieMax;
}
int Entite::getAttaque(){
    return this->attaque;
}
int Entite::getResistance(){
    return this->resistance;
}
int Entite::getInitiative(){
    return this->initiative;
}
int Entite::getCoupCritique(){
    return this->coupCritique;
}
int Entite::getEchecCritique(){
    return this->echecCritique;
}
/* *********************************** Setter ********************************************* */
void Entite::setNom(string nom){
    this->nom=nom;
}
void Entite::setId(int id){
    this->id=id;
}
void Entite::setNiveau(int niveau){
    this->niveau=niveau;
}
void Entite::setVie(int vie){
    this->vie=vie;
}
void Entite::setVieMax(int vieMax){
    this->vieMax=vieMax;
}
void Entite::setAttaque(int attaque){
    this->attaque=attaque;
}
void Entite::setResistance(int resistance){
    this->resistance=resistance;
}
void Entite::setInitiative(int initiative){
    this->initiative=initiative;
}
void Entite::setCoupCritique(int coupCritique){
    this->coupCritique=coupCritique;
}
void Entite::setEchecCritique(int echecCritique){
    this->echecCritique=echecCritique;
}
/* *********************************** Methodes ******************************************* */
