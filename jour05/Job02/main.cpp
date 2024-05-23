#include <iostream>
#include "Joueur.hpp"

int main() {
    // Instanciation d'un joueur avec des valeurs initiales
    Joueur joueur(5, 10);

    // Affichage de la position initiale du joueur
    std::cout << "Position initiale du joueur : ";
    joueur.afficherPosition();

    // Simulation de quelques mouvements
    joueur.deplacer(1, 2); // Déplacement vers la droite et le bas
    std::cout << "Position après le premier déplacement : ";
    joueur.afficherPosition();

    joueur.deplacer(-3, 1); // Déplacement vers la gauche et le haut
    std::cout << "Position après le deuxième déplacement : ";
    joueur.afficherPosition();

    return 0;
}
