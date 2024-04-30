#include <iostream>
#include <string>
#include <algorithm>

int main() {
    // Demander à l'utilisateur d'entrer un nombre
    std::cout << "Entrez un nombre : ";
    std::string nombre;
    std::cin >> nombre;

    // Inverser le nombre
    std::reverse(nombre.begin(), nombre.end());

    // Afficher le nombre inversé
    std::cout << "Le nombre inversé est : " << nombre << std::endl;

    return 0;
}

