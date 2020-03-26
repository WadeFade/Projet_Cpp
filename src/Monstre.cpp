#include "Monstre.h"
#include <string>

using namespace std;
Monstre::Monstre()
{
    //ctor
    this->element="neutre";
    this->nom="monstreDefaut";
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
/* *********************************** Methodes ******************************************* */

/* *********************************** Getter ********************************************* */
string Monstre::getElement(){
    return this->element;
}
/* *********************************** Setter ********************************************* */
void Monstre::setElement(string element){
    this->element=element;
}
