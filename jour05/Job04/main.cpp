#include <iostream>
#include "Joueur.hpp"

int main() {
    // Instanciation d'un joueur avec le constructeur par défaut
    Joueur joueur1;
    std::cout << "Joueur 1 (constructeur par défaut) : ";
    joueur1.afficherPosition();

    // Utilisation des méthodes pour manipuler les attributs
    joueur1.setNom("Bob");
    joueur1.setPosition(3, 4);
    std::cout << "Joueur 1 après modification : ";
    joueur1.afficherPosition();

    // Instanciation d'un joueur avec le constructeur prenant x et y comme paramètres
    Joueur joueur2(5, 10);
    std::cout << "Joueur 2 (constructeur avec x et y) : ";
    joueur2.afficherPosition();

    // Utilisation des méthodes pour manipuler les attributs
    joueur2.setNom("Charlie");
    joueur2.deplacer(2, 3);
    std::cout << "Joueur 2 après déplacement et modification du nom : ";
    joueur2.afficherPosition();

    // Instanciation d'un joueur avec le constructeur prenant x, y et nom comme paramètres
    Joueur joueur3(7, 14, "Alice");
    std::cout << "Joueur 3 (constructeur avec x, y et nom) : ";
    joueur3.afficherPosition();

    // Affichage des attributs individuellement
    std::cout << "Joueur 3 Nom: " << joueur3.getNom() << ", X: " << joueur3.getX() << ", Y: " << joueur3.getY() << std::endl;

    return 0;
}
