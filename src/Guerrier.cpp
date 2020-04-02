#include "Guerrier.h"
#include <string>
#include <iostream>

using namespace std;
Guerrier::Guerrier()
{
    //ctor
    this->nom="Guerrier";
    this->attaque=100;
    this->vie=150;
    this->vieMax=150;
}

Guerrier::~Guerrier()
{
    //dtor
}

/* *********************************** Methodes ******************************************* */
void Guerrier::criDeGuerre(){
    this->attaque+=10;
    this->vieMax+=10;
    this->vie+=10;
    this->resistance+=20;
}
void Guerrier::transcendance(){
    // declancher quand la force d'esprit est changer
    if (this->forceEsprit>10){
        this->forceEsprit=0;
        this->attaque*=1.1;
    }
}
/* *********************************** Getter ********************************************* */
int Guerrier::getForceEsprit(){
    return this->forceEsprit;
}
/* *********************************** Setter ********************************************* */
void Guerrier::setForceEsprit(int forceEsprit){
    this->forceEsprit=forceEsprit;
    this->transcendance();
}
void Guerrier::affichageEntite(){
    cout << "Guerrier : " << endl;

    cout << "Nom : " << this->nom << endl;
    cout << "Attaque : " << this->attaque << endl;
    cout << "Niveau : " << this->niveau << endl;
    cout << "Mana : " << this->mana << endl;
    cout << "Slots : " << this->slots << endl;
    cout << "Experience : " << this->experience << endl;
    cout << "Resistance : " << this->resistance << endl;
    cout << "Initiative : " << this->initiative << endl;
    cout << "CoupCritique : " << this->coupCritique << endl;
    cout << "EchecCritique : " << this->echecCritique << endl;
    cout << "Esquive : " << this->esquive << endl;



    cout << "Force Esprit : " << this->forceEsprit << endl;
}
