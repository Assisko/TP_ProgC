#include <stdio.h>
#include <stdint.h>

int main() {
    // Déclaration des variables de base
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x123456789ABCDEF0;
    long long int lli = 0x123456789ABCDEF0;
    float f = 1.0f;
    double d = 1.0;
    long double ld = 1.0;

    // Déclaration des pointeurs
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("=== Avant manipulation ===\n\n");

    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur de s : %04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur de li : %016lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli : %p, Valeur de lli : %016llx\n", (void*)plli, (unsigned long long)lli);
    
    // Pour float et double, on affiche la représentation binaire en hex
    printf("Adresse de f : %p, Valeur de f : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur de d : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur de ld : %016llx\n", (void*)pld, *(unsigned long long*)&ld);

    // Manipulation via pointeurs
    *pc += 1;
    *ps += 1;
    *pi += 1;
    *pli += 1;
    *plli += 1;
    *pf = 0.5f;
    *pd = 0.5;
    *pld = 0.5;

    printf("\n=== Après manipulation ===\n\n");

    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur de s : %04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur de li : %016lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli : %p, Valeur de lli : %016llx\n", (void*)plli, (unsigned long long)lli);
    
    printf("Adresse de f : %p, Valeur de f : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur de d : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur de ld : %016llx\n", (void*)pld, *(unsigned long long*)&ld);

    return 0;
}
