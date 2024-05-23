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
        this->x += deltaX;
        this->y += deltaY;
    }

    // Méthode pour obtenir la position x
    int getX() const {
        return this->x;
    }

    // Méthode pour obtenir la position y
    int getY() const {
        return this->y;
    }

    // Méthode pour obtenir le nom
    std::string getNom() const {
        return this->nom;
    }

    // Méthode pour définir le nom
    void setNom(const std::string& nom) {
        this->nom = nom;
    }
};

#endif // JOUEUR_HPP
