#include <iostream>
#include "Operation.hpp"

int main() {
    Operation op1(10.5);
    Operation op2(2.0);

    Operation sum = op1 + op2;
    Operation difference = op1 - op2;
    Operation product = op1 * op2;
    Operation quotient = op1 / op2;

    std::cout << "Op1: " << op1 << std::endl;
    std::cout << "Op2: " << op2 << std::endl;
    std::cout << "Somme: " << sum << std::endl;
    std::cout << "Différence: " << difference << std::endl;
    std::cout << "Produit: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

    return 0;
}
