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
        // new
        virtual int type();
        // test pa bo
        virtual int getRegenVie();
        virtual int getRegenMana();
//============setter===============
        void setIdItem(int id);
        void setNomItem(string nom);
        void setTauxDrop(double taux);
        //new
        void setDurability(int durability);
//===========getter================
        int getIdItem();
        string getNomItem();
        double getTauxDrop();
        //new
        int getDurability();

    protected:
        int idItem;
        string nomItem;
        double tauxDrop;
        //new
        int durability;

    private:
};

#endif // ITEM_H
