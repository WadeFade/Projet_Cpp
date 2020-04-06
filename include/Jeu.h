#ifndef JEU_H
#define JEU_H
#include <vector>
#include "Donjon.h"
#include "Item.h"
#include "Entite.h"
#include "couleur.h"
#include "Monstre.h"
#include "Joueur.h"

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
    void setX(int x);
    void setY(int y);

//================getter==================
    vector<Entite*> getEntites();
    vector<Donjon*> getLesDonjons();
    Donjon* getDonjon(int indexDonjon);
    vector<Item*> getItems();
    int getDifficulty();
    int getX();
    int getY();

//================methode==================
    void affichageElementSalle();
    void mettreEnCouleur(int t,int f);
    void afficherMonstresSalles();
    void setJoueur(Joueur* joueur);
    void baston(Monstre* monstre);
    void resoudreSalle(Salle* salle);
    void resoudreDonjon(Donjon* donjon);
    void resoudreJeu();
    void deplacerJoueur(Joueur * joueur);

    protected:
    private:
        Joueur* joueur;
        vector<Entite*> lesEntites;
        vector<Donjon*> lesDonjons;
        vector<Item*> lesItems;
        int difficulty;
        int x;
        int y;
        couleur color;

};

#endif // JEU_H
