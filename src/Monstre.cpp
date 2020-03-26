#include "Monstre.h"
#include <string>
#include <iostream>

using namespace std;
Monstre::Monstre()
{
    //ctor
    this->element="neutre";
    this->vie=30;
    this->vieMax=30;
    this->attaque=5;
    this->resistance=0;
    this->initiative=75;
    this->coupCritique=1;
    this->echecCritique=10;
}

Monstre::~Monstre()
{
    //dtor
}


/* *********************************** Getter ********************************************* */
string Monstre::getElement(){
    return this->element;
}
/* *********************************** Setter ********************************************* */
void Monstre::setElement(string element){
    this->element=element;
}
/* *********************************** Methodes ******************************************* */
void Monstre::affichageEntite(){
    cout << "Monstre : " << endl;
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
}
