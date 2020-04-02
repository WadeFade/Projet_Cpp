#include "Salle.h"
#include <string>
#include <iostream>

using namespace std;

Donjon::Donjon()
{
    //ctor
    for(int i = 0;i < 5;i++){
        this->lesSalles.push_back(new Salle());
        this->lesSalles[i]->setNum(i+1);
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

<<<<<<< HEAD
vector<Salle*> Donjon::getSalles()
{
    return this->lesSalles;
}

=======
>>>>>>> 66bdc9335605420ca4ae9816da616aeec3817aaf
void Donjon::affichageDonjon(){
    for(int i =0; i<5;i++){
        cout << "Donjon : " << this->nom << endl;
        this->lesSalles[i]->affichageSalle();
    }
}
