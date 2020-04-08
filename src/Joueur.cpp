#include "Joueur.h"
#include <string>
#include <vector>
#include <iostream>
#include "Item.h"
#include "Spell.h"
#include "Armes.h"
#include "Armures.h"
#include "Consommables.h"
#include "Cristaux.h"
#include "Entite.h"
#include "Boss.h"
#include "Monstre.h"
#include <math.h>
#include <stdlib.h>
#include <cstdio>


using namespace std;
Joueur::Joueur()
{
    //ctor
    this->niveau=1;
    this->mana=0;
    this->experience=0;
    this->manaMax=100;
    this->vieMax=100;
    this->attaque=50;

    inventaire.resize(6, 0);
    this->initiative=100;
}

Joueur::~Joueur()
{
    //dtor
}

/* *********************************** Getter ********************************************* */
int Joueur::getNombreSlots(){
    return this->inventaire.size();
}

int Joueur::getNombreSpellAppris(){
    return this->spellz.size();
}

int Joueur::getMana(){
    return this->mana;
}

int Joueur::getExperience(){
    return this->experience;
}

int Joueur::getNiveau(){
    return this->niveau;
}

int Joueur::getManaMax(){
    return this->manaMax;
}

Item* Joueur::getInventaire(int positionDansInventaire){
    return this->inventaire.at(positionDansInventaire);
}

Spell* Joueur::getSpellz(int positionDansInventaire){
    return this->spellz.at(positionDansInventaire);
}

int Joueur::getBonusArmes(){
    return this->bonusArmes;
}

int Joueur::getBonusArmure(){
    return this->bonusArmure;
}
/* *********************************** Setter ********************************************* */
void Joueur::setMana(int mana){
    this->mana=mana;
}

void Joueur::setExperience(int experience){
    this->experience=experience;
}

void Joueur::setManaMax(int manaMax){
    this->manaMax=manaMax;
}

