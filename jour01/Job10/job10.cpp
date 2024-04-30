#include <iostream>

int main() {
    // Déclaration des variables
    double prixHT, prixTTC;
    int nbKilos;
    double tauxTVA;

    // Demander à l'utilisateur de saisir le prix HT d'un kilo de carottes
    std::cout << "Entrez le prix HT d'un kilo de carottes : ";
    std::cin >> prixHT;

    // Demander à l'utilisateur de saisir le nombre de kilos de carottes
    std::cout << "Entrez le nombre de kilos de carottes : ";
    std::cin >> nbKilos;

    // Demander à l'utilisateur de saisir le taux de TVA
    std::cout << "Entrez le taux de TVA (en %) : ";
    std::cin >> tauxTVA;

    // Calculer le prix TTC
    double montantHT = prixHT * nbKilos;
    double TVA = montantHT * (tauxTVA / 100);
    prixTTC = montantHT + TVA;

    // Afficher le prix TTC
    std::cout << "Le prix TTC des carottes est de : " << prixTTC << " euros" << std::endl;

    return 0;
}
