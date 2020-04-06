#ifndef CRISTAUX_H
#define CRISTAUX_H
#include "Item.h"

class Cristaux : public Item
{
    public:
        Cristaux();
        virtual ~Cristaux();
//==========methodes=========
        virtual void affichageItem();
        //new
        virtual int type();
//=========setter==========
        void setVieSup(int modifVieSup);
        void setManaSup(int modifManaSup);
//=========getter==========
        int getVieSup();
        int getManaSup();

    protected:
    private:
        int vieSup;
        int manaSup;
};

#endif // CRISTAUX_H
