#include "Elementaire.h"
#include <string>
#include <iostream>

using namespace std;
Elementaire::Elementaire()
{
    //ctor
    this->element="Suiton";
    this->nom="Elementaire";
    this->vie=20;
    this->vieMax=20;
    this->attaque=10;
    this->initiative=50;
}

Elementaire::~Elementaire()
{
    //dtor
}
/* *********************************** Methodes ******************************************* */
void Elementaire::changeElement(){
    if (this->element=="Katon"){
            this->element="Suiton";
    } else if (this->element=="Suiton"){
            this->element="Futon";
    } else if (this->element=="Futon"){
            this->element="Doton";
    } else if (this->element=="Doton"){
            this->element="Raiton";
    } else if (this->element=="Raiton"){
            this->element="Katon";
    }
}
/* *********************************** Getter ********************************************* */
int Elementaire::getSurcharge(){
    return this->surcharge;
}
/* *********************************** Setter ********************************************* */
void Elementaire::setSurcharge(int surcharge){
    this->surcharge=surcharge;
}
void Elementaire::affichageEntite(){
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
    cout << "Surcharge : " << this->surcharge << endl;
}
