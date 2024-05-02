#include <iostream>
#include <iomanip> // Pour setw

int main() {
    // Affichage de la première ligne de l'en-tête
    std::cout << "   I";
    for (int i = 1; i <= 10; ++i) {
        std::cout << std::setw(4) << i;
    }
    std::cout << std::endl;

    // Affichage de la ligne de séparation
    std::cout << "-------------------------------------" << std::endl;

    // Affichage des lignes de la table de multiplication
    for (int i = 1; i <= 10; ++i) {
        // Affichage du multiplicateur
        std::cout << std::setw(2) << i << " I";

        // Affichage des produits
        for (int j = 1; j <= 10; ++j) {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << std::endl;
    }

    return 0;
}
