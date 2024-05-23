#ifndef OPERATION_HPP
#define OPERATION_HPP

#include <iostream>

class Operation {
private:
    double value;

public:
    // Constructeurs
    Operation() : value(0) {}
    Operation(double v) : value(v) {}

    // Surcharge des opérateurs arithmétiques
    Operation operator+(const Operation& other) const {
        return Operation(this->value + other.value);
    }

    Operation operator-(const Operation& other) const {
        return Operation(this->value - other.value);
    }

    Operation operator*(const Operation& other) const {
        return Operation(this->value * other.value);
    }

    Operation operator/(const Operation& other) const {
        if (other.value != 0)
            return Operation(this->value / other.value);
        else {
            std::cerr << "Erreur : Division par zéro!" << std::endl;
            return Operation(0);
        }
    }

    // Surcharge de l'opérateur de flux pour l'affichage
    friend std::ostream& operator<<(std::ostream& os, const Operation& op) {
        os << op.value;
        return os;
    }
};

#endif // OPERATION_HPP
