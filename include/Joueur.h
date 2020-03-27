#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include <vector>
#include "Entite.h"
#include "Item.h"
#include "Spell.h"

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
        Item* getInventaire(int positionDansInventaire);
        Spell* getSpellz(int positionDansSpellz);
        int getSpellAppris();
/* *********************************** Setter ********************************************* */
        void setNiveau(int niveau);
        void setSlots(int slots);
        void setMana(int mana);
        void setExperience(int experience);
        void setInventaire(Item* inventaire);
        void setSpellz(Spell* spell);
        void setSpellAppris(int spellAppris);
    protected:
        int niveau;
        int slots;
        int spellAppris;
        vector<Item*> inventaire;
        vector<Spell*> spellz;
        int mana;
        int experience;
    private:
};

#endif // JOUEUR_H
