#include <stdio.h>

int main() {
    // 1️⃣ Déclaration des tableaux
    char noms[5][20] = {"Dupont", "Martin", "Bernard", "Petit", "Moreau"};
    char prenoms[5][20] = {"Alice", "Bob", "Claire", "David", "Emma"};
    char adresses[5][50] = {
        "1 rue A",
        "2 avenue B",
        "3 boulevard C",
        "4 place D",
        "5 chemin E"
    };

    float notes_prog[5] = {15.5, 12.0, 18.0, 10.5, 14.0};
    float notes_sys[5]  = {14.0, 13.5, 17.0, 11.0, 15.0};

    // 2️⃣ Affichage des informations
    printf("=== Informations des étudiants ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i+1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation en C : %.2f\n", notes_prog[i]);
        printf("Note Système d'exploitation : %.2f\n\n", notes_sys[i]);
    }

    return 0;
}
