#include <stdio.h>

int main() {
    int d = 0x00100008; // exemple
    int bit4 = (d >> 27) & 1;   // 4ème bit en partant de gauche
    int bit20 = (d >> 11) & 1;  // 20ème bit en partant de gauche

    if (bit4 == 1 && bit20 == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
