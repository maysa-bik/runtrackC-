#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>
#include <string>

class Joueur {
private:
    int x; // Position en x
    int y; // Position en y
    std::string nom; // Nom du joueur

public:
    // Constructeur par défaut
    Joueur() : x(0), y(0), nom("Anonyme") {}

    // Constructeur avec paramètres pour initialiser x et y
    Joueur(int initialX, int initialY) : x(initialX), y(initialY), nom("Anonyme") {}

    // Constructeur avec paramètres pour initialiser x, y et nom
    Joueur(int initialX, int initialY, std::string nomJoueur) : x(initialX), y(initialY), nom(nomJoueur) {}

    // Méthode pour initialiser les positions du joueur
    void setPosition(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Méthode pour afficher la position du joueur
    void afficherPosition() const {
        std::cout << "Position : (" << x << ", " << y << "), Nom : " << nom << std::endl;
    }

    // Méthode pour déplacer le joueur
    void deplacer(int deltaX, int deltaY) {
        x += deltaX;
        y += deltaY;
    }
};

#endif // JOUEUR_HPP
