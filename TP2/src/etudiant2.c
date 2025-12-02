#include <stdio.h>
#include <string.h>

// Définition de la structure Étudiant
struct Etudiant {
    char nom[20];
    char prenom[20];
    char adresse[50];
    float note_prog;
    float note_sys;
};

int main() {
    struct Etudiant etudiants[5];

    // Initialisation des données (on peut aussi utiliser scanf pour saisir)
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Alice");
    strcpy(etudiants[0].adresse, "1 rue A");
    etudiants[0].note_prog = 15.5;
    etudiants[0].note_sys  = 14.0;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Bob");
    strcpy(etudiants[1].adresse, "2 avenue B");
    etudiants[1].note_prog = 12.0;
    etudiants[1].note_sys  = 13.5;

    strcpy(etudiants[2].nom, "Bernard");
    strcpy(etudiants[2].prenom, "Claire");
    strcpy(etudiants[2].adresse, "3 boulevard C");
    etudiants[2].note_prog = 18.0;
    etudiants[2].note_sys  = 17.0;

    strcpy(etudiants[3].nom, "Petit");
    strcpy(etudiants[3].prenom, "David");
    strcpy(etudiants[3].adresse, "4 place D");
    etudiants[3].note_prog = 10.5;
    etudiants[3].note_sys  = 11.0;

    strcpy(etudiants[4].nom, "Moreau");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "5 chemin E");
    etudiants[4].note_prog = 14.0;
    etudiants[4].note_sys  = 15.0;

    // Affichage des informations
    printf("=== Informations des étudiants ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i+1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation en C : %.2f\n", etudiants[i].note_prog);
        printf("Note Système d'exploitation : %.2f\n\n", etudiants[i].note_sys);
    }

    return 0;
}


