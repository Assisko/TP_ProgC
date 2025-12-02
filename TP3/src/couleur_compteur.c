#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned char r, g, b, a;
} Couleur;

typedef struct {
    Couleur couleur;
    int compteur;
} CouleurCompteur;

int couleurs_egales(Couleur c1, Couleur c2) {
    return (c1.r == c2.r) && (c1.g == c2.g) &&
           (c1.b == c2.b) && (c1.a == c2.a);
}

int main() {
    Couleur tableau[100];
    CouleurCompteur distinctes[100];
    int nbDistinctes = 0;

    // Générer des couleurs aléatoires
    for (int i = 0; i < 100; i++) {
        tableau[i].r = rand() % 256;
        tableau[i].g = rand() % 256;
        tableau[i].b = rand() % 256;
        tableau[i].a = rand() % 256;
    }

    // Compter les couleurs distinctes
    for (int i = 0; i < 100; i++) {
        int trouve = 0;
        for (int j = 0; j < nbDistinctes; j++) {
            if (couleurs_egales(tableau[i], distinctes[j].couleur)) {
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[nbDistinctes].couleur = tableau[i];
            distinctes[nbDistinctes].compteur = 1;
            nbDistinctes++;
        }
    }

    // Afficher les couleurs distinctes et leur compteur
    printf("Couleurs distinctes et leur occurrence :\n");
    for (int i = 0; i < nbDistinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinctes[i].couleur.r,
               distinctes[i].couleur.g,
               distinctes[i].couleur.b,
               distinctes[i].couleur.a,
               distinctes[i].compteur);
    }

    return 0;
}
