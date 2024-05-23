#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
public:
    // Méthode pure virtuelle pour crier
    virtual void crier() const = 0;

    // Méthode pure virtuelle pour manger
    virtual void manger() const = 0;

    // Virtual destructor
    virtual ~Animal() = default;
};

#endif // ANIMAL_HPP
