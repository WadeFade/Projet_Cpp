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
#include "Monstre.h"
#include "Joueur.h"

#include "Armes.h"
#include "Armures.h"
#include "Consommables.h"
#include "Cristaux.h"
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
    void ecranDeVictoireDeLaMortQuiTue();
//================getter==================
    vector<Entite*> getEntites();
    vector<Donjon*> getLesDonjons();
    Donjon* getDonjon(int indexDonjon);
    vector<Item*> getTableauItems();
    vector<Entite*> getTableauEntites();
    int getDifficulty();

//================methode==================
    void affichageElementSalle();
    void mettreEnCouleur(int t,int f);
    Joueur* menu();
    void afficherMonstresSalles();
    void setJoueur(Joueur* joueur);
    int baston(Monstre* monstre);
    void resoudreSalle(Salle* salle);
    void resoudreDonjon(Donjon* donjon);
    void resoudreJeu();
    void deplacerJoueur(Joueur * joueur);

    protected:


    private:
        Joueur* joueur;
        vector<Entite*> tableauEntites;
        vector<Entite*> lesEntites;
        vector<Donjon*> lesDonjons;
        vector<Item*> tableauItems;
        int difficulty;
        couleur color;

};

#endif // JEU_H
