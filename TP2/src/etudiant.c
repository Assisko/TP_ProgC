#include <stdio.h>

int main() {
    // Tableaux pour stocker les informations des étudiants
    char noms[5][20] = {"Dupont", "Martin", "Nguyen", "Diaz", "Moreau"};
    char prenoms[5][20] = {"Alice", "Bob", "Chloé", "David", "Emma"};
    char adresses[5][50] = {
        "10 rue A, Paris",
        "25 avenue B, Lyon",
        "14 boulevard C, Marseille",
        "7 impasse D, Lille",
        "3 place E, Toulouse"
    };

    // Tableaux pour stocker les notes
    float notesC[5] = {15.5, 12.0, 17.0, 13.5, 16.0};    // Programmation C
    float notesSE[5] = {14.0, 11.5, 16.5, 12.0, 15.0};   // Système d'exploitation

    // Affichage des informations
    printf("=== Informations des étudiants ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.2f\n", notesC[i]);
        printf("Note Système d'exploitation : %.2f\n", notesSE[i]);
        printf("---------------------------------\n");
    }

    return 0;
}
