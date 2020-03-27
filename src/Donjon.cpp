#include "Salle.h"
#include <string>
#include <iostream>

using namespace std;

Donjon::Donjon()
{
    //ctor
    for(int i = 0;i < 5;i++){
        lesSalles.push_back(new Salle());
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

/* *********************************** Getter ********************************************* */
string Donjon::getNom()
{
    return this->nom;
}

/* *********************************** Methode ********************************************* */

