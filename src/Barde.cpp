#include "Barde.h"
#include <string>

using namespace std;
Barde::Barde()
{
    //ctor
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

/* *********************************** Getter ********************************************* */
double Barde::getMultiplicateurEXP(){
    return this->multiplicateurEXP;
}
/* *********************************** Setter ********************************************* */
void Barde::setMultiplicateurEXP(double multiplicateurEXP){
    this->multiplicateurEXP=multiplicateurEXP;
}
