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
        //utilisationSpell -> retourne une valeur de degat inflig�
        int utilisationSpell(int emplacementSpell);
        void affichageSpellz();
        bool gagneNiveau();
        void ajoutVieMax(int vieaAjouter);
        void ajoutManaMax(int manaaAjouter);
        void ajoutresistance(int resistanceaAjouter);
        void ajoutAttaque(int attaqueaAjouter);
        void ajoutEsquive(int esquiveaAjouter);

/* *********************************** Getter ********************************************* */
        int getNombreSlots();
        int getNombreSpellAppris();
        int getNiveau();
        int getMana();
        int getExperience();
        int getManaMax();
        Item* getInventaire(int positionDansInventaire);
        Spell* getSpellz(int positionDansSpellz);

/* *********************************** Setter ********************************************* */
        void ajoutNiveau(int niveau);
        void setMana(int mana);
        void setExperience(int experience);
        void ajoutExperience(int experience);
        void setManaMax(int manaMax);
        void setInventaire(Item* inventaire);
        void setSpellz(Spell* spell);
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