int Joueur::setInventaire(Item* unItem, int position){
    //Pour le transtypage......
    Armes* uneArme;
    Armes* armeInventaire;
    Armures* uneArmure;
    Armures* armureInventaire;
    Consommables* unePotionVie;
    Consommables* potionVieInventaire;
    Consommables* unePotionMana;
    Consommables* potionManaInventaire;
    Cristaux* unCristalVie;
    Cristaux* cristalVieInventaire;
    Cristaux* unCristalMana;
    Cristaux* cristalManaInventaire;

    int veutChanger = 0;

    if (this->inventaire[position]!='\0'){
            while (veutChanger != 1 && veutChanger != 2){
                system("cls");
                cout << "Voulez-vous remplacer votre ";

                switch (position+1){
                case 1:
                    uneArme = (Armes*)unItem;

                    //Pour pouvoir appeler la méthode getAttaque liée à la classe Armes.
                    armeInventaire = (Armes*)this->inventaire[position];

                    cout << "arme : " << this->inventaire[position]->getNomItem() << " (degats : " << armeInventaire->getAttaque() << ")";
                    cout << " par : " << uneArme->getNomItem() << " (degats : " << uneArme->getAttaque() << ") ?" << endl;
                    break;

                case 2:
                    uneArmure = (Armures*)unItem;

                    //Pour pouvoir appeler la méthode getResistance liée à la classe Armures.
                    armureInventaire = (Armures*)this->inventaire[position];

                    cout << "armure : " << this->inventaire[position]->getNomItem() << " (resistance : " << armureInventaire->getResistance() << ")";
                    cout << " par : " << uneArmure->getNomItem() << " (resistance : " << uneArmure->getResistance() << ") ?" << endl;
                    break;

                case 3:
                    unePotionVie = (Consommables*)unItem;

                    //Pour pouvoir appeler la méthode getRegen liée à la classe Consommables.
                    potionVieInventaire = (Consommables*)this->inventaire[position];

                    if (unePotionVie->getRegenVie() == potionVieInventaire->getRegenVie()){
                        system("cls");
                        potionVieInventaire->addDurability(1);
                        cout << "Comme vous possedez deja cette Potion, vous avez gagne une utilisation supplementaire." << endl;
                        cout << "Utilisation restante pour \"" << this->inventaire[position]->getNomItem() << "\" : " << potionVieInventaire->getDurability() << endl;
                    }
                    else {
                        cout << this->inventaire[position]->getNomItem() << " regen (" << potionVieInventaire->getRegenVie() << "), utilisation restante (" << potionVieInventaire->getDurability() << ")";
                        cout << " par : \"" << unePotionVie->getNomItem() << "\" regen (" << unePotionVie->getRegenVie() << ") ?" << endl;
                    }
                    break;

                case 4:
                    unePotionMana = (Consommables*)unItem;

                    //Pour pouvoir appeler la méthode getRegen liée à la classe Consommables.
                    potionManaInventaire = (Consommables*)this->inventaire[position];

                    if (unePotionMana->getRegenMana() == potionManaInventaire->getRegenMana()){
                        system("cls");
                        potionManaInventaire->addDurability(1);
                        cout << "Comme vous possedez deja cette Potion, vous avez gagne une utilisation supplementaire." << endl;
                        cout << "Utilisation restante pour \"" << this->inventaire[position]->getNomItem() << "\" : " << potionManaInventaire->getDurability() << endl;
                    }
                    else {
                        cout << this->inventaire[position]->getNomItem() << " regen (" << potionManaInventaire->getRegenMana() << "), utilisation restante (" << potionManaInventaire->getDurability() << ")";
                        cout << " par : \"" << unePotionMana->getNomItem() << "\" regen (" << unePotionMana->getRegenMana() << ") ?" << endl;
                    }
                    break;

                case 5:
                    unCristalVie = (Cristaux*)unItem;

                    //Pour pouvoir appeler la méthode liée à la classe Cristaux.
                    cristalVieInventaire = (Cristaux*)this->inventaire[position];

                    cout << this->inventaire[position]->getNomItem() << " vie supplementaire (" << cristalVieInventaire->getVieSup() << ")";
                    cout << " par : \"" << unItem->getNomItem() << "\" vie supplementaire (" << unCristalVie->getVieSup() << ") ?" << endl;
                    break;

                case 6:
                    unCristalMana = (Cristaux*)unItem;

                    //Pour pouvoir appeler la méthode liée à la classe Cristaux.
                    cristalManaInventaire = (Cristaux*)this->inventaire[position];

                    cout << this->inventaire[position]->getNomItem() << " mana supplementaire (" << cristalManaInventaire->getManaSup() << ")";
                    cout << " par : \"" << unItem->getNomItem() << "\" mana supplementaire (" << unCristalMana->getManaSup() << ") ?" << endl;
                    break;
                }//fin switch

                cout << "1. Oui" << endl;
                cout << "2. Non" << endl;
                cout << "Votre choix (1 ou 2) : " << endl;
                cin >> veutChanger;
            }//fin while

            if (veutChanger == 1){
                this->inventaire[position] = unItem;
            }
            else {

            }
    }//fin if
    else {
        this->inventaire[position] = unItem;
    }
    return veutChanger;
}

void Joueur::setSpellz(Spell* unSpell){
    this->spellz.push_back(unSpell);
}

void Joueur::setBonusArmes(int bonusArmes){
    this->bonusArmes=bonusArmes;
}

