#include <iostream>
#include "Donjon.h"
#include "Item.h"
#include "Armes.h"
#include "Armures.h"
#include "Consommables.h"
#include "Cristaux.h"
#include "Joueur.h"
#include "Monstre.h"
#include "Boss.h"
#include "Jeu.h"
#include "Salle.h"
#include <vector>

#include "Barde.h"
#include "Guerrier.h"
#include "Mage.h"
#include "Elementaire.h"
#include "Loup.h"
#include "Zombie.h"
#include "Cerbere.h"
#include "Griffon.h"
#include "Minotaure.h"

//new
#include <stdlib.h>
#include <cstdio>

using namespace std;


int main()
{
    Jeu* monJeu = new Jeu();

    //Pour récupérer tous les items du jeu.
    vector<Item*> lesItems = monJeu->getTableauItems();

    //Fonction d'affichage, c'est juste pour voir que ça fonctionne.
    lesItems[0]->affichageItem();
    lesItems[1]->affichageItem();

    //Pour récupérer toutes les entités du Jeu.
    vector<Entite*> lesEntites = monJeu->getTableauEntites();
    //Fonction d'affichage, c'est juste pour voir que ça fonctionne.
    lesEntites[0]->affichageEntite();
    cout << endl;

    //Pour récupérer tous les donjons du Jeu.
    vector<Donjon*> lesDonjons = monJeu->getLesDonjons();
    //Affichage, c'est juste pour voir que ça fonctionne.
    cout << lesDonjons[0]->getNom() << endl;
    cout << lesDonjons[1]->getNom() << endl;

    //Algo pour le jeu
    int numDonjon = 0;
    int numSalle = 0;
  
    monJeu->setJoueur(monJeu->menu());
    monJeu->resoudreJeu();
    
    delete monJeu;
    return 0;
}




