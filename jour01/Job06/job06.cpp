#include <iostream>

int main() {
    // Déclaration de la variable pour stocker l'entier donné par l'utilisateur
    int entier;
    
    // Demander à l'utilisateur de saisir un entier
    std::cout << "Entrez un entier : ";
    std::cin >> entier;
    
    // Afficher la table de multiplication de l'entier donné par l'utilisateur
    std::cout << "Table de multiplication de " << entier << " :\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << entier << " x " << i << " = " << (entier * i) << std::endl;
    }
    
    return 0;
}
