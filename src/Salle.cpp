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
#include "Elementaire.h"
#include "Loup.h"
#include <windows.h>
#include <string>
#include <iostream>

using namespace std;

Salle::Salle()
{
    //ctor
}

Salle::Salle(int numeroSalle, int numeroDonjon)
{
    //ctor
    Zombie* zombie=new Zombie();
    Loup* loup=new Loup();
    Elementaire* elementaire=new Elementaire();

    numeroDonjon*=10;
    numeroSalle+=numeroDonjon;
    double multiplicateur;
    multiplicateur=numeroSalle*0.1;

    zombie->multiplicationStatistique(multiplicateur);
    loup->multiplicationStatistique(multiplicateur);
    elementaire->multiplicationStatistique(multiplicateur);

    this->lesMonstresDeLaSalle.push_back(zombie);
    this->lesMonstresDeLaSalle.push_back(loup);
    this->lesMonstresDeLaSalle.push_back(elementaire);
}

Salle::Salle(int numeroDonjon)
{
    //ctor
    Minotaure* minotaure=new Minotaure();
    Griffon* griffon=new Griffon();
    Cerbere* cerbere=new Cerbere();

    minotaure->multiplicationStatistique((double)numeroDonjon);
    griffon->multiplicationStatistique((double)numeroDonjon);
    cerbere->multiplicationStatistique((double)numeroDonjon);

    switch (numeroDonjon){
    case 0:
        this->lesMonstresDeLaSalle.push_back(minotaure);
        break;
    case 1:
        this->lesMonstresDeLaSalle.push_back(griffon);
        break;
    case 2:
        this->lesMonstresDeLaSalle.push_back(cerbere);
        break;
    case 3:
        this->lesMonstresDeLaSalle.push_back(minotaure);
        this->lesMonstresDeLaSalle.push_back(griffon);
        break;
    case 4:
        this->lesMonstresDeLaSalle.push_back(minotaure);
        this->lesMonstresDeLaSalle.push_back(griffon);
        this->lesMonstresDeLaSalle.push_back(cerbere);
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

void Salle::setLesBoss(Boss* boss)
{
    this->lesBoss.push_back(boss);
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

vector<Boss*> Salle::getLesBossDuDonjon()
{
    return this->lesBoss;
}

Boss* Salle::getBoss(int indexBoss)
{
    return this->lesBoss[indexBoss];
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
        //cout << this->lesMonstresDeLaSalle[i]->getNom() << endl;
    //}
}

void Salle::mettreEnCouleur(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}

void Salle::lootSalle(int numDonjon, int numSalle, vector<Item*> items){
    //à compléter
    //et à transformer quand tout ce qui est dans le main sera remis à la bonne place.
    if (numSalle%6+1){
        cout << "Vous obtenez un nouveau kit d'items : " << endl;
    }
}
