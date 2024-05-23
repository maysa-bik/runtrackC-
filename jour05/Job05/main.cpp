// main.cpp

#include <iostream>
#include "Etudiant.hpp"

int main() {
    // Création d'un objet Etudiant avec des valeurs initiales
    Etudiant etudiant1("Dupont", "Jean", 20, 12345);
    Etudiant etudiant2("Martin", "Alice", 22, 67890);

    // Affichage des informations des étudiants
    std::cout << "Etudiant 1 : " << etudiant1.getNom() << " " << etudiant1.getPrenom() 
              << ", Age: " << etudiant1.getAge() << ", Matricule: " << etudiant1.getMatricule() << std::endl;

    std::cout << "Etudiant 2 : " << etudiant2.getNom() << " " << etudiant2.getPrenom() 
              << ", Age: " << etudiant2.getAge() << ", Matricule: " << etudiant2.getMatricule() << std::endl;

    return 0;
}
