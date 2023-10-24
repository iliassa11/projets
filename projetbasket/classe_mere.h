#ifndef CLASSE_MERE_H
#define CLASSE_MERE_H

#include <iostream>
#include <string>

class Joueur 
{
protected:
    std::string nom;
    std::string poste;
    double taille;

public:
    Joueur();
    Joueur(std::string t_nom, std::string t_poste, double t_taille);

    void afficher() const;

};

#include "classe_mere.cpp"//

#endif

