#include "Salle.h"
#include "Donjon.h"
#include "time.h"
#include "stdlib.h"
#include "Armes.h"
#include "Monstre.h"
#include "Zombie.h"
#include "Minotaure.h"
#include "Griffon.h"
#include "Cerbere.h"
#include "Zombie.h"
#include "Loup.h"
#include "Elementaire.h"
#include <windows.h>
#include <string>
#include <iostream>

using namespace std;

Salle::Salle()
{
    //ctor
    this->lesMonstresDeLaSalle.push_back(new Zombie());
    this->lesMonstresDeLaSalle.push_back(new Loup());
    this->lesMonstresDeLaSalle.push_back(new Elementaire());
}

Salle::Salle(int numeroDonjon)
{
    //ctor
    switch (numeroDonjon){
    case 1:
        this->lesMonstresDeLaSalle.push_back(new Minotaure());
        break;
    case 2:
        this->lesMonstresDeLaSalle.push_back(new Griffon());
        break;
    case 3:
        this->lesMonstresDeLaSalle.push_back(new Cerbere());
        break;
    case 4:
        this->lesMonstresDeLaSalle.push_back(new Minotaure());
        this->lesMonstresDeLaSalle.push_back(new Griffon());
        break;
    case 5:
        this->lesMonstresDeLaSalle.push_back(new Minotaure());
        this->lesMonstresDeLaSalle.push_back(new Griffon());
        this->lesMonstresDeLaSalle.push_back(new Cerbere());
        break;
    }
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
//voir les salles + leur elements + les monstres de la salle
void Salle::affichageSalle(){
    int couleur = 0;
    //Affichage de salle
    this->setEnvironnement(rand() % 5 + 1);
    couleur = this->getEnvironnement();
    mettreEnCouleur(couleur,0);
    cout << "|n'" << this->getNum() << "|";
    mettreEnCouleur(7,0);
    //Pour voir les monstres de la salle
    //for(unsigned int i =0;i<lesMonstresDeLaSalle.size();i++){
    //    cout << this->lesMonstresDeLaSalle[i]->getNom() << endl;
    //}
}

void Salle::mettreEnCouleur(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}

void Salle::lootSalle(int numDonjon, int numSalle, vector<Item*> items){
    //� compl�ter
    //et � transformer quand tout ce qui est dans le main sera remis � la bonne place.
    if (numSalle%6+1){
        cout << "Vous obtenez un nouveau kit d'items : " << endl;
    }
}
