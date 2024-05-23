#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>
#include <iostream>

class Personne {
private:
    std::string nom;
    int pointsDeVie;
    float defense;

public:
    // Constructeur avec liste d'initialisation
    Personne(const std::string& nom, int pointsDeVie, float defense)
        : nom(nom), pointsDeVie(pointsDeVie), defense(defense) {}

    // Méthodes pour obtenir les valeurs des attributs
    std::string getNom() const { return nom; }
    int getPointsDeVie() const { return pointsDeVie; }
    float getDefense() const { return defense; }

    // Méthodes pour modifier les valeurs des attributs
    void setNom(const std::string& nom) { this->nom = nom; }
    void setPointsDeVie(int pointsDeVie) { this->pointsDeVie = pointsDeVie; }
    void setDefense(float defense) { this->defense = defense; }

    // Méthode pour afficher les informations de la personne
    void afficherInfos() const {
        std::cout << "Nom: " << nom << "\n"
                  << "Points de Vie: " << pointsDeVie << "\n"
                  << "Defense: " << defense << "\n";
    }
};

#endif // PERSONNE_HPP
