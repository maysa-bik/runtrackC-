#include <iostream>

int main() {
    int a, x = 10, y = 5, i = 0, n = 3, p = 2;
    bool b, c, d;

    // Expression 1: a = x + 5
    a = x + 5;
    std::cout << "Expression 1: " << a << std::endl;

    // Expression 2: a = x = y + 2
    a = x = y + 2;
    std::cout << "Expression 2: " << a << std::endl;

    // Expression 3: a = x == y
    a = x == y;
    std::cout << "Expression 3: " << a << std::endl;

    // Expression 4: a < b && c < d
    b = true; c = false; d = true;
    a = a < b && c < d;
    std::cout << "Expression 4: " << a << std::endl;

    // Expression 5: i++ * (n + p)
    a = i++ * (n + p);
    std::cout << "Expression 5: " << a << std::endl;

    return 0;
}
