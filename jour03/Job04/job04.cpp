#include <iostream>
#include <string> // Inclure la bibliothèque pour les chaînes de caractères

int main() {
    std::string chaine = "Vive la plateforme !"; // Déclaration et initialisation de la chaîne

    // Utilisation de la fonction size() pour obtenir la longueur de la chaîne
    int taille = chaine.size();

    // Affichage de la taille de la chaîne
    std::cout << "La taille est " << taille << std::endl;

    return 0;
}
