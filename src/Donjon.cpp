#include "Salle.h"
#include <string>
#include <iostream>

using namespace std;

Donjon::Donjon()
{
    //ctor
}

Donjon::Donjon(int numeroDonjon)
{
    //ctor
    for(int i = 0;i < 5;i++){
            if (i==4){
                this->lesSalles.push_back(new Salle(numeroDonjon));
                this->lesSalles[i]->setNum(i+1);
            }
            else {
                this->lesSalles.push_back(new Salle(i,numeroDonjon));
                this->lesSalles[i]->setNum(i+1);
            }
    }
}

Donjon::~Donjon()
{
    //dtor
}
/* *********************************** Setter ********************************************* */
void Donjon::setNom(string nom)
{
    this->nom = nom;
}

void Donjon::setSalle()
{
    for(int i = 0;i < 5;i++){
        this->lesSalles[i]->setNum(i);
    }
}

/* *********************************** Getter ********************************************* */
string Donjon::getNom()
{
    return this->nom;
}

/* *********************************** Methode ********************************************* */

Salle* Donjon::getSalles(int num)
{
    return this->lesSalles[num];
}


vector<Salle*> Donjon::getSalles()
{
    return this->lesSalles;
}


void Donjon::affichageDonjon(){
    for(int i =0; i<5;i++){
        cout << "Donjon : " << this->nom << endl;
        this->lesSalles[i]->affichageSalle();
    }
}
