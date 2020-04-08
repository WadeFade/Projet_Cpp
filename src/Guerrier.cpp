#include "Guerrier.h"
#include <string>
#include <iostream>

using namespace std;
Guerrier::Guerrier()
{
    //ctor
    this->nom="Guerrier";
    this->attaque=100;
    this->vie=150;
    this->vieMax=150;

    //Creation des différents spells
    // spell buff attaque
    vector<Spell*> tableauDeSpells;
    Spell* spellBuffAttaque=new Spell();
    spellBuffAttaque->setBuffAttaque(10);
    spellBuffAttaque->setNom("Cri de guerre");
    tableauDeSpells.push_back(spellBuffAttaque);

    // spell buff vie
    Spell* spellBuffVie=new Spell();
    spellBuffVie->setBuffVie(10);
    spellBuffAttaque->setNom("Cri de vie");
    tableauDeSpells.push_back(spellBuffVie);

    // spell buff initiative
    Spell* spellBuffInitiative=new Spell();
    spellBuffInitiative->setBuffInitiative(10);
    spellBuffAttaque->setNom("Cri de motivation");
    tableauDeSpells.push_back(spellBuffInitiative);

    // spell buff Resistance
    Spell* spellBuffResistance=new Spell();
    spellBuffResistance->setBuffResistance(10);
    spellBuffAttaque->setNom("Cri de tankiness");
    tableauDeSpells.push_back(spellBuffResistance);

    // spell buff Coup critique
    Spell* spellBuffCoupCritique=new Spell();
    spellBuffCoupCritique->setBuffCoupCritique(10);
    spellBuffAttaque->setNom("Cri de precision");
    tableauDeSpells.push_back(spellBuffCoupCritique);

    // spell buff Echec Critique
    Spell* spellBuffEchecCritique=new Spell();
    spellBuffEchecCritique->setBuffEchecCritique(10);
    spellBuffAttaque->setNom("Cri de concentration");
    tableauDeSpells.push_back(spellBuffEchecCritique);

    // spell Cri de guerre (multi buff)
    Spell* spellCriDeGuerre=new Spell();
    spellCriDeGuerre->setBuffResistance(10);
    spellCriDeGuerre->setBuffVie(10);
    spellCriDeGuerre->setBuffAttaque(10);
    spellCriDeGuerre->setNom("Cri de guerre");
    tableauDeSpells.push_back(spellCriDeGuerre);

    // spell Charge
    Spell* spellCharge=new Spell();
    spellCharge->setDegat(75);
    spellCharge->setElement("Doton");
    spellCharge->setNom("Charge comme un bourrin");
    tableauDeSpells.push_back(spellCharge);

    for (unsigned int i=0;i<tableauDeSpells.size();i++){
        this->spellz.push_back(tableauDeSpells[i]);
    }

    for (unsigned int i=0;i<tableauDeSpells.size();i++){
        delete tableauDeSpells[i];
    }
}

Guerrier::~Guerrier()
{
    //dtor
}

/* *********************************** Methodes ******************************************* */

/* *********************************** Getter ********************************************* */

/* *********************************** Setter ********************************************* */
void Guerrier::affichageEntite(){
    cout << "Guerrier : " << endl;
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
