#ifndef CHIEN_HPP
#define CHIEN_HPP

#include "Animal.hpp"

class Chien : public Animal {
public:
    // Implémentation de la méthode crier pour le chien
    void crier() const override {
        std::cout << "Woof!" << std::endl;
    }

    // Implémentation de la méthode manger pour le chien
    void manger() const override {
        std::cout << "Le chien a une alimentation variée." << std::endl;
    }
};

#endif // CHIEN_HPP
