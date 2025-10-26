#include <stdio.h>

int main() {
    int a = 2;   // Base
    int b = 3;   // Exposant
    int resultat = 1;

    // Calcul de a^b
    for (int i = 1; i <= b; i++) {
        resultat *= a;
    }

    // Affichage du résultat
    printf("%d élevé à la puissance %d = %d\n", a, b, resultat);

    return 0;
}
