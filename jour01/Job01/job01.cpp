#include <iostream>

int main() {
    char c = '\x01';
    short int p = 10;
    int x, y, z, w;

    // Expression 1: x = p + 3
    x = p + 3;
    std::cout << "Expression 1: x = " << x << std::endl;

    // Expression 2: y = c + 1
    y = c + 1;
    std::cout << "Expression 2: y = " << y << std::endl;

    // Expression 3: z = p + c
    z = p + c;
    std::cout << "Expression 3: z = " << z << std::endl;

    // Expression 4: w = 3 * p + 5 * c
    w = 3 * p + 5 * c;
    std::cout << "Expression 4: w = " << w << std::endl;

    return 0;
}