void Joueur::setBonusArmure(int bonusArmure){
    this->bonusArmure=bonusArmure;
}
/* *********************************** Methodes ******************************************* */
void Joueur::affichageEntite(){
    cout << "Joueur : " << endl;
    cout << "Nom : " << this->nom << endl;
    cout << "Attaque : " << this->attaque << endl;
    cout << "Niveau : " << this->niveau << endl;
    cout << "Mana : " << this->mana << endl;
    cout << "Experience : " << this->experience << endl;
    cout << "Resistance : " << this->resistance << endl;
    cout << "Initiative : " << this->initiative << endl;
    cout << "CoupCritique : " << this->coupCritique << endl;
    cout << "EchecCritique : " << this->echecCritique << endl;
    cout << "Esquive : " << this->esquive << endl;
}

void Joueur::affichageInventaire(){
    cout << "Inventaire : " << endl;
    for (unsigned int i=0; i<(this->inventaire.size()); i++){
        cout << i+1 << " : ";
        if (this->inventaire[i]=='\0'){
            cout << "Aucun element" << endl;
        }
        else {
            cout << this->getInventaire(i)->getNomItem() << endl;
        }
    }
}

void Joueur::affichageSpellz(){
    cout << "Spellz dispo : " << endl;
    for (unsigned int i=0; i<(this->spellz.size()); i++){
        cout << i+1 << " : ";
        cout << this->spellz[i]->getNom() << endl;
    }
}

void Joueur::manaRegen(int manaRegen){
    //on bloque la regen mana au mana max
    if (this->mana+manaRegen>=this->manaMax){
        this->mana=this->manaMax;
    }else {
        this->mana+=manaRegen;
    }
}
void Joueur::manaSupp(int manaSupp){
    //on ajoute de la mana max
    this->manaMax+=manaSupp;
    this->mana=this->manaMax;
}
void Joueur::vieSupp(int vieSupp){
    //on ajoute de la mana max
    this->vieMax+=vieSupp;
    this->vie=this->getVieMax();
}

void Joueur::utiliserUnConsommable(int emplacementDansInventaire){
    this->utilisationItem(emplacementDansInventaire);
    // si le consommable n'a plus de durabilité, le supprimé a la fin
    if (this->inventaire[emplacementDansInventaire]->getDurability()<=1){
        this->inventaire.erase(inventaire.begin()+emplacementDansInventaire);
    }
}

void Joueur::utilisationItem(int emplacementDansInventaire){

    Consommables* consommables;
    Cristaux* cristaux;
    if (this->inventaire[emplacementDansInventaire]!='\0'){
    switch (this->inventaire[emplacementDansInventaire]->type()){
        case 1:
            /** ****TODO*** **/
            // fonction dans le cas ou c'est une arme
            cout<<"item basique il ne ce passe rien de special (armes)"<<endl;
            // rien de spécial, on ne veux pas pouvoir utilisé une arme via le menu pour utilisé les consommables
            break;
        case 2:
            /** ****TODO*** **/
            // fonction dans le cas ou c'est une armure
            cout<<"item basique il ne ce passe rien de special (armure)"<<endl;
            // rien de spécial, on ne veux pas pouvoir utilisé une armures via le menu pour utilisé les consommables
            break;
        case 3 ... 4:
            // fonction dans le cas ou c'est un consommable
            consommables = (Consommables*)this->getInventaire(emplacementDansInventaire);
            if (consommables->getRegenVie()>0){
                this->healing(consommables->getRegenVie());
            }
            if (consommables->getRegenMana()>0){
                this->manaRegen(consommables->getRegenMana());
            }
            break;
        case 5 ... 6:
            cristaux = (Cristaux*)this->getInventaire(emplacementDansInventaire);
            // fonction dans le cas ou c'est un cristal
            if (cristaux->getVieSup()>0){
                this->vieSupp(cristaux->getVieSup());
            }
            if (cristaux->getManaSup()>0){
                this->manaSupp(cristaux->getManaSup());
            }
            break;
        default:
            // fonction dans le cas ou ce n'est pas l'un des 4 (si c'est un item par exemple, ce qui ne devrais jamais arrivé)
            break;
        }
        } else {
            cout << "il n'y a rien dans cet emplacement d'inventaire" << endl;
        }
}

