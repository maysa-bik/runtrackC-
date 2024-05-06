#include <iostream>
#include <cstring>

int compareChaines(const char* chaine1, const char* chaine2) {
    // Utiliser la fonction strcmp pour comparer les chaînes
    int resultat = strcmp(chaine1, chaine2);
    
    // Retourner 0 si les chaînes sont égales, sinon 1
    return (resultat == 0) ? 0 : 1;
}

int main() {
    const char* chaine1 = "Hello";
    const char* chaine2 = "World";
    
    int resultat = compareChaines(chaine1, chaine2);
    
    // Afficher le résultat de la comparaison
    if (resultat == 0) {
        std::cout << "Les chaines sont egales." << std::endl;
    } else {
        std::cout << "Les chaines ne sont pas egales." << std::endl;
    }
    
    return 0;
}
