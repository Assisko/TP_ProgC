#include <stdio.h>

int main() {
    int compteur = 5; // Tu peux modifier cette valeur (< 10)

    printf("--- Triangle avec des boucles FOR ---\n\n");

    // Première version avec des boucles for
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            // On alterne entre * et #
            if (i % 2 == 0 && j % 2 == 0)
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }

    printf("\n--- Triangle avec une boucle WHILE ---\n\n");

    // Deuxième version avec une boucle while
    int i = 1;
    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            if (i % 2 == 0 && j % 2 == 0)
                printf("# ");
            else
                printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
