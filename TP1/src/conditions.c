#include <stdio.h>

int main() {
    int somme = 0; // Variable pour stocker la somme

    for (int i = 1; i <= 1000; i++) {
        // Si le nombre est divisible par 11, on passe au suivant
        if (i % 11 == 0) {
            continue;
        }

        // Si le nombre est divisible par 5 ou 7, on l'ajoute à la somme
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // Si la somme dépasse 5000, on arrête la boucle
        if (somme > 5000) {
            printf("Somme dépassant 5000 à i = %d\n", i);
            break;
        }
    }

    // Affichage de la somme finale
    printf("Somme finale : %d\n", somme);

    return 0;
}
