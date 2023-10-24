#include <stdio.h>
#include <string>
#include <iostream>

#include "classe_mere.h"

using namespace std;

Joueur::Joueur(string t_nom, string t_poste, double t_taille)
{
    nom = t_nom;
    poste = t_poste;
    taille = t_taille;
}

void Joueur::afficher() const
{
    cout << "Nom : " << nom << endl;
    cout << "Poste : " << poste << endl;
    cout << "Taille : " << taille << endl;//
}