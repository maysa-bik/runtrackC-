#include <iostream>

int main() {
    int a, b, c;

    // Demander à l'utilisateur de saisir trois entiers
    std::cout << "Entrez trois entiers : ";
    std::cin >> a >> b >> c;

    // Comparer les entiers pour trouver le plus grand
    int plusGrand = a;
    if (b > plusGrand) {
        plusGrand = b;
    }
    if (c > plusGrand) {
        plusGrand = c;
    }

    // Afficher le plus grand entier
    std::cout << "Le plus grand entier est : " << plusGrand << std::endl;

    return 0;
}
