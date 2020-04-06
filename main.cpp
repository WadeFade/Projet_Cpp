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

    vector<Item*> item = monJeu->getTableauItems();
    item[0]->affichageItem();
    item[1]->affichageItem();
    //===========================================================================================
    //===========================================================================================
    //===========================================================================================
    //===========================================================================================

// °°°°°°°°°°°°°°°°°°°°°°°°°° Instantiation des joueurs / mobs / boss °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°



    int nombreClasse=3;
    int nombreMob=3;
    int nombreBoss=3;
    vector<Joueur*> tableauJoueur(nombreClasse);
    vector<Monstre*> tableauMonstre(nombreMob);
    vector<Boss*> tableauBoss(nombreBoss);


    vector<Entite*> tableauEntites;

    //Création des Entites.
    //C'est la transformation du code d'Andy.
    for (int i = 0; i<3; i++){
        Barde* barde = new Barde();
        Guerrier* guerrier = new Guerrier();
        Mage* mage = new Mage();
        Elementaire* elementaire = new Elementaire();
        Loup* loup = new Loup();
        Zombie* zombie = new Zombie();
        Cerbere* cerbere = new Cerbere();
        Griffon* griffon = new Griffon();
        Minotaure* minotaure = new Minotaure();
        tableauEntites.push_back(barde);
        tableauEntites.push_back(guerrier);
        tableauEntites.push_back(mage);
        tableauEntites.push_back(elementaire);
        tableauEntites.push_back(loup);
        tableauEntites.push_back(zombie);
        tableauEntites.push_back(cerbere);
        tableauEntites.push_back(griffon);
        tableauEntites.push_back(minotaure);
    }


/*
    for (int i=0;i<3;i++){
        cout << endl;
        tableauJoueur[i]->affichageEntite();
        cout << endl;
        tableauMonstre[i]->affichageEntite();
        cout << endl;
        tableauBoss[i]->affichageEntite();
        cout << endl;
    }
*/

    //===========================================================================================
    //===========================================================================================
    //===========================================================================================
    //===========================================================================================

    //Algo pour le jeu
    //int numDonjon = 0;
    //int numSalle = 0;
    // c'est dégueu il aurait fallu faire 1classe par type d'arme.. et tout réunir sur un seul et même tableau.
 //   monJeu->getDonjon(numDonjon)->getSalles(numSalle)->lootSalle(numDonjon, numSalle, tableauEpees, tableauArcs, tableauBaguettes, tableauDagues, tableauBatons, tableauPelles, tableauMarteaux, tableauArmures, tableauPotionsSoin, tableauPotionsMana, tableauCristauxVie, tableauCristauxMana);
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




