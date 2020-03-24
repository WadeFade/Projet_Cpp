#ifndef CRISTAUX_H
#define CRISTAUX_H
#include "Item.h"

class Cristaux : public Item
{
    public:
        Cristaux();
        virtual ~Cristaux();

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
