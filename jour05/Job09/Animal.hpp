#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
    static int totalAnimaux;  // Compteur statique

public:
    Animal() {
        totalAnimaux++;
    }

    virtual ~Animal() {
        totalAnimaux--;
    }

    static int getTotalAnimaux() {
        return totalAnimaux;
    }

    virtual void crier() const = 0;
    virtual void manger() const = 0;
};

int Animal::totalAnimaux = 0;  // Initialisation du compteur statique

#endif // ANIMAL_HPP
