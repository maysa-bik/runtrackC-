#include <iostream>

int main() {
    // Déclaration des variables
    int nombre, somme = 0;

    // Demander à l'utilisateur de saisir cinq entiers
    for (int i = 0; i < 5; ++i) {
        std::cout << "Entrez un entier : ";
        std::cin >> nombre;
        somme += nombre;
    }

    // Calculer la moyenne
    double moyenne = static_cast<double>(somme) / 5;

    // Afficher la moyenne
    std::cout << "La moyenne des entiers saisis est : " << moyenne << std::endl;

    return 0;
}
