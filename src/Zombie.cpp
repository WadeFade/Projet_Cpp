#include "Zombie.h"
#include <string>
#include <iostream>

using namespace std;
Zombie::Zombie()
{
    //ctor
    this->nom="Zombie";
    this->vie=20;
    this->vieMax=20;
    this->resistance=5;
    this->initiative=50;
    this->tauxInfection=0;
}

Zombie::~Zombie()
{
    //dtor
}
/* *********************************** Methodes ******************************************* */
//fonction a appelé lorsqu'un zombie prend un coup
void Zombie::mutation(){
    this->tauxInfection++;
    if (this->tauxInfection==5){
        // on le full heal
        this->vie=20;
        this->attaque+=10;
    }
}
/* *********************************** Getter ********************************************* */
int Zombie::getTauxInfection(){
    return this->tauxInfection;
}
/* *********************************** Setter ********************************************* */
void Zombie::setTauxInfection(int tauxInfection){
    this->tauxInfection=tauxInfection;
}
void Zombie::affichageEntite(){
    cout << "Zombie : " << endl;
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
    cout << "Taux Infection : " << this->tauxInfection << endl;
}
