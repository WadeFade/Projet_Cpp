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
        virtual int type();
        //virtual int getRegenVie();
        //virtual int getRegenMana();

//============setter===============
        void setIdItem(int id);
        void setNomItem(string nom);
        void setTauxDrop(double taux);
        void setDurability(int durability);

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
