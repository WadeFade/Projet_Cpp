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
    //===========================================================================================
    //===========================================================================================
    //CETTE PARTIE SERA A DEPLACER DANS LA CLASSE JEU SOUS FORME DE METHODE POUR LIBERER LE MAIN.
    //===========================================================================================
    //===========================================================================================

// °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° Instantiation des items  °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°

/*
    //Ajout de toutes les armes dans le vecteur d'items.
    for (int i = 0; i<nbNomsArmes; i++){
        Armes* epee = new Armes(i, (i*10+10), "epee", (8/(i+1)), nomsEpees[i], 50*i);
        Armes* arc = new Armes(i, (i*10+10), "arc", (8/(i+1)), nomsArcs[i], 50*i);
        Armes* baguette = new Armes(i, (i*10+10), "baguette", (8/(i+1)), nomsBaguettes[i], 50*i);
        Armes* dague = new Armes(i, (i*10+10), "dague", (8/(i+1)), nomsDagues[i], 50*i);
        Armes* baton = new Armes(i, (i*10+10), "baton", (8/(i+1)), nomsBatons[i], 50*i);
        Armes* pelle = new Armes(i, (i*10+10), "pelle", (8/(i+1)), nomsPelles[i], 50*i);
        Armes* marteau = new Armes(i, (i*10+10), "marteau", (8/(i+1)), nomsMarteaux[i], 50*i);
        tableauItems.push_back(epee);
        tableauItems.push_back(arc);
        tableauItems.push_back(baguette);
        tableauItems.push_back(dague);
        tableauItems.push_back(baton);
        tableauItems.push_back(pelle);
        tableauItems.push_back(marteau);
    }

    //Ajout de toutes les armures dans le vecteur d'items.
    for (int i = 0; i<nbNoms; i++){
        Armures* armure = new Armures(i, nomsArmures[i], (i*5+5), (8/(i+1)), 50*i);
        tableauItems.push_back(armure);
    }

    //Ajout de tous les consommables dans le vecteur d'items.
    for (int i = 0; i<nbNoms; i++){
        Consommables* consommableV = new Consommables(i, nomsPotionsSoin[i], (i*10+10), 0, "vie", (8/(i+1)), 1);
        Consommables* consommableM = new Consommables(i, nomsPotionsMana[i], 0, (i*10+10), "mana", (8/(i+1)), 1);
        tableauItems.push_back(consommableV);
        tableauItems.push_back(consommableM);
    }

    //Ajout de tous les cristaux dans le vecteur d'items.
    for (int i = 0; i<nbNoms; i++){
        Cristaux* cristalV = new Cristaux(i, nomsCristauxVie[i], (i*20+20), 0, "vie", (8/(i+1)), 1);
        Cristaux* cristalM = new Cristaux(i, nomsCristauxMana[i], 0, (i*20+20), "mana", (8/(i+1)), 1);
        tableauItems.push_back(cristalV);
        tableauItems.push_back(cristalM);
    }
*/


    //===========================================================================================
    //===========================================================================================
    //===========================================================================================
    //===========================================================================================

// °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° Instantiation du donjon °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°

    Jeu* monJeu = new Jeu();
/*
    for (int i=0;i<5;i++){
        monJeu->getDonjon(i)->affichageDonjon();
    }

    monJeu->affichageJeu();
*/
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

    //Instantiation des classes
    tableauJoueur[0]=new Barde();
    tableauJoueur[1]=new Guerrier();
    tableauJoueur[2]=new Mage();
    //Instantiation des monstres
    tableauMonstre[0]=new Elementaire();
    tableauMonstre[1]=new Loup();
    tableauMonstre[2]=new Zombie();
    //Instantioation des boss
    tableauBoss[0]=new Cerbere();
    tableauBoss[1]=new Griffon();
    tableauBoss[2]=new Minotaure();
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
    int numDonjon = 0;
    int numSalle = 0;
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




