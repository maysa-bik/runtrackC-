#include "Chien.hpp"
#include "Chat.hpp"

int main() {
    // Instancier un chien et un chat
    Chien chien;
    Chat chat;

    // Appeler les méthodes crier et manger pour le chien
    std::cout << "Le chien:" << std::endl;
    chien.crier();
    chien.manger();

    // Appeler les méthodes crier et manger pour le chat
    std::cout << "Le chat:" << std::endl;
    chat.crier();
    chat.manger();

    return 0;
}
