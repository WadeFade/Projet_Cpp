#ifndef SPELL_H
#define SPELL_H
#include <string>

using namespace std;
class Spell
{
    public:
        Spell();
        virtual ~Spell();
/* *********************************** Methodes ******************************************* */
        void reduireTempsDeChargement();
        void affichageSpell();

/* *********************************** Getter ********************************************* */
        int getManaCost();
        int getTempsDeRechargement();
        string getElement();
        int getCanalisationSpell();
        int getBuffAttaque();
        int getBuffVie();
        int getBuffInitiative();
        int getBuffResistance();
        int getBuffCoupCritique();
        int getBuffEchecCritique();
        int getDegat();
        //new
        string getNom();
/* *********************************** Setter ********************************************* */
        void setManaCost(int manaCost);
        void setTempsDeRechargement(int tempsDeRechargement);
        void setElement(string element);
        void setCanalisationSpell(int canalisationSpell);
        void setBuffAttaque(int buffAttaque);
        void setBuffVie(int buffVie);
        void setBuffInitiative(int buffInitiative);
        void setBuffResistance(int buffResistance);
        void setBuffCoupCritique(int buffCoupCritique);
        void setBuffEchecCritique(int buffEchecCritique);
        void setDegat(int degatDuSpell);
        //new
        void setNom(string nomSpell);
    protected:
        int manaCost;
        int tempsDeRechargement;
        string element;
        int canalisationSpell;
        int buffAttaque;
        int buffVie;
        int buffInitiative;
        int buffResistance;
        int buffCoupCritique;
        int buffEchecCritique;
        int degatDuSpell;
        //new
        string nomSpell;
    private:
};

#endif // SPELL_H
