#ifndef JEU_H
#define JEU_H
#include <vector>
#include "Donjon.h"
#include "Item.h"
#include "Entite.h"
#include "couleur.h"

class Jeu
{
    public:
        Jeu();
        virtual ~Jeu();

//================setter==================
    void setLesEntites(vector<Entite*> entite);
    void setLesDonjons(Donjon* donjon);
    void setLesItems(vector<Item*> item);
    void setDifficulty(int difficulty);
//================getter==================
    vector<Entite*> getEntites();
    vector<Donjon*> getLesDonjons();
    Donjon* getDonjon(int indexDonjon);
    vector<Item*> getItems();
    int getDifficulty();

//================methode==================
    void affichageJeu();
    void mettreEnCouleur(int t,int f);
    void creationJoueur();

    protected:
    private:
        vector<Entite*> lesEntites;
        vector<Donjon*> lesDonjons;
        vector<Item*> lesItems;
        int difficulty;

};

#endif // JEU_H
