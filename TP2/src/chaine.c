#include <stdio.h>

int main() {
    char str1[100], str2[100], copie[100], concatenation[200];
    int i, j;

    // Lecture des chaînes
    printf("Entrez la première chaîne : ");
    scanf("%99[^\n]", str1);  // lit une ligne entière
    getchar(); // consomme le retour chariot

    printf("Entrez la deuxième chaîne : ");
    scanf("%99[^\n]", str2);

    // -----------------------------
    // 1️⃣ CALCUL DE LA LONGUEUR
    // -----------------------------
    int longueur = 0;
    while (str1[longueur] != '\0') {
        longueur++;
    }

    printf("\nLongueur de la première chaîne : %d\n", longueur);

    // -----------------------------
    // 2️⃣ COPIE DE CHAÎNE
    // -----------------------------
    i = 0;
    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0';  // fin de chaîne

    printf("Copie de la première chaîne : %s\n", copie);

    // -----------------------------
    // 3️⃣ CONCATÉNATION
    // -----------------------------
    
    // Copie str1 dans concatenation
    i = 0;
    while (str1[i] != '\0') {
        concatenation[i] = str1[i];
        i++;
    }

    // Ajout de str2 à la suite
    j = 0;
    while (str2[j] != '\0') {
        concatenation[i] = str2[j];
        i++;
        j++;
    }

    concatenation[i] = '\0'; // fin de chaîne

    printf("Concaténation des deux chaînes : %s\n", concatenation);

    return 0;
}
