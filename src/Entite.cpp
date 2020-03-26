#include "Entite.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;
Entite::Entite()
{
    //ctor
    this->attaque=10;
    this->resistance=10;
    this->initiative=100;
    this->coupCritique=10;
    this->echecCritique=5;
    this->esquive=0;
}

Entite::~Entite()
{
    //dtor
}
/* *********************************** Getter ********************************************* */
string Entite::getNom(){
    return this->nom;
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
int Entite::getEsquive(){
    return this->esquive;
}
/* *********************************** Setter ********************************************* */
void Entite::setNom(string nom){
    this->nom=nom;
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
void Entite::setEsquive(int esquive){
    this->esquive=esquive;
}
/* *********************************** Methodes ******************************************* */
void Entite::affichageEntite(){
    cout << "Entite : " << endl;
    cout << "Attaque : " << this->attaque << endl;
    cout << "Resistance : " << this->resistance << endl;
    cout << "Initiative : " << this->initiative << endl;
    cout << "CoupCritique : " << this->coupCritique << endl;
    cout << "EchecCritique : " << this->echecCritique << endl;
    cout << "Esquive : " << this->esquive << endl;
}
