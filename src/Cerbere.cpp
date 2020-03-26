#include "Cerbere.h"
#include <string>

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
