#ifndef CONSOMMABLES_H
#define CONSOMMABLES_H
#include "Item.h"

class Consommables : public Item
{
    public:
        Consommables();
        virtual ~Consommables();
//==========methodes=========
        virtual void affichageItem();
//=========setter==========
        void setRegenVie(int modifRegenVie);
        void setRegenMana(int modifRegenMana);
//=========getter==========
        int getRegenVie();
        int getRegenMana();

    protected:
    private:
        int regenVie;
        int regenMana;
};

#endif // CONSOMMABLES_H
