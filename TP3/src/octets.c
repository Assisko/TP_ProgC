#include <stdio.h>

int main() {
    short s = 0x0203;
    int i = 0x01020304;
    long int l = 0x0102030405060708;
    float f = 3.14f;
    double d = 3.14;
    long double ld = 3.14L;

    unsigned char *ptr;
    int j;

    // short
    printf("Octets de short :\n");
    ptr = (unsigned char *)&s;
    for (j = 0; j < sizeof(s); j++) {
        printf("%02x ", ptr[j]);
    }
    printf("\n\n");

    // int
    printf("Octets de int :\n");
    ptr = (unsigned char *)&i;
    for (j = 0; j < sizeof(i); j++) {
        printf("%02x ", ptr[j]);
    }
    printf("\n\n");

    // long int
    printf("Octets de long int :\n");
    ptr = (unsigned char *)&l;
    for (j = 0; j < sizeof(l); j++) {
        printf("%02x ", ptr[j]);
    }
    printf("\n\n");

    // float
    printf("Octets de float :\n");
    ptr = (unsigned char *)&f;
    for (j = 0; j < sizeof(f); j++) {
        printf("%02x ", ptr[j]);
    }
    printf("\n\n");

    // double
    printf("Octets de double :\n");
    ptr = (unsigned char *)&d;
    for (j = 0; j < sizeof(d); j++) {
        printf("%02x ", ptr[j]);
    }
    printf("\n\n");

    // long double
    printf("Octets de long double :\n");
    ptr = (unsigned char *)&ld;
    for (j = 0; j < sizeof(ld); j++) {
        printf("%02x ", ptr[j]);
    }
    printf("\n");

    return 0;
}
