#include <iostream>
#include "Joueur.hpp"

int main() {
    // Instanciation d'un joueur avec le constructeur par défaut
    Joueur joueur1;
    std::cout << "Joueur 1 (constructeur par défaut) : ";
    joueur1.afficherPosition();

    // Instanciation d'un joueur avec le constructeur prenant x et y comme paramètres
    Joueur joueur2(5, 10);
    std::cout << "Joueur 2 (constructeur avec x et y) : ";
    joueur2.afficherPosition();

    // Instanciation d'un joueur avec le constructeur prenant x, y et nom comme paramètres
    Joueur joueur3(7, 14, "Alice");
    std::cout << "Joueur 3 (constructeur avec x, y et nom) : ";
    joueur3.afficherPosition();

    return 0;
}
