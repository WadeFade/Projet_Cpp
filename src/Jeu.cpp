#include "Jeu.h"
#include "time.h"
#include "stdlib.h"

using namespace std;

Jeu::Jeu()
{
    //ctor
    for(int i = 0; i < 5;i++){
        lesDonjons.push_back(new Donjon());
    }
}

Jeu::~Jeu()
{
    //dtor
}


// peut etre la deplacer dasn le constructeur
void Jeu::setLesDonjons()
{
    string nomDonjon[5] = {"Tortage", "Prairies_du_nord", "Village_de_conarch", "Khemi", "Tarantia"};
    for(int i = 0; i < 5;i++){
        this->lesDonjons[i]->setNom(nomDonjon[i]);
    }
}

vector<Donjon*> Jeu::getDonjons()
{
    for(int i =0; i<5;i++){
        cout << this->lesDonjons[i]->getNom() << endl;
    }
    return lesDonjons;
}


