#ifndef CRISTAUX_H
#define CRISTAUX_H
#include "Item.h"

class Cristaux : public Item
{
    public:
        Cristaux(int id, string nom, int vieS, int manaS, string type, double taux, int dura);
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
        string typeCristal;
        int vieSup;
        int manaSup;
};

#endif // CRISTAUX_H
