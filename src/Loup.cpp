#include "Loup.h"
#include <string>
#include <iostream>

using namespace std;
Loup::Loup()
{
    //ctor
    this->element="Katon";
    this->nom="Loup";
}

Loup::~Loup()
{
    //dtor
}
/* *********************************** Methodes ******************************************* */
void Loup::aiguiser(){
    //appelé cette fonction quand il attaque
    this->coupCritique+=10;
}
/* *********************************** Getter ********************************************* */
int Loup::getTauxFaim(){
    return this->tauxFaim;
}
/* *********************************** Setter ********************************************* */
void Loup::setTauxFaim(int tauxFaim){
    this->tauxFaim=tauxFaim;
}
void Loup::affichageEntite(){
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
    cout << "Taux Faim : " << this->tauxFaim << endl;
}
