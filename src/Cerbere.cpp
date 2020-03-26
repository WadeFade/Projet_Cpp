#include "Cerbere.h"
#include <string>
#include <iostream>

using namespace std;
Cerbere::Cerbere()
{
    //ctor
    this->attaque=55;
    this->nom="Cerbere";
    this->coupCritique=25;
    this->echecCritique=10;
    this->vie=210;
    this->vieMax=210;
}

Cerbere::~Cerbere()
{
    //dtor
}
/* *********************************** Methodes ******************************************* */
void Cerbere::aFaim(){
    this->faim+=10;
}
void Cerbere::manger(){
    this->vie+=20;
    this->faim=0;
}
/* *********************************** Getter ********************************************* */
int Cerbere::getFaim(){
    return this->faim;
}
/* *********************************** Setter ********************************************* */
void Cerbere::setFaim(int faim){
    this->faim=faim;
}
void Cerbere::affichageEntite(){
    cout << "Griffon : " << endl;
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
    cout << "Faim : " << this->faim << endl;
}
