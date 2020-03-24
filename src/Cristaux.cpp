#include "Cristaux.h"

Cristaux::Cristaux()
{
    //ctor
    this->vieSup = 0;
    this->manaSup = 0;
}

Cristaux::~Cristaux()
{
    //dtor
}

//=========setter==========
void Cristaux::setVieSup(int vieSup){
    this->vieSup = vieSup;
}

void Cristaux::setManaSup(int manaSup){
    this->manaSup = manaSup;
}

//=========getter==========
int Cristaux::getVieSup(){
    return this->vieSup;
}

int Cristaux::getManaSup(){
    return this->manaSup;
}
