#include <iostream>
#include "Donjon.h"
#include "Item.h"
#include "Armes.h"
#include "Armures.h"
#include "Consommables.h"
#include <vector>

using namespace std;

int main()
{
    //===========================================================================================
    //===========================================================================================
    //CETTE PARTIE SERA A DEPLACER DANS LA CLASSE JEU SOUS FORME DE METHODE POUR LIBERER LE MAIN.
    //===========================================================================================
    //===========================================================================================
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

    for (int i = 0; i<nbNomsArmes; i++){

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
        tableauArcs[i]->setNomItem(nomsArcs[i]);
        tableauArcs[i]->setAttaque(i*10+10);
        tableauBaguettes[i]->setNomItem(nomsBaguettes[i]);
        tableauBaguettes[i]->setAttaque(i*10+10);
        tableauDagues[i]->setNomItem(nomsDagues[i]);
        tableauDagues[i]->setAttaque(i*10+10);
        tableauBatons[i]->setNomItem(nomsBatons[i]);
        tableauBatons[i]->setAttaque(i*10+10);
        tableauPelles[i]->setNomItem(nomsPelles[i]);
        tableauPelles[i]->setAttaque(i*10+10);
        tableauMarteaux[i]->setNomItem(nomsMarteaux[i]);
        tableauMarteaux[i]->setAttaque(i*10+10);
    }

    for (int i = 0; i<nbNoms; i++){

        //Instantiation des Armures et Consommables
        tableauArmures[i] = new Armures();
        tableauPotionsSoin[i] = new Consommables();
        tableauPotionsMana[i] = new Consommables();

        //Set des noms des Armures et Consommables
        tableauArmures[i]->setNomItem(nomsArmures[i]);
        tableauArmures[i]->setResistance(i*5+5);
        tableauPotionsSoin[i]->setNomItem(nomsPotionsSoin[i]);
        tableauPotionsSoin[i]->setRegenVie(i*10+10);
        tableauPotionsMana[i]->setNomItem(nomsPotionsMana[i]);
        tableauPotionsMana[i]->setRegenMana(i*10+10);
    }


    //AFFICHAGE DE TOUS LES ITEMS
    for (int i = 0; i<nbNomsArmes; i++){

        cout << "Epees : " << i+1 << " : " << tableauEpees[i]->getNomItem() << endl;
        cout << "Degats : " << tableauEpees[i]->getAttaque() << endl;

    }
    cout << endl;

    for (int i = 0; i<nbNomsArmes; i++){
        cout << "Arcs : " << i+1 << " : " << tableauArcs[i]->getNomItem() << endl;
        cout << "Degats : " << tableauArcs[i]->getAttaque() << endl;

    }
    cout << endl;

    for (int i = 0; i<nbNomsArmes; i++){
        cout << "Baguettes : " << i+1 << " : " << tableauBaguettes[i]->getNomItem() << endl;
        cout << "Degats : " << tableauBaguettes[i]->getAttaque() << endl;

    }
    cout << endl;

    for (int i = 0; i<nbNomsArmes; i++){
        cout << "Dagues : " << i+1 << " : " << tableauDagues[i]->getNomItem() << endl;
        cout << "Degats : " << tableauDagues[i]->getAttaque() << endl;

    }
    cout << endl;

    for (int i = 0; i<nbNomsArmes; i++){
        cout << "Batons : " << i+1 << " : " << tableauBatons[i]->getNomItem() << endl;
        cout << "Degats : " << tableauBatons[i]->getAttaque() << endl;

    }
    cout << endl;

    for (int i = 0; i<nbNomsArmes; i++){
        cout << "Pelles : " << i+1 << " : " << tableauPelles[i]->getNomItem() << endl;
        cout << "Degats : " << tableauPelles[i]->getAttaque() << endl;

    }
    cout << endl;

    for (int i = 0; i<nbNomsArmes; i++){
        cout << "Marteaux : " << i+1 << " : " << tableauMarteaux[i]->getNomItem() << endl;
        cout << "Degats : " << tableauMarteaux[i]->getAttaque() << endl;

    }
    cout << endl;

    for (int i = 0; i<5; i++){
        cout << "Armures : " << i+1 << " : " << tableauArmures[i]->getNomItem() << endl;
        cout << "Resistance : " << tableauArmures[i]->getResistance() << endl;
    }
    cout << endl;

    for (int i = 0; i<5; i++){
        cout << "Consommables (Heal) : " << i+1 << " : " << tableauPotionsSoin[i]->getNomItem() << endl;
        cout << "Regen Vie : " << tableauPotionsSoin[i]->getRegenVie() << endl;
    }
    cout << endl;

    for (int i = 0; i<5; i++){
        cout << "Consommables (Mana) : " << i+1 << " : " << tableauPotionsMana[i]->getNomItem() << endl;
        cout << "Regen Vie : " << tableauPotionsMana[i]->getRegenMana() << endl;
    }
    cout << endl;
    //===========================================================================================
    //===========================================================================================
    //===========================================================================================
    //===========================================================================================

    return 0;
}
