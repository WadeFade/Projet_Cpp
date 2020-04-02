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



    int nbNoms = 5;
    int nbNomsArmes = 6;

    //Tous les noms des Items (Armes, Armures, Consommables)
    string nomsEpees[nbNomsArmes] = {"L'Epee de l'initie", "L'Epee Nice", "L'Epee Ta'Rad'", "L'Epee Kari", "L'Epee Toche", "L'Epee du Granduk"};
    string nomsArcs[nbNomsArmes] = {"Arc de l'initie", "Arc a Chon", "Arc Ontanporin", "Arc Oleptik", "Arc Necrotique", "Arc Ahique"};
    string nomsBaguettes[nbNomsArmes] = {"Baguette de l'initie", "Baguette Rikiki", "Baguette Hylique", "La Baguette des Limbes", "Baguetterelle", "Baguette Hernelle"};
    string nomsDagues[nbNomsArmes] = {"Dagues de l'initie", "Dagues Tylo", "Dagues O'Bert", "Youyettes", "Dagues Acantes", "Dagoulinantes"};
    string nomsBatons[nbNomsArmes] = {"Baton de l'initie", "Abraton", "Baton Lav'Heur'", "Canne Hassukre", "Baton Brelle", "Canne Harr"};
    string nomsPelles[nbNomsArmes] = {"Pelle de l'initie", "Pelle a Thart'", "Pelle Ikan", "Pelle Hikule", "La Beche a Mel", "Beche Asse"};
    string nomsMarteaux[nbNomsArmes] = {"Marteau de l'initie", "Marteau Outar", "Marteau Nitruhant", "Mourtheau", "Marteau R'ture", "Mjollnir"};

    string nomsArmures[nbNoms] = {"Armure en Cuir", "Armure en Or", "Armure en Fer", "Armure en Diamant", "Armure en Obsidienne"};


    string nomsPotionsSoin[nbNoms] = {"Petite Potion de Soin", "Potion de Soin", "Grande Potion de Soin", "Gigantesque Potion de Soin", "SurPuissante Potion de Soin"};
    string nomsPotionsMana[nbNoms] = {"Petit Elixir de Mana", "Elixir de Mana", "Grand Elixir de Mana", "Gigantesque Elixir de Mana", "SurPuissant Elixir de Mana"};

    string nomsCristauxVie[nbNoms] = {"Petit Cristal de Vie", "Cristal de Vie", "Grand Cristal de Vie", "Enorme Cristal de Vie", "SurPuissant Cristal de Vie"};
    string nomsCristauxMana[nbNoms] = {"Petit Cristal de Mana", "Cristal de Mana", "Grand Cristal de Vie", "Enorme Cristal de Mana", "SurPuissant Cristal de Mana"};

    //Vector pour les Items (Armes, Armures, Consommables)
    vector<Armes*> tableauEpees(nbNomsArmes);
    vector<Armes*> tableauArcs(nbNomsArmes);
    vector<Armes*> tableauBaguettes(nbNomsArmes);
    vector<Armes*> tableauDagues(nbNomsArmes);
    vector<Armes*> tableauBatons(nbNomsArmes);
    vector<Armes*> tableauPelles(nbNomsArmes);
    vector<Armes*> tableauMarteaux(nbNomsArmes);

    vector<Armures*> tableauArmures(nbNoms);


    vector<Consommables*> tableauPotionsSoin(nbNoms);
    vector<Consommables*> tableauPotionsMana(nbNoms);

    vector<Cristaux*> tableauCristauxVie(nbNoms);
    vector<Cristaux*> tableauCristauxMana(nbNoms);

    for (int i = 0; i<nbNomsArmes; i++){

        //cout << endl;
        //Instantiation des Armes
        tableauEpees[i] = new Armes();
        tableauArcs[i] = new Armes();
        tableauBaguettes[i] = new Armes();
        tableauDagues[i] = new Armes();
        tableauBatons[i] = new Armes();
        tableauPelles[i] = new Armes();
        tableauMarteaux[i] = new Armes();

        //Set des noms des Armes et de leurs dégats
        tableauEpees[i]->setNomItem(nomsEpees[i]);
        tableauEpees[i]->setAttaque(i*10+10);
        tableauEpees[i]->deviensUneEpee();
        // et affichage

      //  tableauEpees[i]->affichageItem();
      //  cout << endl;

        tableauArcs[i]->setNomItem(nomsArcs[i]);
        tableauArcs[i]->setAttaque(i*10+10);
        tableauArcs[i]->deviensUnArc();
        // et affichage

      //  tableauArcs[i]->affichageItem();
      //  cout << endl;

        tableauBaguettes[i]->setNomItem(nomsBaguettes[i]);
        tableauBaguettes[i]->setAttaque(i*10+10);
        tableauBaguettes[i]->deviensUneBaguette();
        // et affichage

      //  tableauBaguettes[i]->affichageItem();
       // cout << endl;

        tableauDagues[i]->setNomItem(nomsDagues[i]);
        tableauDagues[i]->setAttaque(i*10+10);
        tableauDagues[i]->deviensUneDague();
        // et affichage

      //  tableauDagues[i]->affichageItem();
       // cout << endl;

        tableauBatons[i]->setNomItem(nomsBatons[i]);
        tableauBatons[i]->setAttaque(i*10+10);
        tableauBatons[i]->deviensUnBaton();
        // et affichage

     //   tableauBatons[i]->affichageItem();
       // cout << endl;

        tableauPelles[i]->setNomItem(nomsPelles[i]);
        tableauPelles[i]->setAttaque(i*10+10);
        tableauPelles[i]->deviensUnePelle();
        // et affichage

     //   tableauPelles[i]->affichageItem();
       // cout << endl;

        tableauMarteaux[i]->setNomItem(nomsMarteaux[i]);
        tableauMarteaux[i]->setAttaque(i*10+10);
        tableauMarteaux[i]->deviensUnMarteau();
        // et affichage

    //    tableauMarteaux[i]->affichageItem();
      //  cout << endl;

    }

    for (int i = 0; i<nbNoms; i++){


        //Instantiation des Armures et Consommables et Cristaux
        tableauArmures[i] = new Armures();
        tableauPotionsSoin[i] = new Consommables();
        tableauPotionsMana[i] = new Consommables();
        tableauCristauxVie[i] = new Cristaux();
        tableauCristauxMana[i] = new Cristaux();
      //  cout << endl;

        //Set des noms des Armures et Consommables
        tableauArmures[i]->setNomItem(nomsArmures[i]);
        tableauArmures[i]->setResistance(i*5+5);
        // et affichage
     //   tableauArmures[i]->affichageItem();
      //  cout << endl;

        tableauPotionsSoin[i]->setNomItem(nomsPotionsSoin[i]);
        tableauPotionsSoin[i]->setRegenVie(i*10+10);
        // et affichage
      //  tableauPotionsSoin[i]->affichageItem();
       // cout << endl;

        tableauPotionsMana[i]->setNomItem(nomsPotionsMana[i]);
        tableauPotionsMana[i]->setRegenMana(i*10+10);
        // et affichage

       // tableauPotionsMana[i]->affichageItem();
       // cout << endl;

        tableauCristauxVie[i]->setNomItem(nomsCristauxVie[i]);
        tableauCristauxVie[i]->setVieSup(i*20+20);
        //affichage
       // tableauCristauxVie[i]->affichageItem();
      //  cout << endl;

        tableauCristauxMana[i]->setNomItem(nomsCristauxMana[i]);
        tableauCristauxMana[i]->setManaSup(i*20+20);
        //affichage
       // tableauCristauxMana[i]->affichageItem();
       //cout << endl;
    }





    //===========================================================================================
    //===========================================================================================
    //===========================================================================================
    //===========================================================================================

