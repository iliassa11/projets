#include <stdio.h>
#include <string>
#include <iostream>

#include "classe_fille_1.h"

using namespace std;

Boston::Boston(string t_nom, string t_poste, double t_taille, string t_nom_eq)
{
    nom = t_nom;
    poste = t_poste;
    taille = t_taille;
    nom_eq = t_nom_eq;//
}