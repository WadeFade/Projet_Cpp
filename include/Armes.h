#ifndef ARMES_H
#define ARMES_H
#include "Item.h"
#include <string>

class Armes : public Item
{
    public:
        Armes(int id, int atck, string type, double taux, string nom, int dura);
        virtual ~Armes();
//==========methodes=========
        virtual void affichageItem();
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
