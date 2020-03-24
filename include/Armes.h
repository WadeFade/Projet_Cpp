#ifndef ARMES_H
#define ARMES_H
#include "Item.h"


class Armes : public Item
{
    public:
        Armes();
        virtual ~Armes();

//==========setter===========
void setAttaque(int modifAttaque);

//===========getter==========
int getAttaque();

    protected:

    private:
        int attaque;
};

#endif // ARMES_H
