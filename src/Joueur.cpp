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

using namespace std;
Joueur::Joueur()
{
    //ctor
    this->niveau=1;
    this->mana=0;
    this->experience=0;
    this->inventaire;
    this->spellz;
    //new
    this->manaMax=100;
    this->vieMax=100;
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

Item* Joueur::getInventaire(int positionDansInventaire){
    return this->inventaire.at(positionDansInventaire);
}

Spell* Joueur::getSpellz(int positionDansInventaire){
    return this->spellz.at(positionDansInventaire);
}
//new
int Joueur::getManaMax(){
    return this->manaMax;
}

/* *********************************** Setter ********************************************* */
void Joueur::setMana(int mana){
    this->mana=mana;
}
void Joueur::setExperience(int experience){
    this->experience=experience;
}
void Joueur::setNiveau(int niveau){
    this->niveau=niveau;
}
void Joueur::setInventaire(Item* unItem){
    this->inventaire.push_back(unItem);
}
void Joueur::setSpellz(Spell* unSpell){
    this->spellz.push_back(unSpell);
}
//new
void Joueur::setManaMax(int manaMax){
    this->manaMax=manaMax;
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
    for (int i=0; i<(this->inventaire.size()); i++){
        this->getInventaire(i)->affichageItem();
    }
}
// fonctionnel
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
// new
void Joueur::utiliserUnConsommable(int emplacementDansInventaire){
    //this->inventaire[emplacementDansInventaire]->utilisationItem();
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
