#include "Salle.h"
#include <string>
#include <iostream>
#include "Donjon.h"
#include "time.h"
#include "stdlib.h"
#include "Armes.h"

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

void Salle::lootSalle(int numDonjon, int numSalle, vector<Armes*> tableauEpees, vector<Armes*> tableauArcs, vector<Armes*> tableauBaguettes, vector<Armes*> tableauDagues, vector<Armes*> tableauBatons, vector<Armes*> tableauPelles, vector<Armes*> tableauMarteaux, vector<Armures*> tableauArmures, vector<Consommables*> tableauPotionsSoin, vector<Consommables*> tableauPotionsMana, vector<Cristaux*> tableauCristauxVie, vector<Cristaux*> tableauCristauxMana){
    //à compléter
    //et à transformer quand tout ce qui est dans le main sera remis à la bonne place.
    if (numSalle%6+1){
        cout << "Vous obtenez un nouveau kit d'items : " << endl;

    }



}
