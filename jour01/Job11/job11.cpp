#include <iostream>

int main() {
    // Déclaration des variables
    int n, m, temp;

    // Demander à l'utilisateur de saisir les entiers n et m
    std::cout << "Entrez la valeur de n : ";
    std::cin >> n;
    std::cout << "Entrez la valeur de m : ";
    std::cin >> m;

    // Afficher les entiers avant l'échange
    std::cout << "Avant l'echange : n = " << n << ", m = " << m << std::endl;

    // Échanger le contenu des variables n et m à l'aide d'une variable temporaire
    temp = n;
    n = m;
    m = temp;

    // Afficher les entiers après l'échange
    std::cout << "Apres l'echange : n = " << n << ", m = " << m << std::endl;

    return 0;
}
