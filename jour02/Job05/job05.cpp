#include <iostream>
using namespace std;

int main() {
    // Demande à l'utilisateur de saisir une note
    cout << "Entrez la note : ";
    int note;
    cin >> note;

    // Vérifie si la note est comprise entre 0 et 20
    if (note >= 0 && note <= 20) {
        // Vérifie si la note est supérieure à 10
        if (note > 10) {
            cout << "Validé" << endl;
        } else {
            cout << "Non validé" << endl;
        }
    } else {
        cout << "La note doit être comprise entre 0 et 20." << endl;
    }

    return 0;
}
