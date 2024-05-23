#include <iostream>
#include "Contact.hpp"

int main() {
    // Instanciation de plusieurs objets Contact
    Contact contact1("Alice", 123456789);
    Contact contact2("Bob", 987654321);
    Contact contact3("Charlie", 112233445);

    // Copies des objets Contact
    Contact copieContact1 = contact1;
    Contact copieContact2 = contact2;
    Contact copieContact3 = contact3;

    // Modification des numéros des copies
    copieContact1.setNumero(111111111);
    copieContact2.setNumero(222222222);
    copieContact3.setNumero(333333333);

    // Affichage des informations des objets originaux
    std::cout << "Contacts originaux:\n";
    contact1.afficherInfos();
    contact2.afficherInfos();
    contact3.afficherInfos();

    // Affichage des informations des copies
    std::cout << "\nCopies modifiées:\n";
    copieContact1.afficherInfos();
    copieContact2.afficherInfos();
    copieContact3.afficherInfos();

    return 0;
}
