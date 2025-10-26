#include <stdio.h>

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    printf("--- Représentation binaire des nombres ---\n\n");

    for (int n = 0; n < taille; n++) {
        unsigned int nombre = nombres[n];
        printf("Nombre : %u\nBinaire : ", nombre);

        // On affiche les bits de 31 à 0 (pour un int sur 32 bits)
        for (int i = 31; i >= 0; i--) {
            unsigned int bit = (nombre >> i) & 1;  // Décalage à droite + masquage
            printf("%u", bit);

            // Espace tous les 4 bits pour la lisibilité
            if (i % 4 == 0)
                printf(" ");
        }

        printf("\n\n");
    }

    return 0;
}
