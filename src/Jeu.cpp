#include "Jeu.h"
#include "time.h"
#include "stdlib.h"
#include "couleur.h"
#include "windows.h"



using namespace std;

Jeu::Jeu()
{
    //ctor
    int nbNoms = 5;
    int nbNomsArmes = 6;

    //Tous les noms des Items (Armes, Armures, Consommables)
    //Noms des armes.
    string nomsEpees[nbNomsArmes] = {"L'Epee de l'initie", "L'Epee Nice", "L'Epee Ta'Rad'", "L'Epee Kari", "L'Epee Toche", "L'Epee du Granduk"};
    string nomsArcs[nbNomsArmes] = {"Arc de l'initie", "Arc a Chon", "Arc Ontanporin", "Arc Oleptik", "Arc Necrotique", "Arc Ahique"};
    string nomsBaguettes[nbNomsArmes] = {"Baguette de l'initie", "Baguette Rikiki", "Baguette Hylique", "La Baguette des Limbes", "Baguetterelle", "Baguette Hernelle"};
    string nomsDagues[nbNomsArmes] = {"Dagues de l'initie", "Dagues Tylo", "Dagues O'Bert", "Youyettes", "Dagues Acantes", "Dagoulinantes"};
    string nomsBatons[nbNomsArmes] = {"Baton de l'initie", "Abraton", "Baton Lav'Heur'", "Canne Hassukre", "Baton Brelle", "Canne Harr"};
    string nomsPelles[nbNomsArmes] = {"Pelle de l'initie", "Pelle a Thart'", "Pelle Ikan", "Pelle Hikule", "La Beche a Mel", "Beche Asse"};
    string nomsMarteaux[nbNomsArmes] = {"Marteau de l'initie", "Marteau Outar", "Marteau Nitruhant", "Mourtheau", "Marteau R'ture", "Mjollnir"};

    //Noms des armures.
    string nomsArmures[nbNoms] = {"Armure en Cuir", "Armure en Or", "Armure en Fer", "Armure en Diamant", "Armure en Obsidienne"};

    //Noms des consommables.
    string nomsPotionsSoin[nbNoms] = {"Petite Potion de Soin", "Potion de Soin", "Grande Potion de Soin", "Gigantesque Potion de Soin", "SurPuissante Potion de Soin"};
    string nomsPotionsMana[nbNoms] = {"Petit Elixir de Mana", "Elixir de Mana", "Grand Elixir de Mana", "Gigantesque Elixir de Mana", "SurPuissant Elixir de Mana"};

    //Noms des cristaux.
    string nomsCristauxVie[nbNoms] = {"Petit Cristal de Vie", "Cristal de Vie", "Grand Cristal de Vie", "Enorme Cristal de Vie", "SurPuissant Cristal de Vie"};
    string nomsCristauxMana[nbNoms] = {"Petit Cristal de Mana", "Cristal de Mana", "Grand Cristal de Vie", "Enorme Cristal de Mana", "SurPuissant Cristal de Mana"};

    //Ajout de toutes les armes dans le vecteur d'items.
    for (int i = 0; i<nbNomsArmes; i++){
        Armes* epee = new Armes(i, (i*10+10), "epee", (8/(i+1)), nomsEpees[i], 50*i);
        Armes* arc = new Armes(i, (i*10+10), "arc", (8/(i+1)), nomsArcs[i], 50*i);
        Armes* baguette = new Armes(i, (i*10+10), "baguette", (8/(i+1)), nomsBaguettes[i], 50*i);
        Armes* dague = new Armes(i, (i*10+10), "dague", (8/(i+1)), nomsDagues[i], 50*i);
        Armes* baton = new Armes(i, (i*10+10), "baton", (8/(i+1)), nomsBatons[i], 50*i);
        Armes* pelle = new Armes(i, (i*10+10), "pelle", (8/(i+1)), nomsPelles[i], 50*i);
        Armes* marteau = new Armes(i, (i*10+10), "marteau", (8/(i+1)), nomsMarteaux[i], 50*i);
        this->tableauItems.push_back(epee);
        this->tableauItems.push_back(arc);
        this->tableauItems.push_back(baguette);
        this->tableauItems.push_back(dague);
        this->tableauItems.push_back(baton);
        this->tableauItems.push_back(pelle);
        this->tableauItems.push_back(marteau);
    }

    //Ajout de toutes les armures dans le vecteur d'items.
    for (int i = 0; i<nbNoms; i++){
        Armures* armure = new Armures(i, nomsArmures[i], (i*5+5), (8/(i+1)), 50*i);
        this->tableauItems.push_back(armure);
    }

    //Ajout de tous les consommables dans le vecteur d'items.
    for (int i = 0; i<nbNoms; i++){
        Consommables* consommableV = new Consommables(i, nomsPotionsSoin[i], (i*10+10), 0, "vie", (8/(i+1)), 1);
        Consommables* consommableM = new Consommables(i, nomsPotionsMana[i], 0, (i*10+10), "mana", (8/(i+1)), 1);
        this->tableauItems.push_back(consommableV);
        this->tableauItems.push_back(consommableM);
    }

    //Ajout de tous les cristaux dans le vecteur d'items.
    for (int i = 0; i<nbNoms; i++){
        Cristaux* cristalV = new Cristaux(i, nomsCristauxVie[i], (i*20+20), 0, "vie", (8/(i+1)), 1);
        Cristaux* cristalM = new Cristaux(i, nomsCristauxMana[i], 0, (i*20+20), "mana", (8/(i+1)), 1);
        this->tableauItems.push_back(cristalV);
        this->tableauItems.push_back(cristalM);
    }


    //Création des Entites (Réécriture partie d'Andy).
    //A voir le nombre d'instantiation par la suite des monstres.
    Barde* barde = new Barde();
    Guerrier* guerrier = new Guerrier();
    Mage* mage = new Mage();
    Elementaire* elementaire = new Elementaire();
    Loup* loup = new Loup();
    Zombie* zombie = new Zombie();
    Cerbere* cerbere = new Cerbere();
    Griffon* griffon = new Griffon();
    Minotaure* minotaure = new Minotaure();
    //Ajout des entites dans le vecteur des entites.
    this->tableauEntites.push_back(barde);
    this->tableauEntites.push_back(guerrier);
    this->tableauEntites.push_back(mage);
    this->tableauEntites.push_back(elementaire);
    this->tableauEntites.push_back(loup);
    this->tableauEntites.push_back(zombie);
    this->tableauEntites.push_back(cerbere);
    this->tableauEntites.push_back(griffon);
    this->tableauEntites.push_back(minotaure);



    for(int i = 0; i < 5;i++){
        this->lesDonjons.push_back(new Donjon());
    }
    this->lesDonjons[0]->setNom("Tortage");
    this->lesDonjons[1]->setNom("Prairies du nord");
    this->lesDonjons[2]->setNom("Village de conarch");
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
    return this->lesDonjons;
}
Donjon* Jeu::getDonjon(int indexDonjon){
    return this->lesDonjons[indexDonjon];
}

vector<Item*> Jeu::getTableauItems(){
    return this->tableauItems;
}

vector<Entite*> Jeu::getTableauEntites(){
    return this->tableauEntites;
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
void Jeu::creationJoueur(){

}
