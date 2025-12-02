#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int entier_a_chercher;
    
    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des nombres aléatoires et trier
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 1000;
    }

    // Tri croissant simple (tri à bulles)
    for (int i = 0; i < TAILLE - 1; i++) {
        for (int j = 0; j < TAILLE - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // Afficher le tableau trié
    printf("Tableau trié :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    // Demander l'entier à chercher
    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &entier_a_chercher);

    // Recherche dichotomique
    int gauche = 0, droite = TAILLE - 1;
    int trouve = 0;

    while (gauche <= droite) {
        int milieu = (gauche + droite) / 2;

        if (tableau[milieu] == entier_a_chercher) {
            trouve = 1;
            break;
        } else if (tableau[milieu] < entier_a_chercher) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
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
