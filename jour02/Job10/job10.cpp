#include <iostream>
#include <cmath> // Pour utiliser la fonction sqrt()

using namespace std;

int main() {
    double nombre;

    // Demander à l'utilisateur de saisir un nombre
    do {
        cout << "Entrez un nombre positif (0 pour quitter) : ";
        cin >> nombre;

        // Vérifier si le nombre est négatif
        if (nombre < 0) {
            cout << "svp positif" << endl;
        } else if (nombre > 0) {
            // Calculer et afficher la racine carrée
            cout << "Sa racine carrée est : " << sqrt(nombre) << endl;
        }
    } while (nombre != 0);

    return 0;
}
