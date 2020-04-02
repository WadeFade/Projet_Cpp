#include "Barde.h"
#include <string>
#include <iostream>

using namespace std;
Barde::Barde()
{
    //ctor
    this->nom="Barde";
    this->multiplicateurEXP=1.2;
    this->vie=110;
    this->vieMax=110;
    this->mana=50;
}

Barde::~Barde()
{
    //dtor
}
/* *********************************** Methodes ******************************************* */
void Barde::airDeMusique(){
    this->vie+=25;
    this->attaque+=25;
    this->coupCritique=100;
}
/* *********************************** Getter ********************************************* */
double Barde::getMultiplicateurEXP(){
    return this->multiplicateurEXP;
}
/* *********************************** Setter ********************************************* */
void Barde::setMultiplicateurEXP(double multiplicateurEXP){
    this->multiplicateurEXP=multiplicateurEXP;
}
void Barde::affichageEntite(){
    cout << "Barde : " << endl;
    cout << "Nom : " << this->nom << endl;
    cout << "Attaque : " << this->attaque << endl;
    cout << "Niveau : " << this->niveau << endl;
    cout << "Mana : " << this->mana << endl;
<<<<<<< HEAD
=======
    cout << "Slots : " << this->slots << endl;
>>>>>>> 66bdc9335605420ca4ae9816da616aeec3817aaf
    cout << "Experience : " << this->experience << endl;
    cout << "Resistance : " << this->resistance << endl;
    cout << "Initiative : " << this->initiative << endl;
    cout << "CoupCritique : " << this->coupCritique << endl;
    cout << "EchecCritique : " << this->echecCritique << endl;
    cout << "Esquive : " << this->esquive << endl;
    cout << "Multiplicateur EXP : " << this->multiplicateurEXP << endl;
}
