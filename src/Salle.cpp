#include "Salle.h"
#include <string>
#include <iostream>
#include "Donjon.h"
#include "time.h"
#include "stdlib.h"

using namespace std;

Salle::Salle()
{
    //ctor
    srand(time(NULL));
    this->environnement = 0;
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
void Salle::setEnvironnement(int environnement)
{
    this->environnement = environnement;
}

/* *********************************** Getter ********************************************* */

int Salle::getNum()
{
    return this->num;
}

int Salle::getEnvironnement()
{
    return this->environnement;
}

/* *********************************** Methodes ********************************************* */
void Salle::affichageSalle(){
    //Affichage de salle
    cout << "Salle numero : " << this->num << endl;
}
