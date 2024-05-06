#include <iostream>
#include <string>
#include <regex>

int main() {
    std::string heure;

    std::cout << "Entrez une heure sous le format XXhXX : ";
    std::cin >> heure;

    std::regex motif("([01]?[0-9]|2[0-3])h[0-5][0-9]");

    if (std::regex_match(heure, motif)) {
        std::cout << "Heure valide !" << std::endl;
    } else {
        std::cout << "Heure invalide. Format attendu : XXhXX" << std::endl;
    }

    return 0;
}
 
