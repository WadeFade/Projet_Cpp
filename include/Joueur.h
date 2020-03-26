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
        void affichageEntite();
/* *********************************** Getter ********************************************* */
        int getSlots();
        int getMana();
        int getExperience();
        int getNiveau();
/* *********************************** Setter ********************************************* */
        void setNiveau(int niveau);
        void setSlots(int slots);
        void setMana(int mana);
        void setExperience(int experience);
    protected:
        int niveau;
        int slots;
        int mana;
        int experience;
    private:
};

#endif // JOUEUR_H
