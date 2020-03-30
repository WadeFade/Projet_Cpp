#include "Jeu.h"
#include "time.h"
#include "stdlib.h"

using namespace std;

Jeu::Jeu()
{
    //ctor
    for(int i = 0; i < 5;i++){
        this->lesDonjons.push_back(new Donjon());
    }
    this->lesDonjons[0]->setNom("Tortage");
    this->lesDonjons[1]->setNom("Prairies_du_nord");
    this->lesDonjons[2]->setNom("Village_de_conarch");
    this->lesDonjons[3]->setNom("Khemi");
    this->lesDonjons[4]->setNom("Tarantia");
}

Jeu::~Jeu()
{
    //dtor
}
/* *********************************** Setter ********************************************* */

void Jeu::setDifficulty(int difficulty)
{
    this->difficulty=difficulty;
}

void Jeu::setLesDonjons(Donjon* donjon)
{
    this->lesDonjons.push_back(donjon);
}
/* *********************************** Getter ********************************************* */
int Jeu::getDifficulty()
{
    return this->difficulty;
}

vector<Donjon*> Jeu::getLesDonjons()
{
    for(unsigned int i=0; i<lesDonjons.size();i++){
        cout << this->lesDonjons[i]->getNom() << endl;
    }
    return this->lesDonjons;
}
Donjon* Jeu::getDonjon(int indexDonjon){
    return this->lesDonjons[indexDonjon];
}

/* ********************************* Methodes ******************************************* */
