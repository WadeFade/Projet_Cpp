#ifndef JEU_H
#define JEU_H
#include <vector>
#include "Donjon.h"
#include "Item.h"
#include "Entite.h"
#include "couleur.h"
#include "Barde.h"
#include "Elementaire.h"
#include "Cerbere.h"
#include "Griffon.h"
#include "Guerrier.h"
#include "Mage.h"
#include "Loup.h"
#include "Minotaure.h"
#include "Zombie.h"

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
    vector<Item*> getTableauItems();
    vector<Entite*> getTableauEntites();
    int getDifficulty();

//================methode==================
    void affichageJeu();
    void mettreEnCouleur(int t,int f);
    void creationJoueur();

    protected:
    private:
        vector<Entite*> tableauEntites;
        vector<Donjon*> lesDonjons;
        vector<Item*> tableauItems;
        int difficulty;

};

#endif // JEU_H
