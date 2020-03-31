#ifndef ARMES_H
#define ARMES_H
#include "Item.h"
#include <string>

class Armes : public Item
{
    public:
        Armes();
        virtual ~Armes();
//==========methodes=========
        virtual void affichageItem();
        void deviensUneEpee();
        void deviensUneHache();
        void deviensUnArc();
        void deviensUneBaguette();
        void deviensUneDague();
        void deviensUnBaton();
        void deviensUnePelle();
        void deviensUnMarteau();
//==========setter===========
        void setAttaque(int modifAttaque);
        void setTypeArme(string typeArme);
//===========getter==========
        int getAttaque();
        string getTypeArme();
    protected:
    private:
        int attaque;
        string typeArme;
};

#endif // ARMES_H
