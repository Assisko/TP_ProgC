#include <stdio.h>

int main() {
    char str1[100], str2[100], copie[100], concat[200];
    int i;

    // Lecture des chaînes
    printf("Entrez la première chaîne : ");
    scanf("%s", str1);

    printf("Entrez la deuxième chaîne : ");
    scanf("%s", str2);

    // 1️⃣ Longueur de str1
    i = 0;
    while (str1[i] != '\0') i++;
    printf("Longueur de la première chaîne : %d\n", i);

    // 2️⃣ Copie str1 dans copie
    i = 0;
    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0';
    printf("Copie : %s\n", copie);

    // 3️⃣ Concaténation str1 + str2
    i = 0;
    int j = 0;
    while (str1[i] != '\0') {
        concat[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        concat[i] = str2[j];
        i++;
        j++;
    }
    concat[i] = '\0';
    printf("Concaténation : %s\n", concat);

    return 0;
}
