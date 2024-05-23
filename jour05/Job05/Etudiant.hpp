// Etudiant.hpp

#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>

class Etudiant {
private:
    std::string nom;
    std::string prenom;
    int age;
    int matricule;

public:
    // Constructeur avec liste d'initialisation
    Etudiant(const std::string& nom, const std::string& prenom, int age, int matricule)
        : nom(nom), prenom(prenom), age(age), matricule(matricule) {}

    // Méthodes pour obtenir les valeurs des attributs (getters)
    std::string getNom() const { return nom; }
    std::string getPrenom() const { return prenom; }
    int getAge() const { return age; }
    int getMatricule() const { return matricule; }
};

#endif // ETUDIANT_HPP

