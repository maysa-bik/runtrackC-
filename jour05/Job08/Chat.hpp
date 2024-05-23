#ifndef CHAT_HPP
#define CHAT_HPP

#include "Animal.hpp"

class Chat : public Animal {
public:
    // Implémentation de la méthode crier pour le chat
    void crier() const override {
        std::cout << "Miaou!" << std::endl;
    }

    // Implémentation de la méthode manger pour le chat
    void manger() const override {
        std::cout << "Le chat mange du poisson." << std::endl;
    }
};

#endif // CHAT_HPP
