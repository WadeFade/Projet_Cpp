#include "Minotaure.h"
#include <string>

using namespace std;
Minotaure::Minotaure()
{
    //ctor
    this->attaque=50;
    this->nom="Minotaure";
    this->coupCritique=25;
    this->echecCritique=10;
    this->vie=220;
    this->vieMax=220;
}

Minotaure::~Minotaure()
{
    //dtor
}
