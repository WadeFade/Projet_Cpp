#include "Minotaure.h"
#include <string>
#include <iostream>

using namespace std;
Minotaure::Minotaure()
{
    //ctor
    this->attaque=50;
    this->nom="Minotaure";
    this->coupCritique=25;
    this->echecCritique=10;
    this->vie=50;
    this->vieMax=220;
    this->tauxRage=0;
}

Minotaure::~Minotaure()
{
    //dtor
}
/* *********************************** Methodes ******************************************* */
void Minotaure::ceMetEnRage(){
// appelé cette fonction avant chaque coup qu'il donne , ajoute la rage a son attaque
    this->tauxRage++;
    if (this->tauxRage>5){
        this->attaque+=tauxRage;
    }
}
/* *********************************** Getter ********************************************* */
int Minotaure::getTauxRage(){
    return this->tauxRage;
}
/* *********************************** Setter ********************************************* */
void Minotaure::setTauxRage(int tauxRage){
    this->tauxRage=tauxRage;
}
void Minotaure::affichageEntite(){
    cout << "Minotaure : " << endl;
    cout << "Nom : " << this->nom << endl;
    cout << "Vie : " << this->vie << endl;
    cout << "Vie Max : " << this->vieMax << endl;
    cout << "Attaque : " << this->attaque << endl;
    cout << "Resistance : " << this->resistance << endl;
    cout << "Initiative : " << this->initiative << endl;
    cout << "CoupCritique : " << this->coupCritique << endl;
    cout << "EchecCritique : " << this->echecCritique << endl;
    cout << "Esquive : " << this->esquive << endl;
    cout << "Element : " << this->element << endl;
    cout << "Taux Rage : " << this->tauxRage << endl;
}
