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
/* *********************************** Getter ********************************************* */
        int getManaCost();
        int getTempsDeRechargement();
        double getMultiplicateurDeDegats();
        string getElement();
/* *********************************** Setter ********************************************* */
        void setManaCost(int manaCost);
        void setTempsDeRechargement(int tempsDeRechargement);
        void setMultiplicateurDeDegats(double multiplicateurDeDegats);
        void setElement(string element);
    protected:
        int manaCost;
        int tempsDeRechargement;
        int multiplicateurDeDegats;
        string element;
    private:
};

#endif // SPELL_H
