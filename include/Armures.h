#ifndef ARMURES_H
#define ARMURES_H
#include "Item.h"

class Armures : public Item
{
    public:
        Armures();
        virtual ~Armures();
//==========methodes=========
        virtual void affichageItem();
//=========setter==========
        void setResistance(int modifResistance);
//=========getter==========
        int getResistance();

    protected:
    private:
        int resistance;
};

#endif // ARMURES_H
