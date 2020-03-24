#include "Armes.h"

Armes::Armes()
{
    //ctor
    this->attaque = 0;
}

Armes::~Armes()
{
    //dtor
}

//=============setter=================
void Armes::setAttaque(int attaque){
    this->attaque = attaque;
}

//=============getter=================
int Armes::getAttaque(){
    return this->attaque;
}
