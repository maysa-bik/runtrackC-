#include <iostream>
using namespace std;

int main() {
    int a, b, entier;

    // Demander à l'utilisateur de saisir les bornes a et b
    cout << "Entrez la valeur de a : ";
    cin >> a;
    cout << "Entrez la valeur de b (b > a) : ";
    cin >> b;

    // Demander à l'utilisateur d'entrer un entier
    cout << "Entrez un entier : ";
    cin >> entier;

    // Vérifier si l'entier est entre a et b
    if (entier >= a && entier <= b) {
        cout << "GAGNE" << endl;
    } else {
        cout << "PERDU" << endl;
    }

    return 0;
}
