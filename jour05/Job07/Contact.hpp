#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
private:
    std::string nom;
    int numero;

public:
    // Constructeur prenant un nom et un numéro de téléphone
    Contact(const std::string& nom, int numero)
        : nom(nom), numero(numero) {}

    // Constructeur de copie
    Contact(const Contact& autre)
        : nom(autre.nom), numero(autre.numero) {}

    // Méthode pour obtenir le nom
    std::string getNom() const { return nom; }

    // Méthode pour obtenir le numéro de téléphone
    int getNumero() const { return numero; }

    // Méthode pour modifier le numéro de téléphone
    void setNumero(int nouveauNumero) { numero = nouveauNumero; }

    // Méthode pour afficher les informations du contact
    void afficherInfos() const {
        std::cout << "Nom: " << nom << ", Numero: " << numero << "\n";
    }
};

#endif // CONTACT_HPP
 