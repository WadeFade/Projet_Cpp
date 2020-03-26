#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include "Entite.h"

using namespace std;
class Joueur : public Entite
{
    public:
        Joueur();
        virtual ~Joueur();
/* *********************************** Methodes ******************************************* */

/* *********************************** Getter ********************************************* */
        int getSlots();
        int getMana();
        int getExperience();
/* *********************************** Setter ********************************************* */
        void setSlots(int slots);
        void setMana(int mana);
        void setExperience(int experience);
    protected:
        int slots;
        int mana;
        int experience;
    private:
};

#endif // JOUEUR_H
