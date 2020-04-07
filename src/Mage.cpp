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
    this->attaque=125;
    this->mana=150;
    this->vie=80;
    this->vieMax=80;
    //Creation des différents spells
    // spell buff attaque
    vector<Spell*> tableauDeSpells;
    Spell* spellBuffAttaque=new Spell();
    spellBuffAttaque->setBuffAttaque(10);
    tableauDeSpells.push_back(spellBuffAttaque);

    // spell buff vie
    Spell* spellBuffVie=new Spell();
    spellBuffVie->setBuffVie(10);
    tableauDeSpells.push_back(spellBuffVie);

    // spell buff initiative
    Spell* spellBuffInitiative=new Spell();
    spellBuffInitiative->setBuffInitiative(10);
    tableauDeSpells.push_back(spellBuffInitiative);

    // spell buff Resistance
    Spell* spellBuffResistance=new Spell();
    spellBuffResistance->setBuffResistance(10);
    tableauDeSpells.push_back(spellBuffResistance);

    // spell buff Coup critique
    Spell* spellBuffCoupCritique=new Spell();
    spellBuffCoupCritique->setBuffCoupCritique(10);
    tableauDeSpells.push_back(spellBuffCoupCritique);

    // spell buff Echec Critique
    Spell* spellBuffEchecCritique=new Spell();
    spellBuffEchecCritique->setBuffEchecCritique(10);
    tableauDeSpells.push_back(spellBuffEchecCritique);

    // spell BOULE DE FEU
    Spell* spellBouleDeKaton=new Spell();
    spellBouleDeKaton->setDegat(100);
    spellBouleDeKaton->setElement("Katon");
    tableauDeSpells.push_back(spellBouleDeKaton);

    // spell BOULE DE VENT
    Spell* spellBouleDeFuton=new Spell();
    spellBouleDeFuton->setDegat(100);
    spellBouleDeFuton->setElement("Futon");
    tableauDeSpells.push_back(spellBouleDeFuton);

    // spell BOULE D'ECLAIR
    Spell* spellBouleDeRaiton=new Spell();
    spellBouleDeRaiton->setDegat(100);
    spellBouleDeRaiton->setElement("Raiton");
    tableauDeSpells.push_back(spellBouleDeRaiton);

    // spell BOULE DE TERRE
    Spell* spellBouleDeDoton=new Spell();
    spellBouleDeDoton->setDegat(100);
    spellBouleDeDoton->setElement("Doton");
    tableauDeSpells.push_back(spellBouleDeDoton);

    // spell buff attaque
    Spell* spellBouleDeSuiton=new Spell();
    spellBouleDeSuiton->setDegat(100);
    spellBouleDeSuiton->setElement("Suiton");
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

