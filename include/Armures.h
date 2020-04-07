#ifndef ARMURES_H
#define ARMURES_H
#include "Item.h"

class Armures : public Item
{
    public:
        Armures(int id, string nom, int res, double taux, int dura);
        virtual ~Armures();
//==========methodes=========
        virtual void affichageItem();
        //new
        virtual int type();
//=========setter==========
        void setResistance(int modifResistance);
//=========getter==========
        int getResistance();

    protected:
    private:
        int resistance;
};

#endif // ARMURES_H
