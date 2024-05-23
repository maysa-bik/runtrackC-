#include <iostream>
#include "Personne.hpp"

int main() {
    // Création de différents types de personnages avec des valeurs initiales différentes
    Personne guerrier("Guerrier", 100, 10.5f);
    Personne mage("Mage", 70, 5.0f);
    Personne archer("Archer", 80, 7.5f);

    // Affichage des informations des personnages
    std::cout << "Informations des personnages:\n";
    guerrier.afficherInfos();
    std::cout << "\n";
    mage.afficherInfos();
    std::cout << "\n";
    archer.afficherInfos();

    // Modification des points de vie et de la défense du guerrier
    guerrier.setPointsDeVie(90);
    guerrier.setDefense(12.0f);

    std::cout << "\nInformations modifiées du Guerrier:\n";
    guerrier.afficherInfos();

    return 0;
}
