#include "Jeu.h"
#include "time.h"
#include "stdlib.h"
#include "couleur.h"
#include "windows.h"


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

void Jeu::affichageJeu()
{
    int couleur;

    for(int i = 0;i < 5;i++){
        cout << lesDonjons[i]->getNom();
            for(int a = 0; a < 5;a++){
            this->lesDonjons[i]->getSalles(a)->setEnvironnement(rand() % 5 + 1);
            couleur = this->lesDonjons[i]->getSalles(a)->getEnvironnement();
            mettreEnCouleur(couleur,0);
            cout << "|";
            cout << this->lesDonjons[i]->getSalles(a)->getNum();
            cout << "|";
            mettreEnCouleur(7,0);
        }
        cout << endl;
    }
}
void Jeu::mettreEnCouleur(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}