//retourne une valeur de degat infligé
// passer monstrer en param pour récup element du monstre et faire les critz
int Joueur::utilisationSpell(int emplacementSpell, Entite* entiterQuiPrendUnCoup){
    Boss* unBoss;
    Monstre* unMonstre;
    int monstreOuBoss=0;
    switch (entiterQuiPrendUnCoup->type()){
    case 0:
        break;
    case 1:
        monstreOuBoss=1;
        unBoss=(Boss*)entiterQuiPrendUnCoup;
        break;
    case 2:
        monstreOuBoss=2;
        unMonstre=(Monstre*)entiterQuiPrendUnCoup;
        break;
    }
    Spell* monSpell=this->spellz[emplacementSpell];
    if(monSpell->getBuffAttaque()>0){
        this->attaque+=monSpell->getBuffAttaque();
    }
    if (monSpell->getBuffCoupCritique()>0){
        this->coupCritique+=monSpell->getBuffCoupCritique();
    }
    if (monSpell->getBuffEchecCritique()>0){
        this->echecCritique-=monSpell->getBuffEchecCritique();
    }
    if (monSpell->getBuffInitiative()>0){
        this->initiative+=monSpell->getBuffInitiative();
    }
    if (monSpell->getBuffResistance()>0){
        this->resistance+=monSpell->getBuffResistance();
    }
    if (monSpell->getBuffVie()>0){
        this->vie+=monSpell->getBuffVie();
    }
    if (monSpell->getManaCost()){
        this->mana-=monSpell->getManaCost();
    }
    if (monSpell->getDegat()>0){
    // trouvé le type de l'entité, savoir si c'est un boss ou un mob
    // trouvé l'élément du mob en question
    int degatInfliger=monSpell->getDegat();
    if (monstreOuBoss==2){
        if (monSpell->getElement()=="Katon"){
                // si dégat element opposé sur lesquelles on tape, alors +50% ou -50% dmg
                if (unMonstre->getElement()=="Futon"){
                    degatInfliger=(int)((degatInfliger*1.5)+0.5);
                } else if (unMonstre->getElement()=="Suiton"){
                    degatInfliger=(int)((degatInfliger*0.5)+0.5);
                }
            } else if (monSpell->getElement()=="Suiton"){
                // si dégat element opposé sur lesquelles on tape, alors +50% ou -50% dmg
                if (unMonstre->getElement()=="Katon"){
                    degatInfliger=(int)((degatInfliger*1.5)+0.5);
                } else if (unMonstre->getElement()=="Doton"){
                    degatInfliger=(int)((degatInfliger*0.5)+0.5);
                }
            } else if (monSpell->getElement()=="Futon"){
                // si dégat element opposé sur lesquelles on tape, alors +50% ou -50% dmg
                if (unMonstre->getElement()=="Raiton"){
                    degatInfliger=(int)((degatInfliger*1.5)+0.5);
                } else if (unMonstre->getElement()=="Katon"){
                    degatInfliger=(int)((degatInfliger*0.5)+0.5);
                }
            } else if (monSpell->getElement()=="Doton"){
                // si dégat element opposé sur lesquelles on tape, alors +50% ou -50% dmg
                if (unMonstre->getElement()=="Suiton"){
                    degatInfliger=(int)((degatInfliger*1.5)+0.5);
                } else if (unMonstre->getElement()=="Raiton"){
                    degatInfliger=(int)((degatInfliger*0.5)+0.5);
                }
            } else if (monSpell->getElement()=="Raiton"){
                // si dégat element opposé sur lesquelles on tape, alors +50% ou -50% dmg
                if (unMonstre->getElement()=="Doton"){
                    degatInfliger=(int)((degatInfliger*1.5)+0.5);
                } else if (unMonstre->getElement()=="Futon"){
                    degatInfliger=(int)((degatInfliger*0.5)+0.5);
                }
            }
            cout << "mobs" << endl;
            return degatInfliger;
            } else if (monstreOuBoss==1){
            // retirer 15% de degats vu que c'est un boss, sans parlé de resistance
            // + moyen d'arrondir trouvé
            cout << "boss" << endl;
            return (int)((degatInfliger*0.85)+0.5);
        }
    }
    return 0;
}

