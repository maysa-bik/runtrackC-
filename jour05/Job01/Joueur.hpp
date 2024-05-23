#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur {
private:
    int x; // Position en x
    int y; // Position en y

public:
    // Constructeur par défaut
    Joueur() : x(0), y(0) {}

    // Méthodes pour initialiser les positions du joueur
    void setPosition(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Méthode pour afficher la position du joueur
    void afficherPosition() const {
        std::cout << "Position : (" << x << ", " << y << ")" << std::endl;
    }

    // Méthode pour déplacer le joueur
    void deplacer(int deltaX, int deltaY) {
        x += deltaX;
        y += deltaY;
    }
};

#endif // JOUEUR_HPP

