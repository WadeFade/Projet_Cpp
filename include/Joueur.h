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
        void utiliserUnConsommable(int emplacementDansInventaire);
        void manaRegen(int regenMana);
        void manaSupp(int manaSupp);
        void vieSupp(int manaSupp);
        void utilisationItem(int emplacementDansInventaire);
        //utilisationSpell -> retourne une valeur de degat infligé
        int utilisationSpell(int emplacementSpell,Entite* entiteQuiSePrendUnCoup);
        void affichageSpellz();
        bool gagneNiveau();
        // new
        void changementBonusArmureEtArmes();
        void applicationBonusArmureEtArmes(int valueBonusArmure,int valueBonusArmes);
/* *********************************** Getter ********************************************* */
        int getNombreSlots();
        int getNombreSpellAppris();
        int getNiveau();
        int getMana();
        int getExperience();
        int getManaMax();
        Item* getInventaire(int positionDansInventaire);
        Spell* getSpellz(int positionDansSpellz);
        // new
        int getBonusArmure();
        int getBonusArmes();
/* *********************************** Setter ********************************************* */
        void ajoutNiveau(int niveau);
        void setMana(int mana);
        void setExperience(int experience);
        void ajoutExperience(int experience);
        void setManaMax(int manaMax);
        int setInventaire(Item* unItem, int position);
        void setSpellz(Spell* spell);
        // new
        void setBonusArmure(int bonusArmure);
        void setBonusArmes(int bonusArmes);
    protected:
        int niveau;
        vector<Item*> inventaire;
        vector<Spell*> spellz;
        int mana;
        int experience;
        int manaMax;
        int bonusArmure;
        int bonusArmes;
    private:
};

#endif // JOUEUR_H
