#ifndef CONSOMMABLES_H
#define CONSOMMABLES_H
#include "Item.h"

class Consommables : public Item
{
    public:
        Consommables(int id, string nom, int regenV, int regenM, string type, double taux, int dura);
        virtual ~Consommables();
//==========methodes=========
        virtual void affichageItem();
        virtual int type();
        void retirerUneDura();

//=========setter==========
        void setRegenVie(int modifRegenVie);
        void setRegenMana(int modifRegenMana);

//=========getter==========
        int getRegenVie();
        int getRegenMana();

    protected:
    private:
        string typePotion;
        int regenVie;
        int regenMana;
};

#endif // CONSOMMABLES_H
