#include <stdio.h>
#include <iostream>
#include <string>

#include "classe_mere.h"
#include "classe_fille_1.h"

using namespace std;

int main() {
    // Création d'instances de la classe Joueur
    Boston joueur1("Iliassa", "Meneur", 1.78, "Boston");
    Boston joueur2("A", "TANK", 1.85 , "Boston");
    Boston joueur3("B", "tireur", 1.99, "Boston");
    Boston joueur4("C", "banc", 1.52, "Boston");
    
    joueur1.afficher();
    joueur2.afficher();
    joueur3.afficher();
    joueur4.afficher();
    
    return 0;
}