void Joueur::ajoutExperience(int experience){
    this->experience+=experience;
}

void Joueur::ajoutNiveau(int niveau){
    this->niveau+=niveau;
}

void Joueur::ajoutVieMax(int vieaAjouter)
{
    this->vieMax+=vieaAjouter;
}

void Joueur::ajoutManaMax(int manaaAjouter)
{
    this->manaMax+=manaaAjouter;
}

void Joueur::ajoutresistance(int resistanceaAjouter)
{
    this->resistance=+resistanceaAjouter;
}

void Joueur::ajoutAttaque(int attaqueaAjouter)
{
    this->attaque+=attaqueaAjouter;
}

void Joueur::ajoutEsquive(int esquiveaAjouter)
{
    this->esquive+=esquiveaAjouter;
}

bool Joueur::gagneNiveau()
{
    if(this->getExperience() >=100){
            this->setVie(vieMax);
            this->setExperience(0);
            this->ajoutNiveau(1);
            this->ajoutAttaque(10);
            this->ajoutEsquive(10);
            this->ajoutManaMax(50);
            this->ajoutVieMax(50);
            this->ajoutresistance(1);
            return true;
    } else {
        return false;
    }
}

void Joueur::changementBonusArmureEtArmes(){
    int valeurBonusArmure;
    Armures* armures;
    armures = (Armures*)this->inventaire.at(1);
    valeurBonusArmure=armures->getResistance();

    int valeurBonusArmes;
    Armes* armes;
    armes = (Armes*)this->inventaire.at(2);
    valeurBonusArmes=armes->getAttaque();

    this->applicationBonusArmureEtArmes(valeurBonusArmure, valeurBonusArmes);
}

void Joueur::applicationBonusArmureEtArmes(int valueBonusArmure,int valueBonusArmes){
    this->attaque-=this->bonusArmes;
    this->resistance-=this->bonusArmure;

    this->bonusArmes=valueBonusArmes;
    this->bonusArmure=valueBonusArmure;

    this->attaque+=this->bonusArmes;
    this->resistance+=this->bonusArmure;
}

void Joueur::sePrendUnCoup(int attaqueDansLaTronche){
    int bonusDef;
    Armures* armures=(Armures*)this->inventaire[1];
    if (this->inventaire[1]!='\0'){
        bonusDef=armures->getResistance();
    } else {
        bonusDef=0;
    }

    if ((rand()%100)>this->esquive){
        this->vie-=attaqueDansLaTronche-this->resistance-bonusDef;
    } else{
        cout << "Zoup " << this->nom << " esquive tel un ninja ! aucun degats subis" << endl;
    }
}

int Joueur::donneUnCoup(){
    // dans le cas ou ça ne crit pas
    int bonusAtk;
    int damage=this->attaque;
    damage+=bonusAtk;
    Armes* armes=(Armes*)this->inventaire[0];
    if (this->inventaire[0]!='\0'){
        bonusAtk=armes->getAttaque();
    } else {
        bonusAtk=0;
    }

    if ((rand()%100)>this->coupCritique){
        if ((rand()%100)>this->echecCritique){
                return damage;
        }
        // dans le cas ou l'attaque échec critique
        else{
            cout << "AHAHAHA " << this->nom << " fait un echec critique (mdr) !" << endl;
            return 0;
        }
        // dans le cas ou l'attaque crit
    } else{
        cout << "ET PAFFFFF " << this->nom << " balance un sale critique !" << endl;
        return (damage*1.5);
    }
}
