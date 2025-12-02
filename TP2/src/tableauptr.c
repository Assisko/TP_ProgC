#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main() {
    int tabInt[TAILLE];
    float tabFloat[TAILLE];
    int *pInt;
    float *pFloat;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage des tableaux avec des valeurs aléatoires
    for (int i = 0; i < TAILLE; i++) {
        tabInt[i] = rand() % 100;           // valeurs entières entre 0 et 99
        tabFloat[i] = (rand() % 1000) / 100.0f; // valeurs float entre 0.00 et 9.99
    }

    // Affichage des tableaux avant multiplication
    printf("Tableau d'entiers avant multiplication :\n");
    for (pInt = tabInt; pInt < tabInt + TAILLE; pInt++)
        printf("%d ", *pInt);
    printf("\n");

    printf("Tableau de floats avant multiplication :\n");
    for (pFloat = tabFloat; pFloat < tabFloat + TAILLE; pFloat++)
        printf("%.2f ", *pFloat);
    printf("\n\n");

    // Multiplication par 3 des valeurs dont l'indice est divisible par 2 (indices 0,2,4,...)
    int index = 0;
    for (pInt = tabInt; pInt < tabInt + TAILLE; pInt++, index++) {
        if (index % 2 == 0)
            *pInt *= 3;
    }

    index = 0;
    for (pFloat = tabFloat; pFloat < tabFloat + TAILLE; pFloat++, index++) {
        if (index % 2 == 0)
            *pFloat *= 3;
    }

    // Affichage après multiplication
    printf("Tableau d'entiers après multiplication :\n");
    for (pInt = tabInt; pInt < tabInt + TAILLE; pInt++)
        printf("%d ", *pInt);
    printf("\n");

    printf("Tableau de floats après multiplication :\n");
    for (pFloat = tabFloat; pFloat < tabFloat + TAILLE; pFloat++)
        printf("%.2f ", *pFloat);
    printf("\n");

    return 0;
}
