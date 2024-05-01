#include <iostream>
using namespace std;

int main() {
    // Demande à l'utilisateur de saisir un entier n
    int n;
    cout << "Entrez un entier n : ";
    cin >> n;

    // Itération jusqu'à l'entier n
    for (int i = 1; i <= n; ++i) {
        // Vérifie si l'itération est un multiple de 3 ou de 5
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " est un multiple de 3 et de 5." << endl;
        } else if (i % 3 == 0) {
            cout << i << " est un multiple de 3." << endl;
        } else if (i % 5 == 0) {
            cout << i << " est un multiple de 5." << endl;
        } else {
            cout << i << " n'est ni un multiple de 3 ni un multiple de 5." << endl;
        }
    }

    return 0;
}
