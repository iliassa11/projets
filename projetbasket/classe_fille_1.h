#ifndef CLASSE_FILLE_1_H
#define CLASSE_FILLE_1_H

#include <iostream>
#include <string>

#include "classe_mere.h"

class Boston: public Joueur
{
private:
    std::string nom_eq;

public:
    Boston();
    Boston(std::string t_nom, std::string t_poste, double t_taille, std::string t_nom_eq);

};

#include "classe_fille_1.cpp"

#endif//