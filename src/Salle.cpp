#include "Salle.h"
#include <string>
#include <iostream>
#include "Donjon.h"
#include "time.h"
#include "stdlib.h"
#include "Monstre.h"
#include "Zombie.h"
#include "Minotaure.h"
#include "Griffon.h"
#include <windows.h>

using namespace std;

Salle::Salle()
{
    //ctor
    this->lesMonstresDeLaSalle.push_back(new Zombie());
    this->lesMonstresDeLaSalle.push_back(new Griffon());
    this->lesMonstresDeLaSalle.push_back(new Minotaure());
    this->lesMonstresDeLaSalle[0]->setNom("Zombie");
    this->lesMonstresDeLaSalle[1]->setNom("Griffon");
    this->lesMonstresDeLaSalle[2]->setNom("Minotaure");
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
void Salle::setLesMonstresDeLaSalle(Monstre* monstre)
{
    this->lesMonstresDeLaSalle.push_back(monstre);
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

vector<Monstre*> Salle::getLesMonstresDeLaSalle()
{
    return this->lesMonstresDeLaSalle;
}



Monstre* Salle::getMonstre(int indexMonstre)
{
    return this->lesMonstresDeLaSalle[indexMonstre];
}
/* *********************************** Methodes ********************************************* */
void Salle::affichageSalle(){
    int couleur = 0;
    //Affichage de salle
    this->setEnvironnement(rand() % 5 + 1);
    couleur = this->getEnvironnement();
    mettreEnCouleur(couleur,0);
    cout << "|salle n'" << this->getNum() << "|" << endl;
    mettreEnCouleur(7,0);
    for(unsigned int i =0;i<lesMonstresDeLaSalle.size();i++){
        cout << this->lesMonstresDeLaSalle[i]->getNom() << endl;
    }
}
void Salle::mettreEnCouleur(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}