// °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° Instantiation du donjon °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°

    Jeu* monJeu = new Jeu();

    for (int i=0;i<5;i++){
        monJeu->getDonjon(i)->affichageDonjon();
    }

    monJeu->affichageJeu();

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

    for (int i=0;i<3;i++){
        cout << endl;
        tableauJoueur[i]->affichageEntite();
        cout << endl;
        tableauMonstre[i]->affichageEntite();
        cout << endl;
        tableauBoss[i]->affichageEntite();
        cout << endl;
    }


    //===========================================================================================
    //===========================================================================================
    //===========================================================================================
    //===========================================================================================
    // °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° Instantiation de l'inventaire  °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
    tableauJoueur[0]->setInventaire(tableauEpees[0]);
    tableauJoueur[0]->setInventaire(tableauArmures[0]);
    tableauJoueur[0]->setInventaire(tableauPotionsSoin[0]);
    tableauJoueur[0]->setInventaire(tableauPotionsMana[0]);
    tableauJoueur[0]->setInventaire(tableauCristauxVie[0]);
    tableauJoueur[0]->setInventaire(tableauCristauxMana[0]);
    tableauJoueur[0]->affichageInventaire();



    //===========================================================================================
    //===========================================================================================
    //===========================================================================================
    //===========================================================================================
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
    delete monJeu;
        return 0;

}




