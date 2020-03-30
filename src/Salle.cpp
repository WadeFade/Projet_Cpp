#include "Salle.h"
#include <string>
#include <iostream>
#include "Donjon.h"

using namespace std;

Salle::Salle()
{
    //ctor
    this->num=0;
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

/* *********************************** Methodes ********************************************* */
void Salle::affichageSalle(){
    //Affichage de salle
    cout << "Salle numero : " << this->num << endl;
}
