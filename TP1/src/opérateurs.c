#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // --- Opérateurs arithmétiques ---
    printf("--- Opérateurs arithmétiques ---\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);  // Division entière
    printf("a %% b = %d\n", a % b); // %% pour afficher le symbole %

    // --- Opérateurs logiques et de comparaison ---
    printf("\n--- Opérateurs de comparaison ---\n");
    printf("a == b : %d\n", a == b); // 1 si vrai, 0 si faux
    printf("a >  b : %d\n", a > b);
    printf("a <  b : %d\n", a < b);
    printf("a != b : %d\n", a != b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    // --- Opérateurs logiques combinés ---
    printf("\n--- Opérateurs logiques ---\n");
    printf("(a > b) && (b != 0) : %d\n", (a > b) && (b != 0)); // ET logique
    printf("(a < b) || (b != 0) : %d\n", (a < b) || (b != 0)); // OU logique
    printf("!(a == b)           : %d\n", !(a == b));           // NON logique

    return 0;
}
