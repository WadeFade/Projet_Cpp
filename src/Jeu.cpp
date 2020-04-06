#include "Jeu.h"
#include "time.h"
#include "stdlib.h"
#include "couleur.h"
#include "windows.h"
#include "Monstre.h"
#include "couleur.h"

using namespace std;

Jeu::Jeu()
{
    //ctor
    for(int i = 0; i < 5;i++){
        this->lesDonjons.push_back(new Donjon());
    }
    this->lesDonjons[0]->setNom("DONJON 1");
    this->lesDonjons[1]->setNom("DONJON 2");
    this->lesDonjons[2]->setNom("DONJON 3");
    this->lesDonjons[3]->setNom("DONJON 4");
    this->lesDonjons[4]->setNom("DONJON 5");

//    this->color = new couleur;
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
void Jeu::setX(int x)
{
    this->x=x;
}

void Jeu::setY(int y)
{
    this->y=y;
}


/* *********************************** Getter ********************************************* */
int Jeu::getDifficulty()
{
    return this->difficulty;
}

int Jeu::getX()
{
    return this->x;
}

int Jeu::getY()
{
    return this->y;
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

void Jeu::affichageElementSalle()
{
    int couleur;

    for(int i = 0;i < 5;i++){
        cout << lesDonjons[i]->getNom() << endl;
            for(int a = 0; a < 5;a++){
            this->lesDonjons[i]->getSalles(a)->affichageSalle();
        }
        cout << endl;
    }
}

void Jeu::afficherMonstresSalles()
{
    for(int i =0;i < 5;i++){
        cout << lesDonjons[i]->getNom() << endl;
        for(int a =0;a < 5;a++){
            mettreEnCouleur(this->lesDonjons[i]->getSalles(a)->getEnvironnement(), 0);
            cout << "|" << "Salle n " << this->lesDonjons[i]->getSalles(a)->getNum() << "|" << endl;
            mettreEnCouleur(7,0);
            this->lesDonjons[i]->getSalles(a)->getLesMonstresDeLaSalle();
        }
    }
}

void Jeu::resoudreJeu()
{
    for(unsigned int i = 0;i < this->lesDonjons.size();i++){
        this->resoudreDonjon(this->lesDonjons[i]);
    }
    cout << "Vous avez fini le jeux, BRAVO" << endl;
}
void Jeu::resoudreDonjon(Donjon* donjon)
{
    cout << "Vous entrez dans le " << donjon->getNom() << endl;
    vector<Salle*> lesSalles = donjon->getSalles();
    for(unsigned int i = 0;i < lesSalles.size();i++){
        this->resoudreSalle(lesSalles[i]);
    }
}
void Jeu::resoudreSalle(Salle* salle)
{
    cout << "Vous entrez dans la salle " << salle->getNum() << endl;

    int baston = 0;// vivant, mort,fuite
    vector<Monstre*> lesMonstres = salle->getLesMonstresDeLaSalle();
    for(unsigned int i = 0; i < lesMonstres.size();i++) {
        this->baston(lesMonstres[i]);
    }
    system("cls");
}

void Jeu::baston(Monstre* monstre)
{
    cout << "Vous rencontrez le monstre " << monstre->getNom() << " qui a " << monstre->getVie() << "pv." << endl;
    int choix =0;
    int degat;
    while(!monstre->estMort()) {
        cout << "Que voulez vous faire ?\nFuir = 1, Attaquer = 2 ?" << endl;
        cin >> choix;
        if(choix == 1) {
            cout << "Vous avez fuit le combat, vous éviter ce mob" << endl;
            break;
        }
        else if (choix == 2) {
            degat = this->joueur->donneUnCoup();
            monstre->sePrendUnCoup(degat);
        cout << "Vous frappez le monstre " << monstre->getNom() <<" de " << degat << " degats" << ", il lui reste " << monstre->getVie() << endl;
        }
    }
}

void Jeu::setJoueur( Joueur* joueur)
{
    this->joueur = joueur;
}

void Jeu::mettreEnCouleur(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}

