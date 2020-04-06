#ifndef MAGE_H
#define MAGE_H
#include <string>
#include "Joueur.h"

using namespace std;
class Mage : public Joueur
{
    public:
        Mage();
        virtual ~Mage();
/* *********************************** Methodes ******************************************* */
/*
        void spellBuffAttaque();
        void spellBuffVie();
        void spellBuffInitiative();
        void spellBuffResistance();
        void spellBuffCoupCritique();
        void spellBuffEchecCritique();
*/
        virtual void affichageEntite();
/* *********************************** Getter ********************************************* */
        //int getCanalisationSpell();
/* *********************************** Setter ********************************************* */
        //void setCanalisationSpell(int canalisationSpell);
    protected:

    private:
        //int canalisationSpell;
};

#endif // MAGE_H
