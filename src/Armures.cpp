#include "Armures.h"

Armures::Armures()
{
    //ctor
    this->resistance = 0;
}

Armures::~Armures()
{
    //dtor
}

//=========setter==========
void Armures::setResistance(int resistance){
    this->resistance = resistance;
}

//=========getter==========
int Armures::getResistance(){
    return this->resistance;
}
