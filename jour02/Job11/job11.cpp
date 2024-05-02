#include <iostream>

using namespace std;

// Fonction pour calculer la factorielle
unsigned long long factorielle(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorielle(n - 1);
    }
}

int main() {
    int nombre;

    // Demander à l'utilisateur de saisir un nombre entier
    cout << "Entrez un nombre entier : ";
    cin >> nombre;

    // Vérifier si le nombre est positif
    if (nombre < 0) {
        cout << "La factorielle n'est pas définie pour les nombres négatifs." << endl;
    } else {
        // Calculer et afficher la factorielle
        cout << nombre << "! = " << factorielle(nombre) << endl;
    }

    return 0;
}
