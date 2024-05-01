#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Demander à l'utilisateur de saisir les bornes a et b
    cout << "Entrez la valeur de a : ";
    cin >> a;
    cout << "Entrez la valeur de b : ";
    cin >> b;

    // Afficher tous les entiers de a à b
    cout << "Entiers de " << a << " à " << b << " : ";
    int i = a;

    while (i <= b) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    return 0;
}