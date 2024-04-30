#include <iostream>

int main() {
    int N;
    
    // Demander à l'utilisateur de saisir la valeur de N
    std::cout << "Entrez la valeur de N : ";
    std::cin >> N;
    
    // Tant que N n'est pas égal à 0, afficher "Hello World" et décrémenter N
    while (N != 0) {
        std::cout << "Hello World" << std::endl;
        N--;
    }
    
    return 0;
}
