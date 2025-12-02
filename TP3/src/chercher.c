#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int entier_a_chercher;
    int trouve = 0; // 0 = absent, 1 = présent

    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des nombres aléatoires entre 0 et 999
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 1000;
    }

    // Afficher le tableau
    printf("Tableau :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    // Demander l'entier à chercher
    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &entier_a_chercher);

    // Recherche dans le tableau
    for (int i = 0; i < TAILLE; i++) {
        if (tableau[i] == entier_a_chercher) {
            trouve = 1;
            break;
        }
    }

    // Afficher le résultat
    if (trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
