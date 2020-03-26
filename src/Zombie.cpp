#include "Zombie.h"
#include <string>

using namespace std;
Zombie::Zombie()
{
    //ctor
    this->nom="Zombie";
    this->vie=20;
    this->vieMax=20;
    this->resistance=10;
    this->initiative=50;
}

Zombie::~Zombie()
{
    //dtor
}
