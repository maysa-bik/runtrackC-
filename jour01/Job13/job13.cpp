#include <iostream>

int main() {
    // Demander à l'utilisateur de saisir un entier N
    int N;
    std::cout << "Entrez un entier N : ";
    std::cin >> N;

    // Calculer la somme des cubes de 5^3 à N^3
    int somme = 0;
    for (int i = 5; i <= N; ++i) {
        somme += i * i * i;
    }

    // Afficher la somme calculée
    std::cout << "La somme des cubes de 5^3 à N^3 est : " << somme << std::endl;

    return 0;
}
