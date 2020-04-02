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
<<<<<<< HEAD
        void affichageInventaire();
=======
>>>>>>> 66bdc9335605420ca4ae9816da616aeec3817aaf
/* *********************************** Getter ********************************************* */
        int getNombreSlots();
        int getNombreSpellAppris();
        int getNiveau();
        int getMana();
        int getExperience();
<<<<<<< HEAD
        Item* getInventaire(int positionDansInventaire);
        Spell* getSpellz(int positionDansSpellz);
/* *********************************** Setter ********************************************* */
        void setNiveau(int niveau);
=======
        int getNiveau();
        Item* getInventaire(int positionDansInventaire);
        Spell* getSpellz(int positionDansSpellz);
        int getSpellAppris();
/* *********************************** Setter ********************************************* */
        void setNiveau(int niveau);
        void setSlots(int slots);
>>>>>>> 66bdc9335605420ca4ae9816da616aeec3817aaf
        void setMana(int mana);
        void setExperience(int experience);
        void setInventaire(Item* inventaire);
        void setSpellz(Spell* spell);
<<<<<<< HEAD
    protected:
        int niveau;
=======
        void setSpellAppris(int spellAppris);
    protected:
        int niveau;
        int slots;
        int spellAppris;
        vector<Item*> inventaire;
        vector<Spell*> spellz;
>>>>>>> 66bdc9335605420ca4ae9816da616aeec3817aaf
        int mana;
        int experience;
        vector<Item*> inventaire;
        vector<Spell*> spellz;
    private:
};

#endif // JOUEUR_H
