#include "Salle.h"
#include <string>
#include <iostream>
#include "Donjon.h"

using namespace std;

Salle::Salle()
{
    //ctor
    int i = 0;
    this->setNum(i+1);

}

Salle::~Salle()
{
    //dtor
}

/* *********************************** Setter ********************************************* */

void Salle::setNum(int num)
{
    this->num = num;
}

/* *********************************** Getter ********************************************* */

int Salle::getNum()
{
    return this->num;
}

/* *********************************** Methode ********************************************* */

