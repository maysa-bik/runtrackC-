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
    for (int i = a; i <= b; ++i) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
