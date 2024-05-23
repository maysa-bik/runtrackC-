#include <iostream>
#include "Chien.hpp"
#include "Chat.hpp"

int main() {
    std::cout << "Nombre total d'animaux avant instanciation: " << Animal::getTotalAnimaux() << std::endl;

    Chien chien1, chien2;
    Chat chat1, chat2, chat3;

    std::cout << "Nombre total d'animaux après instanciation: " << Animal::getTotalAnimaux() << std::endl;

    std::cout << "\nLe chien:" << std::endl;
    chien1.crier();
    chien1.manger();

    std::cout << "\nLe chat:" << std::endl;
    chat1.crier();
    chat1.manger();
    chat1.manger("des croquettes");
    chat1.manger("du poisson");

    return 0;
}
