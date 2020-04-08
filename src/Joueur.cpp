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

    vector<Item*> inventaire;
    inventaire.resize(6, 0);
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

/* *********************************** Setter ********************************************* */
void Joueur::setMana(int mana){
    this->mana=mana;
}

void Joueur::setExperience(int experience){
    this->experience=experience;
}

void Joueur::ajoutExperience(int experience){
    this->experience+=experience;
}

void Joueur::ajoutNiveau(int niveau){
    this->niveau+=niveau;
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

                switch (position){
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
        this->getInventaire(i)->affichageItem();
    }
}

void Joueur::affichageSpellz(){
    cout << "Spellz dispo : " << endl;
    for (unsigned int i=0; i<(this->spellz.size()); i++){
        this->getSpellz(i)->affichageSpell();
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
    Armes* armes;
    Armures* armures;
    Consommables* consommables;
    Cristaux* cristaux;
    switch (this->inventaire[emplacementDansInventaire]->type()){
        case 1:
            // fonction dans le cas ou c'est une arme
            armes = (Armes*)this->getInventaire(emplacementDansInventaire);
            cout<<"item basique il ne ce passe rien de special (armes)"<<endl;
            // rien de spécial, on ne veux pas pouvoir utilisé une arme via le menu pour utilisé les consommables
            break;
        case 2:
            // fonction dans le cas ou c'est une armure
            armures = (Armures*)this->getInventaire(emplacementDansInventaire);
            cout<<"item basique il ne ce passe rien de special (armure)"<<endl;
            // rien de spécial, on ne veux pas pouvoir utilisé une armures via le menu pour utilisé les consommables
            break;
        case 3:
            // fonction dans le cas ou c'est un consommable
            consommables = (Consommables*)this->getInventaire(emplacementDansInventaire);
            if (consommables->getRegenVie()>0){
                this->healing(consommables->getRegenVie());
            }
            if (consommables->getRegenMana()>0){
                this->manaRegen(consommables->getRegenMana());
            }

            break;
        case 4:
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
}

//retourne une valeur de degat infligé
// passer monstrer en param pour récup element du monstre et faire les critz
int Joueur::utilisationSpell(int emplacementSpell){
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
        //todo trouver un moyen de récupéré l'élément du mob en face pour appliqué un multiplicateur au dégat en cours
        int degatInfliger=monSpell->getDegat();
        if (monSpell->getElement()=="Katon"){

        } else if (monSpell->getElement()=="Suiton"){

        } else if (monSpell->getElement()=="Futon"){

        } else if (monSpell->getElement()=="Doton"){

        } else if (monSpell->getElement()=="Raiton"){

        }
    }
    return 0;
}

bool Joueur::gagneNiveau()
{
    if(this->getExperience()>=100){
            this->setVie(vieMax);
            this->setExperience(0);
            this->ajoutNiveau(1);
    }
    return true;
}

