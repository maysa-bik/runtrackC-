#include <iostream>

int main() {
    // Déclaration des variables pour stocker les nombres saisis par l'utilisateur
    double nombre1, nombre2;
    
    // Demander à l'utilisateur de saisir les deux nombres
    std::cout << "Entrez le premier nombre : ";
    std::cin >> nombre1;
    
    std::cout << "Entrez le deuxieme nombre : ";
    std::cin >> nombre2;
    
    // Additionner les deux nombres
    double somme = nombre1 + nombre2;
    
    // Afficher le résultat de l'addition
    std::cout << "La somme de " << nombre1 << " et " << nombre2 << " est : " << somme << std::endl;
    
    return 0;
}
