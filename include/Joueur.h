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
        virtual void affichageEntite();
        void affichageInventaire();
        bool gagneNiveau();
/* *********************************** Getter ********************************************* */
        int getNombreSlots();
        int getNombreSpellAppris();
        int getNiveau();
        int getMana();
        int getExperience();
        Item* getInventaire(int positionDansInventaire);
        Spell* getSpellz(int positionDansSpellz);
/* *********************************** Setter ********************************************* */
        void ajoutNiveau(int niveau);
        void setMana(int mana);
        void setExperience(int experience);
        void ajoutExperience(int experience);
        void setInventaire(Item* inventaire);
        void setSpellz(Spell* spell);

    protected:
        int niveau;
        vector<Item*> inventaire;
        vector<Spell*> spellz;
        int mana;
        int experience;
    private:
};

#endif // JOUEUR_H
