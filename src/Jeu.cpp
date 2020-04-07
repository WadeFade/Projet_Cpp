#include "Jeu.h"
#include "time.h"
#include "stdlib.h"
#include <cstdio>
#include "couleur.h"
#include "windows.h"
#include "Monstre.h"
#include "couleur.h"
#include "Barde.h"
#include "Guerrier.h"
#include "Mage.h"

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

//get tous les donjon
vector<Donjon*> Jeu::getLesDonjons()
{
    for(unsigned int i=0; i<lesDonjons.size();i++){
        cout << this->lesDonjons[i]->getNom() << endl;
    }
    return this->lesDonjons;
}

//get un donjon
Donjon* Jeu::getDonjon(int indexDonjon){
    return this->lesDonjons[indexDonjon];
}

/* ********************************* Methodes ******************************************* */

//voir les element de chaque salle
void Jeu::affichageElementSalle()
{
    int couleur;

    for(int i = 0;i < 5;i++){
        cout << lesDonjons[i]->getNom();
            for(int a = 0; a < 5;a++){
            this->lesDonjons[i]->getSalles(a)->affichageSalle();
        }
        cout << endl;
    }
}
//fin du jeu
void Jeu::resoudreJeu()
{
    for(unsigned int i = 0;i < this->lesDonjons.size();i++){
        this->resoudreDonjon(this->lesDonjons[i]);
    }
    cout << "Vous avez fini le jeux, BRAVO" << endl;
}
//fin du donjon
void Jeu::resoudreDonjon(Donjon* donjon)
{
    cout << "Vous entrez dans le " << donjon->getNom() << endl;
    vector<Salle*> lesSalles = donjon->getSalles();
    for(unsigned int i = 0;i < lesSalles.size();i++){
        this->resoudreSalle(lesSalles[i]);
    }
}
//fin de la salle
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
//Methode de combat
void Jeu::baston(Monstre* monstre)
{
    cout << "Vous rencontrez le monstre " << monstre->getNom() << " qui a " << monstre->getVie() << "pv." << endl;
    int choix =0;
    int degat;
    while(!monstre->estMort()) {
        cout << "Que voulez vous faire ?\nFuir = 1, Attaquer = 2, utiliser un item = 3, utiliser un sort = 4 ?" << endl;
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
        else if (choix == 3) {

        }
        else if( choix == 4) {

        }
    }
    if(monstre->estMort()) {
        this->joueur->ajoutExperience(10);
        if(this->joueur->gagneNiveau()) {
                cout << "Vous gagnez 1 niveau " << ". Vous avez ete soigne."  << endl;
        }
        cout << "Vous gagnez 10xp, vous etes niveau " << joueur->getNiveau() << "."  << endl;
    }
}

//methode du menu
void Jeu::menu()
{
    system("CLS");
    cout << "\t\t\tJEUX ROGUE HEY'PSI" << endl;
    cout << "\n\
\t\t\t      _,     ,_\n"
"\t\t\t    .'/  ,_   \\'.\n"
"\t\t\t   |  \\__( >__/  |\n"
"\t\t\t   \\             /\n"
"\t\t\t    '-..__ __..-'\n"
"\t\t\t         /_\\ "<< endl;
    string saisie="0";
    cout << "\t\t\t      Bienvenue ! \n\t   veuillez appuyez sur un touche pour commencer ! " << endl;
    getchar();
    fflush(stdin);
    //jeu ou tuto
    cout << "Tapez 1 pour commencer a jouer, tapez 2 voir le tutoriel" << endl;
    cin>>saisie;
    while(saisie!="1"&&saisie!="2"&&saisie!="3"){
        cout<<"Erreur :"<<endl;
        cout << "Tapez 1 pour commencer a jouer, tapez 2 voir le tutoriel" << endl;
        cin>>saisie;
    }
    if(saisie == "2") {
        cout<<"Rogue Hey'psi est un rpg textuel, le jeu ce constitue de 5 donjons contenant chacun 5 salles. Le but etant d'arriver au bout des 5 donjons sans mourir.\nSur votre chemin vous pouvez recuperez des armes, armures ou des consomnable qui vous seront tres utile pour avancer.Au debut vous pouvez choisir une classe, chaque classe a des sort differents."<<endl;
        system("pause");
        system("cls");
        saisie = 1;
    }
    //choix classe
    cout << "Veuillez choisir votre classe : \n 1- Guerrier\n 2- Mage \n 3- Barde" << endl;
    cin>>saisie;
    while(saisie!="1"&&saisie!="2"&&saisie!="3"){
        cout<<"Erreur :"<<endl;
        cout << "Veuillez choisir votre classe : \n 1- Guerrier\n 2- Mage \n 3- Barde" << endl;
        cin>>saisie;
    }
 Joueur* joueur;
    if(saisie=="1"){
        //creation barde
        cout<<"Guerrier choisis"<<endl;
        joueur=new Guerrier();
    }
    if (saisie=="2"){
        //creation barde
        cout<<"Mage choisis"<<endl;
        joueur=new Mage();
    }
    if (saisie=="3"){
        //creation barde
        cout<<"Barde choisis"<<endl;
        joueur=new Barde();
    }
    system("cls");
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

