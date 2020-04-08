#include "Monstre.h"
#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;
Monstre::Monstre()
{
    //ctor
    this->element="neutre";
    this->vie=30;
    this->vieMax=30;
    this->attaque=20;
    this->resistance=0;
    this->initiative=75;
    this->coupCritique=1;
    this->echecCritique=10;
}

void Monstre::multiplicationStatistique(double multiplicateurStatistique){
    this->vie+=(int)((this->vie*multiplicateurStatistique)+0.5);
    this->vieMax+=(int)((this->vieMax*multiplicateurStatistique)+0.5);
    this->attaque+=(int)((this->attaque*multiplicateurStatistique)+0.5);
    this->resistance+=(int)((this->resistance*multiplicateurStatistique)+0.5);
    this->initiative+=(int)((this->initiative*multiplicateurStatistique)+0.5);
    this->coupCritique+=(int)((this->coupCritique*multiplicateurStatistique)+0.5);
}


Monstre::~Monstre()
{
    //dtor
}


/* *********************************** Getter ********************************************* */
string Monstre::getElement(){
    return this->element;
}

/* *********************************** Setter ********************************************* */
void Monstre::setElement(string element){
    this->element=element;
}

/* *********************************** Methodes ******************************************* */
void Monstre::affichageEntite(){
    cout << "Monstre : " << endl;
    cout << "Nom : " << this->nom << endl;
    cout << "Vie : " << this->vie << endl;
    cout << "Vie Max : " << this->vieMax << endl;
    cout << "Attaque : " << this->attaque << endl;
    cout << "Resistance : " << this->resistance << endl;
    cout << "Initiative : " << this->initiative << endl;
    cout << "CoupCritique : " << this->coupCritique << endl;
    cout << "EchecCritique : " << this->echecCritique << endl;
    cout << "Esquive : " << this->esquive << endl;
    cout << "Element : " << this->element << endl;
}

void Monstre::sePrendUnCoup(int attaqueDansLaTronche){
    if ((rand()%100)>this->esquive){
        cout << "PAF " << this->nom << " prend un coup dans la tronche !" << endl;
        this->vie-=attaqueDansLaTronche-this->resistance;
    } else{
        cout << "Zoup " << this->nom << " esquive tel un ninja ! aucun degats subis" << endl;
    }
}

int Monstre::donneUnCoup(){
    // dans le cas ou ça ne crit pas
    if ((rand()%100)>this->coupCritique){
        cout << "Dommage " << this->nom << " ne fait pas de critique !" << endl;
        if ((rand()%100)>this->echecCritique){
                cout << "Ouf " << this->nom << " ne fait pas d' echec critique !" << endl;
                return this->attaque;
        }
        // dans le cas ou l'attaque échec critique
        else{
            cout << "AHAHAHA " << this->nom << " fait un echec critique en plus (mdr) !" << endl;
            return 0;
        }
        // dans le cas ou l'attaque crit
    } else{
        cout << "ET PAFFFFF " << this->nom << " balance un sale critique !" << endl;
        return this->attaque;
    }
}

bool Monstre::estMort()
{
    return (this->vie <= 0);
}

