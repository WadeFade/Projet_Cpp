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
        //new
        void affichageSpell();
/* *********************************** Getter ********************************************* */
        int getManaCost();
        int getTempsDeRechargement();
        string getElement();
        //new
        int getCanalisationSpell();
        int getBuffAttaque();
        int getBuffVie();
        int getBuffInitiative();
        int getBuffResistance();
        int getBuffCoupCritique();
        int getBuffEchecCritique();
        int getDegat();
/* *********************************** Setter ********************************************* */
        void setManaCost(int manaCost);
        void setTempsDeRechargement(int tempsDeRechargement);
        void setElement(string element);
        //new
        void setCanalisationSpell(int canalisationSpell);
        void setBuffAttaque(int buffAttaque);
        void setBuffVie(int buffVie);
        void setBuffInitiative(int buffInitiative);
        void setBuffResistance(int buffResistance);
        void setBuffCoupCritique(int buffCoupCritique);
        void setBuffEchecCritique(int buffEchecCritique);
        void setDegat(int degatDuSpell);

    protected:
        int manaCost;
        int tempsDeRechargement;
        string element;
        //new
        int canalisationSpell;
        int buffAttaque;
        int buffVie;
        int buffInitiative;
        int buffResistance;
        int buffCoupCritique;
        int buffEchecCritique;
        int degatDuSpell;
    private:
};

#endif // SPELL_H
