#include "Elementaire.h"
#include <string>

using namespace std;
Elementaire::Elementaire()
{
    //ctor
    this->element="feu";
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
