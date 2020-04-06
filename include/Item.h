#ifndef ITEM_H
#define ITEM_H
#include <string>
using namespace std;


class Item
{
    public:
        Item();
        virtual ~Item();
//==========methodes=========
        virtual void affichageItem();
//============setter===============
        void setIdItem(int id);
        void setNomItem(string nom);
        void setTauxDrop(double taux);
        void setDurability(int dura);
//===========getter================
        int getIdItem();
        string getNomItem();
        double getTauxDrop();
        int getDurability();

    protected:
        int idItem;
        string nomItem;
        double tauxDrop;
        int durability;

    private:
};

#endif // ITEM_H
