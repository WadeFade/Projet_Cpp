#include "Griffon.h"
#include <string>
#include <iostream>

using namespace std;
Griffon::Griffon()
{
    //ctor
    this->attaque=55;
    this->nom="Griffon";
    this->coupCritique=25;
    this->echecCritique=10;
    this->vie=50;
    this->vieMax=150;
}

Griffon::~Griffon()
{
    //dtor
}
/* *********************************** Methodes ******************************************* */
void Griffon::vol(){
    this->esquive=100;
}
void Griffon::atteris(){
    this->esquive=0;
}
/* *********************************** Getter ********************************************* */
int Griffon::getTauxVueAiguiser(){
    return this->tauxVueAiguiser;
}
/* *********************************** Setter ********************************************* */
void Griffon::setTauxVueAiguiser(int tauxVueAiguiser){
    this->tauxVueAiguiser=tauxVueAiguiser;
}
void Griffon::affichageEntite(){
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
    cout << "Taux Vue Aiguiser : " << this->tauxVueAiguiser << endl;
}
