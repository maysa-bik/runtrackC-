#include <iostream>

// Fonction pour générer la suite de Fibonacci jusqu'à une limite donnée
void generateFibonacci(int limit) {
    int first = 0, second = 1, next;

    std::cout << "Suite de Fibonacci jusqu'a " << limit << " : ";

    while (first <= limit) {
        std::cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }

    std::cout << std::endl;
}

int main() {
    int limit;

    // Demander à l'utilisateur de saisir la limite
    std::cout << "Entrez la limite pour la suite de Fibonacci : ";
    std::cin >> limit;

    // Générer et afficher la suite de Fibonacci jusqu'à la limite donnée
    generateFibonacci(limit);

    return 0;
}
