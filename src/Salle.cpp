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
<<<<<<< HEAD
=======
    srand(time(NULL));
    this->environnement = 0;
>>>>>>> 66bdc9335605420ca4ae9816da616aeec3817aaf
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

<<<<<<< HEAD
=======
int Salle::getEnvironnement()
{
    return this->environnement;
}

>>>>>>> 66bdc9335605420ca4ae9816da616aeec3817aaf
/* *********************************** Methodes ********************************************* */
void Salle::affichageSalle(){
    //Affichage de salle
    cout << "Salle numero : " << this->num << endl;
}
