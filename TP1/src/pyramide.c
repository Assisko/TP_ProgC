#include <stdio.h>

int main() {
    int n = 5;  // Hauteur de la pyramide
    int i, j;

    printf("=== Génération d'une pyramide de nombres (hauteur = %d) ===\n\n", n);

    // Boucle pour chaque ligne (niveau de la pyramide)
    for (i = 1; i <= n; i++) {

        // 1️⃣ Afficher les espaces avant les nombres
        for (j = i; j < n; j++) {
            printf(" ");
        }

        // 2️⃣ Afficher les nombres croissants
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3️⃣ Afficher les nombres décroissants
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // 4️⃣ Passer à la ligne suivante
        printf("\n");
    }

    printf("\nPyramide générée avec succès ! 🎉\n");

    return 0;
}

