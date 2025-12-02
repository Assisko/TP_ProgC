#include <stdio.h>

int main() {
    int d = 0x10001000;  // valeur à tester (modifiable)

    // Positions des bits (en comptant depuis la gauche sur 32 bits)
    int bit4  = 28;  // 4ème bit en partant de la gauche
    int bit20 = 12;  // 20ème bit en partant de la gauche

    // Extraction des bits
    int b4  = (d >> bit4) & 1;   // récupère le bit 28
    int b20 = (d >> bit20) & 1;  // récupère le bit 12

    // Vérification : les deux bits doivent être égaux à 1
    int resultat = (b4 == 1 && b20 == 1) ? 1 : 0;

    // Affichage du résultat
    printf("%d\n", resultat);

    return 0;
}
