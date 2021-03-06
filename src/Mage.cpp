#include "Mage.h"
#include <string>
#include "Spell.h"
#include "Item.h"
#include <iostream>

using namespace std;
Mage::Mage()
{
    //ctor
    this->nom="Mage";
    this->attaque=500;
    this->mana=150;
    this->vie=3000;
    this->vieMax=3000;
    //Creation des différents spells
    // spell buff attaque
    vector<Spell*> tableauDeSpells;
    Spell* spellBuffAttaque=new Spell();
    spellBuffAttaque->setBuffAttaque(10);
    spellBuffAttaque->setNom("Buff Attaque");
    tableauDeSpells.push_back(spellBuffAttaque);

    // spell buff vie
    Spell* spellBuffVie=new Spell();
    spellBuffVie->setBuffVie(10);
    spellBuffVie->setNom("Buff Vie");
    tableauDeSpells.push_back(spellBuffVie);

    // spell buff initiative
    Spell* spellBuffInitiative=new Spell();
    spellBuffInitiative->setBuffInitiative(10);
    spellBuffInitiative->setNom("Buff Initiative");
    tableauDeSpells.push_back(spellBuffInitiative);

    // spell buff Resistance
    Spell* spellBuffResistance=new Spell();
    spellBuffResistance->setBuffResistance(10);
    spellBuffResistance->setNom("Buff Resistance");
    tableauDeSpells.push_back(spellBuffResistance);

    // spell buff Coup critique
    Spell* spellBuffCoupCritique=new Spell();
    spellBuffCoupCritique->setBuffCoupCritique(10);
    spellBuffCoupCritique->setNom("Buff Critique");
    tableauDeSpells.push_back(spellBuffCoupCritique);

    // spell buff Echec Critique
    Spell* spellBuffEchecCritique=new Spell();
    spellBuffEchecCritique->setBuffEchecCritique(10);
    spellBuffEchecCritique->setNom("Buff Echec Critique");
    tableauDeSpells.push_back(spellBuffEchecCritique);

    // spell BOULE DE FEU
    Spell* spellBouleDeKaton=new Spell();
    spellBouleDeKaton->setDegat(100);
    spellBouleDeKaton->setElement("Katon");
    spellBouleDeKaton->setNom("Katon boule de feu supreme");
    tableauDeSpells.push_back(spellBouleDeKaton);

    // spell BOULE DE VENT
    Spell* spellBouleDeFuton=new Spell();
    spellBouleDeFuton->setDegat(100);
    spellBouleDeFuton->setElement("Futon");
    spellBouleDeFuton->setNom("La lame du vent");
    tableauDeSpells.push_back(spellBouleDeFuton);

    // spell BOULE D'ECLAIR
    Spell* spellBouleDeRaiton=new Spell();
    spellBouleDeRaiton->setDegat(100);
    spellBouleDeRaiton->setElement("Raiton");
    spellBouleDeRaiton->setNom("Les mille oiseaux");
    tableauDeSpells.push_back(spellBouleDeRaiton);

    // spell BOULE DE TERRE
    Spell* spellBouleDeDoton=new Spell();
    spellBouleDeDoton->setDegat(100);
    spellBouleDeDoton->setElement("Doton");
    spellBouleDeDoton->setNom("Souffle du dragon de terre");
    tableauDeSpells.push_back(spellBouleDeDoton);

    // spell buff attaque
    Spell* spellBouleDeSuiton=new Spell();
    spellBouleDeSuiton->setDegat(100);
    spellBouleDeSuiton->setElement("Suiton");
    spellBouleDeSuiton->setNom("Dragon aqueux");
    tableauDeSpells.push_back(spellBouleDeSuiton);

    for (unsigned int i=0;i<tableauDeSpells.size();i++){
        this->spellz.push_back(tableauDeSpells[i]);
    }

}

Mage::~Mage()
{
    //dtor
}

/* *********************************** Methodes ******************************************* */
//--

/* *********************************** Setter ********************************************* */

void Mage::affichageEntite(){
    cout << "Mage : " << endl;
    cout << "Nom : " << this->nom << endl;
    cout << "Attaque : " << this->attaque << endl;
    cout << "Niveau : " << this->niveau << endl;
    cout << "Vie : " << this->vie << endl;
    cout << "Mana : " << this->mana << endl;
    cout << "Experience : " << this->experience << endl;
    cout << "Resistance : " << this->resistance << endl;
    cout << "Initiative : " << this->initiative << endl;
    cout << "CoupCritique : " << this->coupCritique << endl;
    cout << "EchecCritique : " << this->echecCritique << endl;
    cout << "Esquive : " << this->esquive << endl;
}

