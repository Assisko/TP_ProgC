#include <stdio.h>

int main() {
    // Types de base
    int i;
    char c;
    float f;

    // Pointeurs
    int *pi;
    int **ppi;
    char *pc;
    char **ppc;
    char ***pppc;
    float *pf;
    float **ppf;
    float ***pppf;

    printf("Taille des types de base :\n");
    printf("int : %zu octets\n", sizeof(i));
    printf("char : %zu octets\n", sizeof(c));
    printf("float : %zu octets\n", sizeof(f));

    printf("\nTaille des pointeurs :\n");
    printf("int* : %zu octets\n", sizeof(pi));
    printf("int** : %zu octets\n", sizeof(ppi));
    printf("char* : %zu octets\n", sizeof(pc));
    printf("char** : %zu octets\n", sizeof(ppc));
    printf("char*** : %zu octets\n", sizeof(pppc));
    printf("float* : %zu octets\n", sizeof(pf));
    printf("float** : %zu octets\n", sizeof(ppf));
    printf("float*** : %zu octets\n", sizeof(pppf));

    return 0;
}
