#include "Griffon.h"
#include <string>

using namespace std;
Griffon::Griffon()
{
    //ctor
    this->attaque=55;
    this->nom="Griffon";
    this->coupCritique=25;
    this->echecCritique=10;
    this->vie=200;
    this->vieMax=200;
}

Griffon::~Griffon()
{
    //dtor
}
