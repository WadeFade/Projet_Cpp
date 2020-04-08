#include "Barde.h"
#include <string>
#include <iostream>

using namespace std;
Barde::Barde()
{
    //ctor
    this->nom="Barde";
    this->multiplicateurEXP=1.2;
    this->vie=110;
    this->vieMax=110;
    this->mana=50;

    //Creation des différents spells
    // spell buff attaque
    vector<Spell*> tableauDeSpells;
    Spell* spellBuffAttaque=new Spell();
    spellBuffAttaque->setBuffAttaque(10);
    spellBuffAttaque->setNom("Chant de guerre");
    tableauDeSpells.push_back(spellBuffAttaque);

    // spell buff vie
    Spell* spellBuffVie=new Spell();
    spellBuffVie->setBuffVie(10);
    spellBuffAttaque->setNom("Chant de vie");
    tableauDeSpells.push_back(spellBuffVie);

    // spell buff initiative
    Spell* spellBuffInitiative=new Spell();
    spellBuffInitiative->setBuffInitiative(10);
    spellBuffAttaque->setNom("Chant de motivation");
    tableauDeSpells.push_back(spellBuffInitiative);

    // spell buff Resistance
    Spell* spellBuffResistance=new Spell();
    spellBuffResistance->setBuffResistance(10);
    spellBuffAttaque->setNom("Chant de tankiness");
    tableauDeSpells.push_back(spellBuffResistance);

    // spell buff Coup critique
    Spell* spellBuffCoupCritique=new Spell();
    spellBuffCoupCritique->setBuffCoupCritique(10);
    spellBuffAttaque->setNom("Chant de precision");
    tableauDeSpells.push_back(spellBuffCoupCritique);

    // spell buff Echec Critique
    Spell* spellBuffEchecCritique=new Spell();
    spellBuffEchecCritique->setBuffEchecCritique(10);
    spellBuffAttaque->setNom("Chant de concentration");
    tableauDeSpells.push_back(spellBuffEchecCritique);

    // spell air de musique
    Spell* spellAirDeMusique=new Spell();
    spellAirDeMusique->setBuffAttaque(25);
    spellAirDeMusique->setBuffCoupCritique(100);
    spellAirDeMusique->setBuffVie(25);
    spellAirDeMusique->setNom("Air de musique");
    tableauDeSpells.push_back(spellAirDeMusique);

    // spell crescendo
    Spell* spellCrescendo=new Spell();
    spellCrescendo->setDegat(50);
    spellCrescendo->setElement("Suiton");
    spellCrescendo->setNom("Crescendo");
    tableauDeSpells.push_back(spellCrescendo);

    for (unsigned int i=0;i<tableauDeSpells.size();i++){
        this->spellz.push_back(tableauDeSpells[i]);
    }

    for (unsigned int i=0;i<tableauDeSpells.size();i++){
        delete tableauDeSpells[i];
    }
}

Barde::~Barde()
{
    //dtor
}
/* *********************************** Methodes ******************************************* */

/* *********************************** Getter ********************************************* */
double Barde::getMultiplicateurEXP(){
    return this->multiplicateurEXP;
}
/* *********************************** Setter ********************************************* */
void Barde::setMultiplicateurEXP(double multiplicateurEXP){
    this->multiplicateurEXP=multiplicateurEXP;
}

void Barde::affichageEntite(){
    cout << "Barde : " << endl;
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
    cout << "Multiplicateur EXP : " << this->multiplicateurEXP << endl;
}
