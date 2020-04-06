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
    //c'est dégueu il aurait fallu faire 1classe par type d'arme.. et tout réunir sur un seul et même tableau.
    //monJeu->getDonjon(numDonjon)->getSalles(numSalle)->lootSalle(numDonjon, numSalle, tableauEpees, tableauArcs, tableauBaguettes, tableauDagues, tableauBatons, tableauPelles, tableauMarteaux, tableauArmures, tableauPotionsSoin, tableauPotionsMana, tableauCristauxVie, tableauCristauxMana);
/*
    for (int x = 0; x<3; x++){

    if ((tableauJoueur[x]->getNom()) == "Barde"){
        tableauJoueur[x]->setInventaire(tableauBatons[0]);
        tableauJoueur[x]->setInventaire(tableauArmures[0]);
        tableauJoueur[x]->setInventaire(tableauPotionsSoin[0]);
        tableauJoueur[x]->setInventaire(tableauPotionsMana[0]);
        tableauJoueur[x]->setInventaire(tableauCristauxVie[0]);
        tableauJoueur[x]->setInventaire(tableauCristauxMana[0]);

    } else if ((tableauJoueur[x]->getNom()) == "Guerrier"){
        tableauJoueur[x]->setInventaire(tableauEpees[0]);
        tableauJoueur[x]->setInventaire(tableauArmures[0]);
        tableauJoueur[x]->setInventaire(tableauPotionsSoin[0]);
        tableauJoueur[x]->setInventaire(tableauPotionsMana[0]);
        tableauJoueur[x]->setInventaire(tableauCristauxVie[0]);
        tableauJoueur[x]->setInventaire(tableauCristauxMana[0]);

    } else if ((tableauJoueur[x]->getNom()) == "Mage"){
        tableauJoueur[x]->setInventaire(tableauBaguettes[0]);
        tableauJoueur[x]->setInventaire(tableauArmures[0]);
        tableauJoueur[x]->setInventaire(tableauPotionsSoin[0]);
        tableauJoueur[x]->setInventaire(tableauPotionsMana[0]);
        tableauJoueur[x]->setInventaire(tableauCristauxVie[0]);
        tableauJoueur[x]->setInventaire(tableauCristauxMana[0]);
    }

    tableauJoueur[x]->affichageEntite();
    cout << endl;
}
*/






    //===========================================================================================
    //===========================================================================================
    //===========================================================================================
    //===========================================================================================
    /*
    for (int i = 0; i<nbNomsArmes; i++){
        //Destructions des instances d'Armes
        delete tableauEpees[i];
        delete tableauArcs[i];
        delete tableauBaguettes[i];
        delete tableauDagues[i];
        delete tableauBatons[i];
        delete tableauPelles[i];
        delete tableauMarteaux[i];
    }
    for (int i = 0; i<nbNoms; i++){
        //Instantiation des Armures et Consommables
        delete tableauArmures[i];
        delete tableauPotionsSoin[i];
        delete tableauPotionsMana[i];

        delete tableauCristauxVie[i];
        delete tableauCristauxMana[i];
    }
    for (int i=0;i<3;i++){
        delete tableauJoueur[i];
        delete tableauMonstre[i];
        delete tableauBoss[i];
    }
    */
    delete monJeu;
        return 0;

}




