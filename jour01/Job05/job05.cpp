#include <iostream>

int main() {
    // Déclaration des variables pour stocker les nombres saisis par l'utilisateur
    double nombre1, nombre2;
    
    // Demander à l'utilisateur de saisir les deux nombres
    std::cout << "Entrez le premier nombre : ";
    std::cin >> nombre1;
    
    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> nombre2;
    
    // Multiplier les deux nombres
    double produit = nombre1 * nombre2;
    
    // Afficher le résultat de la multiplication
    std::cout << "Le produit de " << nombre1 << " et " << nombre2 << " est : " << produit << std::endl;
    
    return 0;
}
