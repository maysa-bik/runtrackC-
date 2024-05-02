// Par exemple, 153 est un nombre narcissique car 
//3   3   3
//1 + 5 + 3 = 1 + 125 + 27 = 153
 

#include <iostream>
#include <cmath>

// Fonction pour calculer le nombre de chiffres dans un nombre
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        ++count;
    }
    return count;
}

// Fonction pour vérifier si un nombre est un nombre narcissique
bool isNarcissistic(int num) {
    int originalNum = num;
    int sum = 0;
    int numDigits = countDigits(num);

    while (num != 0) {
        int digit = num % 10;
        sum += std::pow(digit, numDigits);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int number;

    // Demander à l'utilisateur de saisir un nombre
    std::cout << "Entrez un nombre : ";
    std::cin >> number;

    // Vérifier si le nombre est narcissique ou non
    if (isNarcissistic(number)) {
        std::cout << number << " est un nombre narcissique." << std::endl;
    } else {
        std::cout << number << " n'est pas un nombre narcissique." << std::endl;
    }

    return 0;
}
