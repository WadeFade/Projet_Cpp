#include "Entite.h"
#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "windows.h"
#include <cstdio>
#include <sstream>
#include <windows.h>

using namespace std;
Entite::Entite()
{
    //ctor
    this->attaque=10;
    this->resistance=5;
    this->initiative=100;
    this->coupCritique=10;
    this->echecCritique=5;
    this->esquive=0;
}

Entite::~Entite()
{
    //dtor
}

/* *********************************** Getter ********************************************* */
string Entite::getNom(){
    return this->nom;
}

int Entite::getVie(){
    return this->vie;
}

int Entite::getVieMax(){
    return this->vieMax;
}

int Entite::getAttaque(){
    return this->attaque;
}

int Entite::getResistance(){
    return this->resistance;
}

int Entite::getInitiative(){
    return this->initiative;
}

int Entite::getCoupCritique(){
    return this->coupCritique;
}

int Entite::getEchecCritique(){
    return this->echecCritique;
}

int Entite::getEsquive(){
    return this->esquive;
}

/* *********************************** Setter ********************************************* */
void Entite::setNom(string nom){
    this->nom=nom;
}

void Entite::setVie(int vie){
    this->vie=vie;
}

void Entite::setVieMax(int vieMax){
    this->vieMax=vieMax;
}

void Entite::setAttaque(int attaque){
    this->attaque=attaque;
}

void Entite::setResistance(int resistance){
    this->resistance=resistance;
}

void Entite::setInitiative(int initiative){
    this->initiative=initiative;
}

void Entite::setCoupCritique(int coupCritique){
    this->coupCritique=coupCritique;
}

void Entite::setEchecCritique(int echecCritique){
    this->echecCritique=echecCritique;
}

void Entite::setEsquive(int esquive){
    this->esquive=esquive;
}

/* *********************************** Methodes ******************************************* */
void Entite::affichageEntite(){
    cout << "Entite : " << endl;
    cout << "Attaque : " << this->attaque << endl;
    cout << "Resistance : " << this->resistance << endl;
    cout << "Initiative : " << this->initiative << endl;
    cout << "CoupCritique : " << this->coupCritique << endl;
    cout << "EchecCritique : " << this->echecCritique << endl;
    cout << "Esquive : " << this->esquive << endl;
}

void Entite::sePrendUnCoup(int attaqueDansLaTronche){
    if ((rand()%100)>this->esquive){
        this->vie-=attaqueDansLaTronche-this->resistance;
    } else{
        cout << "Zoup " << this->nom << " esquive tel un ninja ! aucun degats subis" << endl;
    }
}

int Entite::donneUnCoup(){
    // dans le cas ou ça ne crit pas
    int attaque;
    if ((rand()%100)>this->coupCritique){
        if ((rand()%100)>this->echecCritique){
                return this->attaque;
        }
        // dans le cas ou l'attaque échec critique
        else{
            cout << "AHAHAHA " << this->nom << " fait un echec critique (mdr) !" << endl;
            return 0;
        }
        // dans le cas ou l'attaque crit
    } else{
        cout << "ET PAFFFFF " << this->nom << " balance un sale critique !" << endl;
        return this->attaque*1.5;
    }

}

void Entite::healing(int valeurHeal){
    //on bloque le healing au hp max
    if (this->vie+valeurHeal>=this->vieMax){
        this->vie=this->vieMax;
    } else {
        this->vie+=valeurHeal;
    }
}

bool Entite::estMort()
{
    return (this->vie <= 0);
}

int Entite::type(){
    return 0;
}
