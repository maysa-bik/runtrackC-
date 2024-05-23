#include <iostream>
#include "Joueur.hpp"

int main() {
    // Instanciation d'un joueur
    Joueur joueur;

    // Initialisation de la position du joueur
    joueur.setPosition(0, 0);

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

