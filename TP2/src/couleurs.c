#include <stdio.h>

// Définition de la structure RGBA
struct Couleur {
    unsigned char R;
    unsigned char G;
    unsigned char B;
    unsigned char A;
};

int main() {
    // Initialisation du tableau de 10 couleurs avec notation hexadécimale
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0xff, 0xff, 0x00, 0xff},
        {0xff, 0x00, 0xff, 0xff},
        {0x00, 0xff, 0xff, 0xff},
        {0x80, 0x80, 0x80, 0xff},
        {0xff, 0xa5, 0x00, 0xff} // orange
    };

    // Affichage des couleurs
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].R);
        printf("Vert : %d\n", couleurs[i].G);
        printf("Bleu : %d\n", couleurs[i].B);
        printf("Alpha : %d\n\n", couleurs[i].A);
    }

    return 0;
}
