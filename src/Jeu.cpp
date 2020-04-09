#include "Jeu.h"
#include "time.h"
#include "stdlib.h"
#include "windows.h"
#include <cstdio>
#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi
#include <sstream>
#include <vector>

#include "couleur.h"

#include "Entite.h"
#include "Monstre.h"

#include "Joueur.h"

#include "Boss.h"
#include "couleur.h"

#include "Barde.h"
#include "Guerrier.h"
#include "Mage.h"

#include "Item.h"
#include "Armes.h"
#include "Armures.h"
#include "Consommables.h"
#include "Cristaux.h"

#include <windows.h>


using namespace std;


Jeu::Jeu()
{
    //ctor
    srand(time(NULL));
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


for(int i = 0; i < 5;i++){
        this->lesDonjons.push_back(new Donjon(i));
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

//fin du jeu
void Jeu::resoudreJeu()
{
    for(unsigned int i = 0;i < this->lesDonjons.size();i++){
        this->resoudreDonjon(this->lesDonjons[i]);
    }
    this->ecranDeVictoireDeLaMortQuiTue();
}

//fin du donjon
void Jeu::resoudreDonjon(Donjon* donjon)
{
    cout << "Vous entrez dans le " << donjon->getNom() << endl;
    vector<Salle*> lesSalles = donjon->getSalles() ;
    for(unsigned int i = 0;i < lesSalles.size();i++){
        this->resoudreSalle(lesSalles[i]);
    }
}

//fin de la salle
void Jeu::resoudreSalle(Salle* salle)
{
    system("CLS");
    int abandon = 0;
    int nbGen = 0;
    int choix = 0;
    int aChange = 0;

    //Pour le transtypage des loots.
    Armes* armeLoot;
    Armures* armureLoot;
    Consommables* potionVieLoot;
    Consommables* potionManaLoot;
    Cristaux* cristalVieLoot;
    Cristaux* cristalManaLoot;

    cout << "Vous entrez dans la salle " << salle->getNum() << endl;
    if(salle->getNum()==5){
        vector<Boss*> lesBoss = salle->getLesBossDuDonjon();
        for(unsigned int i = 0;i < lesBoss.size();i++){
            this->baston(lesBoss[i]);
        }
    }
    vector<Monstre*> lesMonstres = salle->getLesMonstresDeLaSalle();
    for(unsigned int i = 0; i < lesMonstres.size() && abandon!=1;i++) {
       abandon=this->baston(lesMonstres[i]);
    }
    //system("cls");
    if (abandon == 1){
        cout << "Vous avez decide de fuir la salle, vous allez passer a la suivante sans gagner d'experience..." << endl;
    }
    else {
        cout << "Felicitation ! Vous avez passe cette salle avec Brio !" << endl;
        cout << "Allez-vous loot un objet ? =)" << endl;

        nbGen = rand()%101;

        if (nbGen % (10-salle->getNum())){
            int itemLoot = 0;
            vector <Item*> lesItems = this->getTableauItems();

            itemLoot = rand()%67;
            cout << "Vous avez loot : " << lesItems[itemLoot]->getNomItem() << " ";
            switch (lesItems[itemLoot]->type()){
            case 1:
                armeLoot = (Armes*)lesItems[itemLoot];
                cout << " degats : " << armeLoot->getAttaque() << "." << endl;
                break;

            case 2:
                armureLoot = (Armures*)lesItems[itemLoot];
                cout << " resistances : " << armureLoot->getResistance() << "." << endl;
                break;

            case 3:
                potionVieLoot = (Consommables*)lesItems[itemLoot];
                cout << potionVieLoot->getRegenVie() << " de vie." << endl;
                break;

            case 4:
                potionManaLoot = (Consommables*)lesItems[itemLoot];
                cout << potionManaLoot->getRegenMana() << " de mana." << endl;
                break;

            case 5:
                cristalVieLoot = (Cristaux*)lesItems[itemLoot];
                cout << cristalVieLoot->getVieSup() << " de vie supplementaire au porteur." << endl;
                break;

            case 6:
                cristalManaLoot = (Cristaux*)lesItems[itemLoot];
                cout << cristalManaLoot->getManaSup() << " de mana supplementaire au porteur." << endl;
                break;

            default :
                break;

            } //fin switch

            cout << endl;
            while (choix!=1 && choix!=2){
                //system("cls");
                cout << "Voulez-vous prendre cet item ? (" << lesItems[itemLoot]->getNomItem() << ")." << endl;
                cout << "Ne vous inquietez pas vous pourrez choisir quel item garder si votre inventaire est complet ! =)" << endl;
                cout << "1. Oui" << endl;
                cout << "2. Non" << endl;
                cout << "Votre choix (1 ou 2) : " << endl;
                cin >> choix;
            }

            if (choix == 1){
                //Faire attention que les type des items ont bien été fait :
                //1 = Armes
                //2 = Armures
                //3 = Potions de vie
                //4 = Potions de mana
                //5 = Cristaux de vie
                //6 = Cristaux de mana

                aChange = this->joueur->setInventaire(lesItems[itemLoot], lesItems[itemLoot]->type()-1);

                if (aChange == 1){
                    cout << "Vous avez bien change d'item !" << endl;
                }
                else if (aChange == 2){
                    cout << "Vous n'avez pas ramasse l'item !" << endl;
                }
            }
        } //fin IF
        else {
            cout << "Vous n'avez malheureusement pas eu de chance ! :(" << endl;
        }
    }
}

//Methode de combat
int Jeu::baston(Monstre* monstre)
{
    string saisie;
    int intSaisie;
    cout << "\n\t\tVous rencontrez le monstre " << monstre->getNom() << " qui a " << monstre->getVie() << "pv." << endl;
    int choix =0;
    int degat;

    int abandon = 0;
    int tourDeJeu=0;
    int tourDuMonstre=0;
    int joueurCommenceEnPremier=0;
    // todo rajouter joueur mort
    while(!monstre->estMort() && abandon!=1 && !joueur->estMort()){
        tourDeJeu++;
    	int degat2;
    	if (tourDuMonstre==0){
            cout << "\tQue voulez vous faire ?\n\n\t1 : Fuir || 2 : Attaquer || 3 : utiliser un item  || 4 : utiliser un sort " << endl;
            cin>>saisie;
            while (saisie!="1"&&saisie!="2"&&saisie!="3"&&saisie!="4"){
                cout << "Erreur vous n'avez pas saisie l'une des options ..." << endl;
                cout << "\tQue voulez vous faire ?\n\n\tFuir = 1, Attaquer = 2, utiliser un item = 3, utiliser un sort = 4 ?" << endl;
                cin>>saisie;
            }
            istringstream(saisie)>>choix;
        } else {
            choix=2;
        }
        if(choix == 1) {
            cout << "Vous avez fuit le combat, vous éviter ce mob" << endl;
            abandon = 1;
        }
        else if (choix == 2) {
            if (tourDeJeu==1){
                if(joueur->getInitiative()>= monstre->getInitiative()*2 || monstre->getInitiative() >= joueur->getInitiative()*2){
                	int initiativeSuperieur=0;
                	if (monstre->getInitiative() >= joueur->getInitiative()*2){
                		initiativeSuperieur=2;
                	} else{
                		initiativeSuperieur=1;
                	}
                    switch (initiativeSuperieur){
                    case 1:
                        cout << "\t" << joueur->getNom() << " Donne un premier coup " << endl;
                    	degat = this->joueur->donneUnCoup();
                    	cout << "\t" << joueur->getNom() << " Donne un second coup " << endl;
                    	degat2 = this->joueur->donneUnCoup();
                    	monstre->sePrendUnCoup(degat);
                    	monstre->sePrendUnCoup(degat2);
                    	cout << "Vous frappez le monstre " << monstre->getNom() <<" de " << degat << " degats et vous recommencez avec " << degat2 << ", il lui reste " << monstre->getVie() << endl;
                        joueurCommenceEnPremier=1;
                        tourDuMonstre=0;
                    break;
                    case 2:
                        cout << "\t" << monstre->getNom() << " Donne un premier coup " << endl;
                    	degat = monstre->donneUnCoup();
                    	cout << "\t" << monstre->getNom() << " Donne un second coup " << endl;
                    	degat2 = monstre->donneUnCoup();
                    	joueur->sePrendUnCoup(degat);
                    	joueur->sePrendUnCoup(degat2);
                    	cout << "Le monstre " << monstre->getNom() << " vous donne un coup a " << degat << "et il recommence avec " << degat2 << ", il vous reste " << joueur->getVie() << "pv." << endl;
                        tourDuMonstre=1;
                    break;
                    }
                }
               else if(joueur->getInitiative() > monstre->getInitiative()) {
                    cout << "\t" <<  joueur->getNom() << " Donne un coup " << endl;
                    degat = this->joueur->donneUnCoup();
                    monstre->sePrendUnCoup(degat);
                    cout << "Vous frappez le monstre " << monstre->getNom() <<" de " << degat << " degats" << ", il lui reste " << monstre->getVie() << endl;
                    tourDuMonstre=0;
                }
                else{
                    cout << "\t" << monstre->getNom() << " Donne un coup " << endl;
                    degat = monstre->donneUnCoup();
                    joueur->sePrendUnCoup(degat);
                    cout << "Le monstre " << monstre->getNom() << " vous donne un coup a " << degat << ", il vous reste " << joueur->getVie() << "pv." << endl;
                    tourDuMonstre=1;
                }
            } else {
                if (joueurCommenceEnPremier==1){
                        if (tourDeJeu%2){
                            // le monstre tape
                            cout << "\t" << monstre->getNom() << " Donne un coup " << endl;
                            degat = monstre->donneUnCoup();
                            joueur->sePrendUnCoup(degat);
                            cout << "Le monstre " << monstre->getNom() << " vous donne un coup a " << degat << ", il vous reste " << joueur->getVie() << "pv." << endl;
                            tourDuMonstre=1;
                        } else {
                            // le joueur tape
                            cout << "\t" <<  joueur->getNom() << " Donne un coup " << endl;
                            degat = this->joueur->donneUnCoup();
                            monstre->sePrendUnCoup(degat);
                            cout << "Vous frappez le monstre " << monstre->getNom() <<" de " << degat << " degats" << ", il lui reste " << monstre->getVie() << endl;
                            tourDuMonstre=0;
                        }
                } else {
                        if (tourDeJeu%2){
                            // le joueur tape
                            cout << "\t" <<  joueur->getNom() << " Donne un coup " << endl;
                            degat = this->joueur->donneUnCoup();
                            monstre->sePrendUnCoup(degat);
                            cout << "Vous frappez le monstre " << monstre->getNom() <<" de " << degat << " degats" << ", il lui reste " << monstre->getVie() << endl;
                            tourDuMonstre=0;
                        } else {
                            // le monstre tape
                            cout << "\t" << monstre->getNom() << " Donne un coup " << endl;
                            degat = monstre->donneUnCoup();
                            joueur->sePrendUnCoup(degat);
                            cout << "Le monstre " << monstre->getNom() << " vous donne un coup a " << degat << ", il vous reste " << joueur->getVie() << "pv." << endl;
                            tourDuMonstre=1;
                    }
                }
            }
        }
        // utilisation item
        else if (choix == 3) {
            this->joueur->affichageInventaire();
            // gestion de saisie + utilisation de l'item en question - bloqué l'utilisation des deux premieres cases
            cout << "Veuillez selectionner un item a utiliser : "<< endl;
            cin >> saisie;
            while (saisie!="3"&&saisie!="4"&&saisie!="5"&&saisie!="6"){
                    if (saisie=="2"||saisie=="1"){
                        cout << "Vous ne pouvez selectionner une arme ou une armure !"<< endl;
                    } else {
                    cout << "Erreur ! Vous n'avez pas selectionner un emplacement d'inventaire" << endl;
                }
                cout << "Veuillez selectionner un item a utiliser : "<< endl;
                cin >> saisie;
            }
            istringstream(saisie)>>intSaisie;
            intSaisie--;
            if (joueur->getInventaire(intSaisie)!='\0'){
                this->joueur->utilisationItem(intSaisie);
            } else {
                cout << "Vous ne pouvez pas utilisez cet emplacement, il est vide !" << endl;
            }
        }
        // utilisation spell
        else if( choix == 4) {
                if (tourDeJeu==1){
                if(joueur->getInitiative()>= monstre->getInitiative()*2 || monstre->getInitiative() >= joueur->getInitiative()*2){
                	int initiativeSuperieur=0;
                	if (monstre->getInitiative() >= joueur->getInitiative()*2){
                		initiativeSuperieur=2;
                	} else{
                		initiativeSuperieur=1;
                	}
                    switch (initiativeSuperieur){
                    case 1:
                        cout << "\t" << joueur->getNom() << " Donne un premier coup " << endl;
                    	utilisationSpellParticulier(monstre, degat);
                    	cout << "\t" << joueur->getNom() << " Donne un second coup " << endl;
                    	utilisationSpellParticulier(monstre, degat);
                        joueurCommenceEnPremier=1;
                    break;
                    case 2:
                        cout << "\t" << monstre->getNom() << " Donne un premier coup " << endl;
                    	degat = monstre->donneUnCoup();
                    	cout << "\t" << monstre->getNom() << " Donne un second coup " << endl;
                    	degat2 = monstre->donneUnCoup();
                    	joueur->sePrendUnCoup(degat);
                    	joueur->sePrendUnCoup(degat2);
                    	cout << "Le monstre " << monstre->getNom() << " vous donne un coup a " << degat << "et il recommence avec " << degat2 << ", il vous reste " << joueur->getVie() << "pv." << endl;
                    break;
                    }
                }
               else if(joueur->getInitiative() > monstre->getInitiative()) {
                    cout << "\t" <<  joueur->getNom() << " Donne un coup " << endl;
                    utilisationSpellParticulier(monstre, degat);
                }
                else{
                    cout << "\t" << monstre->getNom() << " Donne un coup " << endl;
                    degat = monstre->donneUnCoup();
                    joueur->sePrendUnCoup(degat);
                    cout << "Le monstre " << monstre->getNom() << " vous donne un coup a " << degat << ", il vous reste " << joueur->getVie() << "pv." << endl;
                }
            } else {
                if (joueurCommenceEnPremier==1){
                        if (tourDeJeu%2){
                            // le monstre tape
                            cout << "\t" << monstre->getNom() << " Donne un coup " << endl;
                            degat = monstre->donneUnCoup();
                            joueur->sePrendUnCoup(degat);
                            cout << "Le monstre " << monstre->getNom() << " vous donne un coup a " << degat << ", il vous reste " << joueur->getVie() << "pv." << endl;
                        } else {
                            // le joueur tape
                            cout << "\t" <<  joueur->getNom() << " Donne un coup " << endl;
                            utilisationSpellParticulier(monstre, degat);
                        }
                } else {
                        if (tourDeJeu%2){
                            // le joueur tape
                            cout << "\t" <<  joueur->getNom() << " Donne un coup " << endl;
                            utilisationSpellParticulier(monstre, degat);
                        } else {
                            // le monstre tape
                            cout << "\t" << monstre->getNom() << " Donne un coup " << endl;
                            degat = monstre->donneUnCoup();
                            joueur->sePrendUnCoup(degat);
                            cout << "Le monstre " << monstre->getNom() << " vous donne un coup a " << degat << ", il vous reste " << joueur->getVie() << "pv." << endl;
                    }
                }
            }
        }
    }

    if(monstre->estMort()) {
        this->joueur->ajoutExperience(10);
        if(this->joueur->gagneNiveau()) {
                cout << "Vous gagnez 1 niveau " << ". Vous avez ete soigne."  << endl;
        }
        cout << "Vous gagnez 10xp, vous etes niveau " << joueur->getNiveau() << "."  << endl;
    }
    if (joueur->estMort()){
        this->ecranDeDefaiteDeLaMortQuiTue();
    }
    return abandon;
}

void Jeu::utilisationSpellParticulier(Monstre* monstre, int degat){
        string saisie;
        int intSaisie;
        this->joueur->affichageSpellz();
        // gestion de saisie + utilisation du spell en question
        cout << "Veuillez selectionner un spell a utiliser : "<< endl;
        cin >> saisie;
        istringstream(saisie)>>intSaisie;
        intSaisie--;
        while (intSaisie<0&&intSaisie>this->joueur->getNombreSlots()){
            cout << "Erreur vous ne pouvez selectionner cette valeur ! " << endl;
            cout << "Veuillez selectionner un spell a utiliser : "<< endl;
            cin >> saisie;
            istringstream(saisie)>>intSaisie;
            intSaisie--;
        }
        degat=this->joueur->utilisationSpell(intSaisie, monstre);
        monstre->sePrendUnCoup(degat);
        cout << "Vous frappez le monstre " << monstre->getNom() <<" de " << degat << " degats" << ", il lui reste " << monstre->getVie() << endl;
}

//methodes
void Jeu::baston(Boss* boss)
{
    string saisie;
    int intSaisie;
    cout << "\n\t\tVous rencontrez le boss " << boss->getNom() << " qui a " << boss->getVie() << "pv." << endl;
    int choix =0;
    int degat;

    int abandon = 0;
    int tourDeJeu=0;
    int tourDuMonstre=0;
    int joueurCommenceEnPremier=0;
    // todo rajouter joueur mort
    while(!boss->estMort() && abandon!=1 && !joueur->estMort()){
        tourDeJeu++;
    	int degat2;
    	if (tourDuMonstre==0){
            cout << "Que voulez vous faire ?\nFuir = 1, Attaquer = 2, utiliser un item = 3, utiliser un sort = 4 ?" << endl;
            cin>>saisie;
            while (saisie!="1"&&saisie!="2"&&saisie!="3"&&saisie!="4"){
                cout << "Erreur vous n'avez pas saisie l'une des options ..." << endl;
                cout << "Que voulez vous faire ?\nFuir = 1, Attaquer = 2, utiliser un item = 3, utiliser un sort = 4 ?" << endl;
                cin>>saisie;
            }
            istringstream(saisie)>>choix;
        } else {
            choix=1;
        }
        if (choix == 1) {
            if (tourDeJeu==1){
                if(joueur->getInitiative()>= boss->getInitiative()*2 || boss->getInitiative() >= joueur->getInitiative()*2){
                	int initiativeSuperieur=0;
                	if (boss->getInitiative() >= joueur->getInitiative()*2){
                		initiativeSuperieur=2;
                	} else{
                		initiativeSuperieur=1;
                	}
                    switch (initiativeSuperieur){
                    case 1:
                        cout << "\t" << joueur->getNom() << " Donne un premier coup " << endl;
                    	degat = this->joueur->donneUnCoup();
                    	cout << "\t" << joueur->getNom() << " Donne un second coup " << endl;
                    	degat2 = this->joueur->donneUnCoup();
                    	boss->sePrendUnCoup(degat);
                    	boss->sePrendUnCoup(degat2);
                    	cout << "Vous frappez le boss " << boss->getNom() <<" de " << degat << " degats et vous recommencez avec " << degat2 << ", il lui reste " << boss->getVie() << endl;
                        joueurCommenceEnPremier=1;
                        tourDuMonstre=0;
                    break;
                    case 2:
                        cout << "\t" << boss->getNom() << " Donne un premier coup " << endl;
                    	degat = boss->donneUnCoup();
                    	cout <<  "\t" << boss->getNom() << " Donne un second coup " << endl;
                    	degat2 = boss->donneUnCoup();
                    	joueur->sePrendUnCoup(degat);
                    	joueur->sePrendUnCoup(degat2);
                    	cout << "Le boss " << boss->getNom() << " vous donne un coup a " << degat << "et il recommence avec " << degat2 << ", il vous reste " << joueur->getVie() << "pv." << endl;
                        tourDuMonstre=1;
                    break;
                    }
                }
               else if(joueur->getInitiative() > boss->getInitiative()) {
                    cout << "\t" <<  joueur->getNom() << " Donne un coup " << endl;
                    degat = this->joueur->donneUnCoup();
                    boss->sePrendUnCoup(degat);
                    cout << "Vous frappez le boss " << boss->getNom() <<" de " << degat << " degats" << ", il lui reste " << boss->getVie() << endl;
                    tourDuMonstre=0;
                }
                else{
                    cout << "\t" << boss->getNom() << " Donne un coup " << endl;
                    degat = boss->donneUnCoup();
                    joueur->sePrendUnCoup(degat);
                    cout << "Le boss " << boss->getNom() << " vous donne un coup a " << degat << ", il vous reste " << joueur->getVie() << "pv." << endl;
                    tourDuMonstre=1;
                }
            } else {
                if (joueurCommenceEnPremier==1){
                        if (tourDeJeu%2){
                            // le boss tape
                            cout << "\t" << boss->getNom() << " Donne un coup " << endl;
                            degat = boss->donneUnCoup();
                            joueur->sePrendUnCoup(degat);
                            cout << "Le boss " << boss->getNom() << " vous donne un coup a " << degat << ", il vous reste " << joueur->getVie() << "pv." << endl;
                            tourDuMonstre=1;
                        } else {
                            // le joueur tape
                            cout << "\t" <<  joueur->getNom() << " Donne un coup " << endl;
                            degat = this->joueur->donneUnCoup();
                            boss->sePrendUnCoup(degat);
                            cout << "Vous frappez le boss " << boss->getNom() <<" de " << degat << " degats" << ", il lui reste " << boss->getVie() << endl;
                            tourDuMonstre=0;
                        }
                } else {
                        if (tourDeJeu%2){
                            // le joueur tape
                            cout << "\t" <<  joueur->getNom() << " Donne un coup " << endl;
                            degat = this->joueur->donneUnCoup();
                            boss->sePrendUnCoup(degat);
                            cout << "Vous frappez le boss " << boss->getNom() <<" de " << degat << " degats" << ", il lui reste " << boss->getVie() << endl;
                            tourDuMonstre=0;
                        } else {
                            // le boss tape
                            cout << "\t" << boss->getNom() << " Donne un coup " << endl;
                            degat = boss->donneUnCoup();
                            joueur->sePrendUnCoup(degat);
                            cout << "Le boss " << boss->getNom() << " vous donne un coup a " << degat << ", il vous reste " << joueur->getVie() << "pv." << endl;
                            tourDuMonstre=1;
                    }
                }
            }
        }
        // utilisation item
        else if (choix == 2) {
            this->joueur->affichageInventaire();
            // gestion de saisie + utilisation de l'item en question - bloqué l'utilisation des deux premieres cases
            cout << "Veuillez selectionner un item a utiliser : "<< endl;
            cin >> saisie;
            while (saisie!="3"&&saisie!="4"&&saisie!="5"&&saisie!="6"){
                    if (saisie=="2"||saisie=="1"){
                        cout << "Vous ne pouvez selectionner une arme ou une armure !"<< endl;
                    } else {
                    cout << "Erreur ! Vous n'avez pas selectionner un emplacement d'inventaire" << endl;
                }
                cout << "Veuillez selectionner un item a utiliser : "<< endl;
                cin >> saisie;
            }
            istringstream(saisie)>>intSaisie;
            intSaisie--;
            if (joueur->getInventaire(intSaisie)!='\0'){
                this->joueur->utilisationItem(intSaisie);
            } else {
                cout << "Vous ne pouvez pas utilisez cet emplacement, il est vide !" << endl;
            }
        }
        // utilisation spell
        else if( choix == 3) {
                if (tourDeJeu==1){
                if(joueur->getInitiative()>= boss->getInitiative()*2 || boss->getInitiative() >= joueur->getInitiative()*2){
                	int initiativeSuperieur=0;
                	if (boss->getInitiative() >= joueur->getInitiative()*2){
                		initiativeSuperieur=2;
                	} else{
                		initiativeSuperieur=1;
                	}
                    switch (initiativeSuperieur){
                    case 1:
                        cout << "\t" << joueur->getNom() << " Donne un premier coup " << endl;
                    	utilisationSpellParticulier(boss, degat);
                    	cout << "\t" << joueur->getNom() << " Donne un second coup " << endl;
                    	utilisationSpellParticulier(boss, degat);
                        joueurCommenceEnPremier=1;
                    break;
                    case 2:
                        cout << "\t" << boss->getNom() << " Donne un premier coup " << endl;
                    	degat = boss->donneUnCoup();
                    	cout <<  "\t" << boss->getNom() << " Donne un second coup " << endl;
                    	degat2 = boss->donneUnCoup();
                    	joueur->sePrendUnCoup(degat);
                    	joueur->sePrendUnCoup(degat2);
                    	cout << "Le boss " << boss->getNom() << " vous donne un coup a " << degat << "et il recommence avec " << degat2 << ", il vous reste " << joueur->getVie() << "pv." << endl;
                    break;
                    }
                }
               else if(joueur->getInitiative() > boss->getInitiative()) {
                    cout << "\t" <<  joueur->getNom() << " Donne un coup " << endl;
                    utilisationSpellParticulier(boss, degat);
                }
                else{
                    cout << "\t" << boss->getNom() << " Donne un coup " << endl;
                    degat = boss->donneUnCoup();
                    joueur->sePrendUnCoup(degat);
                    cout << "Le boss " << boss->getNom() << " vous donne un coup a " << degat << ", il vous reste " << joueur->getVie() << "pv." << endl;
                }
            } else {
                if (joueurCommenceEnPremier==1){
                        if (tourDeJeu%2){
                            // le boss tape
                            cout << "\t" << boss->getNom() << " Donne un coup " << endl;
                            degat = boss->donneUnCoup();
                            joueur->sePrendUnCoup(degat);
                            cout << "Le boss " << boss->getNom() << " vous donne un coup a " << degat << ", il vous reste " << joueur->getVie() << "pv." << endl;
                        } else {
                            // le joueur tape
                            cout << "\t" <<  joueur->getNom() << " Donne un coup " << endl;
                            utilisationSpellParticulier(boss, degat);
                        }
                } else {
                        if (tourDeJeu%2){
                            // le joueur tape
                            cout << "\t" <<  joueur->getNom() << " Donne un coup " << endl;
                            utilisationSpellParticulier(boss, degat);
                        } else {
                            // le boss tape
                            cout << "\t" << boss->getNom() << " Donne un coup " << endl;
                            degat = boss->donneUnCoup();
                            joueur->sePrendUnCoup(degat);
                            cout << "Le boss " << boss->getNom() << " vous donne un coup a " << degat << ", il vous reste " << joueur->getVie() << "pv." << endl;
                    }
                }
            }
        }
    }

    if(boss->estMort()) {
        this->joueur->ajoutExperience(10);
        if(this->joueur->gagneNiveau()) {
                cout << "Vous gagnez 1 niveau " << ". Vous avez ete soigne."  << endl;
        }
        cout << "Vous gagnez 10xp, vous etes niveau " << joueur->getNiveau() << "."  << endl;
    }
    if (joueur->estMort()){
        this->ecranDeDefaiteDeLaMortQuiTue();
    }
}

//methode du menu
Joueur* Jeu::menu()
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

    cout << "\t\t\t      Bienvenue ! \n\t   veuillez appuyez sur un touche pour commencer ! " << endl;
    getchar();
    fflush(stdin);

    //jeu ou tuto
    cout << "Tapez 1 pour commencer a jouer, tapez 2 voir le tutoriel" << endl;
    string saisie="0";
    cin>>saisie;
    while(saisie!="1"&&saisie!="2"){
        cout<<"Erreur :"<<endl;
        cout << "Tapez 1 pour commencer a jouer, tapez 2 voir le tutoriel" << endl;
        cin>>saisie;
    }
    if(saisie == "2") {
        cout<<"Rogue Hey'psi est un rpg textuel, le jeu ce constitue de 5 donjons contenant chacun 5 salles. Le but etant d'arriver au bout des 5 donjons sans mourir.\n\
        Sur votre chemin vous pouvez recuperez des armes, armures ou des consomnable qui vous seront tres utile pour avancer.Au debut vous pouvez choisir une classe,"
        "chaque classe a des sort differents."<<endl;
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
    return joueur;
}

void Jeu::setJoueur( Joueur* joueur)
{
    this->joueur = joueur;
}

// TODO a déplacé
void Jeu::mettreEnCouleur(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}

void Jeu::ecranDeVictoireDeLaMortQuiTue(){
        int i=0;
    while (1){

if (i==0){
    system("CLS");
    cout << "\
                                                  |\n"
"                                                 /^\\ \n"
"                   !_                           /   \\ \n"
"                   |*`~-.,                     /,    \\ \n"
"                   |.-~^`                     /#\"     \\ \n"
"                   |                        _/##_   _  \\_ \n"
"              _   _|  _   _   _            [ ]_[ ]_[ ]_[ ] \n"
"             [ ]_[ ]_[ ]_[ ]_[ ]            |_=_-=_ - =_| \n"
"           !_ |_=_ =-_-_  = =_|           !_ |=_= -    | \n"
"           |*`--,_- _        |            |*`~-.,= []  | \n"
"           |.-'|=     []     |   !_       |_.-\"`_-     | \n"
"           |   |_=- -        |   |*`~-.,  |  |=_-      | \n"
"          /^\\  |=_= -        |   |_,-~`  /^\\ |_ - =[]  | \n"
"      _  /   \\_|_=- _   _   _|  _|  _   /   \\|=_-      | \n"
"     [ ]/,    \\[ ]_[ ]_[ ]_[ ]_[ ]_[ ]_/,    \\[ ]=-    | \n"
"      |/#\"     \\_=-___=__=__- =-_ -=_ /#\"     \\| _ []  | \n"
"     _/##_   _  \\_-_ =  _____       _/##_   _  \\_ -    |\\ \n"
"    [ ]_[ ]_[ ]_[ ]=_0~{_ _ _}~0   [ ]_[ ]_[ ]_[ ]=-   | \\ \n"
"    |_=__-_=-_  =_|-=_ |  ,  |     |_=-___-_ =-__|_    |  \\ \n"
"     | _- =-     |-_   | ((* |      |= _=       | -    |___\\ \n"
"     |= -_=      |=  _ |  `  |      |_-=_       |=_    |/+\\| \n"
"     | =_  -     |_ = _ `-.-`       | =_ = =    |=_-   ||+|| \n"
"     |-_=- _     |=_   =            |=_= -_     |  =   ||+|| \n"
"     |=_- /+\\    | -=               |_=- /+\\    |=_    |^^^| \n"
"     |=_ |+|+|   |= -  -_,--,_      |_= |+|+|   |  -_  |=  | \n"
"     |  -|+|+|   |-_=  / |  | \\     |=_ |+|+|   |-=_   |_-/ \n"
"     |=_=|+|+|   | =_= | |  | |     |_- |+|+|   |_ =   |=/ \n"
"     | _ ^^^^^   |= -  | |  <&>     |=_=^^^^^   |_=-   |/ \n"
"     |=_ =       | =_-_| |  | |     |   =_      | -_   | \n"
"     |_=-_       |=_=  | |  | |     |=_=        |=-    | \n"
"^^^^^^^^^^`^`^^`^`^`^^^\"\"\"\"\"\"\"\"^`^^``^^`^^`^^`^`^``^`^``^``^^ \n"
"\t\t BRAVO VOUS AVEZ GAGNEZ !!! " << endl;

    i++;
    } else {

        system("CLS");
    cout << "\
                                                  |\n"
"                                                 /^\\ \n"
"                  _!                            /   \\ \n"
"             ,.-~`*|                           /,    \\ \n"
"              `^~-.|                          /#\"     \\ \n"
"                   |                        _/##_   _  \\_ \n"
"              _   _|  _   _   _            [ ]_[ ]_[ ]_[ ] \n"
"             [ ]_[ ]_[ ]_[ ]_[ ]            |_=_-=_ - =_| \n"
"           !_ |_=_ =-_-_  = =_|           !_ |=_= -    | \n"
"           |*`--,_- _        |            |*`~-.,= []  | \n"
"           |.-'|=     []     |   !_       |_.-\"`_-     | \n"
"           |   |_=- -        |   |*`~-.,  |  |=_-      | \n"
"          /^\\  |=_= -        |   |_,-~`  /^\\ |_ - =[]  | \n"
"      _  /   \\_|_=- _   _   _|  _|  _   /   \\|=_-      | \n"
"     [ ]/,    \\[ ]_[ ]_[ ]_[ ]_[ ]_[ ]_/,    \\[ ]=-    | \n"
"      |/#\"     \\_=-___=__=__- =-_ -=_ /#\"     \\| _ []  | \n"
"     _/##_   _  \\_-_ =  _____       _/##_   _  \\_ -    |\\ \n"
"    [ ]_[ ]_[ ]_[ ]=_0~{_ _ _}~0   [ ]_[ ]_[ ]_[ ]=-   | \\ \n"
"    |_=__-_=-_  =_|-=_ |  ,  |     |_=-___-_ =-__|_    |  \\ \n"
"     | _- =-     |-_   | ))* |      |= _=       | -    |___\\ \n"
"     |= -_=      |=  _ |  `  |      |_-=_       |=_    |/+\\| \n"
"     | =_  -     |_ = _ `-.-`       | =_ = =    |=_-   ||+|| \n"
"     |-_=- _     |=_   =            |=_= -_     |  =   ||+|| \n"
"     |=_- /+\\    | -=               |_=- /+\\    |=_    |^^^| \n"
"     |=_ |+|+|   |= -  -_,--,_      |_= |+|+|   |  -_  |=  | \n"
"     |  -|+|+|   |-_=  / |  | \\     |=_ |+|+|   |-=_   |_-/ \n"
"     |=_=|+|+|   | =_= | |  | |     |_- |+|+|   |_ =   |=/ \n"
"     | _ ^^^^^   |= -  | |  <o>     |=_=^^^^^   |_=-   |/ \n"
"     |=_ =       | =_-_| |  | |     |   =_      | -_   | \n"
"     |_=-_       |=_=  | |  | |     |=_=        |=-    | \n"
"^^^^^^^^^^`^`^^`^`^`^^^\"\"\"\"\"\"\"\"^`^^``^^`^^`^^`^`^``^`^``^``^^ \n"
"\t\t BRAVO VOUS AVEZ GAGNEZ !!! ctrl + c pour quitter " << endl;

        i--;
        }
        Sleep(250);
    }
}

void Jeu::ecranDeDefaiteDeLaMortQuiTue(){
        int i=0;
    while (1){
if (i==0){
        system("CLS");
cout << "\
                        ____________\n"
"                      .~      ,   . ~.\n"
"                     /                \\\n"
"                    /      /~\\/~\\   ,  \\\n"
"                   |   .   \\    /   '   |\n"
"                   |         \\/         |\n"
"          XX       |  /~~\\        /~~\\  |       XX\n"
"        XX  X      | |  o  \\    /  o  | |      X  XX\n"
"      XX     X     |  \\____/    \\____/  |     X     XX\n"
" XXXXX     XX      \\         /\\        ,/      XX     XXXXX\n"
"X        XX%;;@      \\      /  \\     ,/      @%%;XX        X\n"
"X       X  @%%;;@     |           '  |     @%%;;@  X       X\n"
"X      X     @%%;;@   |. ` ; ; ; ;  ,|   @%%;;@     X      X\n"
" X    X        @%%;;@                  @%%;;@        X    X\n"
"  X   X          @%%;;@              @%%;;@          X   X\n"
"   X  X            @%%;;@          @%%;;@            X  X\n"
"    XX X             @%%;;@      @%%;;@             X XX\n"
"      XXX              @%%;;@  @%%;;@              XXX\n"
"                         @%%;;%%;;@\n"
"                           @%%;;@\n"
"                         @%%;;@..@@\n"
"                          @@@  @@@\n"
"**********************************************************\n" << endl;
    i++;
    } else {

        system("CLS");
    cout << "\
                        ____________\n"
"                      .~      ,   . ~.\n"
"                     /                \\\n"
"                    /      /~\\/~\\   ,  \\\n"
"                   |   .   \\    /   '   |\n"
"                   |         \\/         |\n"
"          XX       |  /~~\\        /~~\\  |       XX\n"
"        XX  X      | |  0  \\    /  0  | |      X  XX\n"
"      XX     X     |  \\____/    \\____/  |     X     XX\n"
" XXXXX     XX      \\         /\\        ,/      XX     XXXXX\n"
"X        XX%;;@      \\      /  \\     ,/      @%%;XX        X\n"
"X       X  @%%;;@     |           '  |     @%%;;@  X       X\n"
"X      X     @%%;;@   |. ` ; ; ; ;  ,|   @%%;;@     X      X\n"
" X    X        @%%;;@                  @%%;;@        X    X\n"
"  X   X          @%%;;@              @%%;;@          X   X\n"
"   X  X            @%%;;@          @%%;;@            X  X\n"
"    XX X             @%%;;@      @%%;;@             X XX\n"
"      XXX              @%%;;@  @%%;;@              XXX\n"
"                         @%%;;%%;;@\n"
"                           @%%;;@\n"
"                         @%%;;@..@@\n"
"                          @@@  @@@\n"
"**********************************************************\n"
"\t\tRip t'a perdu !!! - ctrl + c pour quitter" << endl;

        i--;
        }
        Sleep(250);
    }
}


