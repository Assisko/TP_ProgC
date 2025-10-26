#include <stdio.h>

int main() {
    printf("--- Tailles des types de base en octets ---\n\n");

    // Types de caractères
    printf("signed char      : %lu octets\n", sizeof(signed char));
    printf("unsigned char    : %lu octets\n\n", sizeof(unsigned char));

    // Types entiers courts
    printf("signed short     : %lu octets\n", sizeof(signed short));
    printf("unsigned short   : %lu octets\n\n", sizeof(unsigned short));

    // Types entiers normaux
    printf("signed int       : %lu octets\n", sizeof(signed int));
    printf("unsigned int     : %lu octets\n\n", sizeof(unsigned int));

    // Types entiers longs
    printf("signed long int  : %lu octets\n", sizeof(signed long int));
    printf("unsigned long int: %lu octets\n\n", sizeof(unsigned long int));

    // Types entiers très longs
    printf("signed long long int  : %lu octets\n", sizeof(signed long long int));
    printf("unsigned long long int: %lu octets\n\n", sizeof(unsigned long long int));

    // Types à virgule flottante
    printf("float            : %lu octets\n", sizeof(float));
    printf("double           : %lu octets\n", sizeof(double));
    printf("long double      : %lu octets\n", sizeof(long double));

    return 0;
}
