#include <iostream>

// Fonction pour calculer la somme des n premiers termes de la série harmonique
double suite(double n) {
    double result = 0;
    for (double i = 1; i <= n; i++) {
        result += (1 / i);
    }
    return result;
}

int main() {
    int n;

    // Demander à l'utilisateur de saisir n
    std::cout << "Entrez un entier positif n : ";
    std::cin >> n;

    // Vérifier si n est positif
    if (n <= 0) {
        std::cout << "Erreur : n doit être un entier positif." << std::endl;
    } else {
        // Calculer et afficher la somme des n premiers termes de la série harmonique
        std::cout << "La somme des " << n << " premiers termes de la série harmonique est : "
                  << suite(n) << std::endl;
    }

    return 0;
}


