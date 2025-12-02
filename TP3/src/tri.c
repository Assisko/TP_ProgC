#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int temp;

    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des valeurs aléatoires entre 0 et 999
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 1000;
    }

    // Afficher le tableau non trié
    printf("Tableau non trié :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Tri à bulles
    for (int i = 0; i < TAILLE - 1; i++) {
        for (int j = 0; j < TAILLE - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // Afficher le tableau trié
    printf("Tableau trié par ordre croissant :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
