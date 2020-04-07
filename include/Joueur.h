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
        //new
        void utiliserUnConsommable(int emplacementDansInventaire);
        void manaRegen(int regenMana);
        void manaSupp(int manaSupp);
        void vieSupp(int manaSupp);
        void utilisationItem(int emplacementDansInventaire);
        //retourne une valeur de degat infligé
        int utilisationSpell(int emplacementSpell);
        void affichageSpellz();
/* *********************************** Getter ********************************************* */
        int getNombreSlots();
        int getNombreSpellAppris();
        int getNiveau();
        int getMana();
        int getExperience();
        Item* getInventaire(int positionDansInventaire);
        Spell* getSpellz(int positionDansSpellz);
        //new
        int getManaMax();
/* *********************************** Setter ********************************************* */
        void setNiveau(int niveau);
        void setMana(int mana);
        void setExperience(int experience);
        void setInventaire(Item* inventaire);
        void setSpellz(Spell* spell);
        //new
        void setManaMax(int manaMax);
    protected:
        int niveau;
        vector<Item*> inventaire;
        vector<Spell*> spellz;
        int mana;
        int experience;
        int manaMax;

    private:
};

#endif // JOUEUR_H
