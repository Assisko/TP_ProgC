#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Entrez le premier nombre : ");
    fflush(stdout); // <-- Vide le tampon pour afficher immédiatement
    if (scanf("%d", &num1) != 1) {
        printf("Erreur de saisie pour le premier nombre.\n");
        return 1;
    }

    printf("Entrez le deuxième nombre : ");
    fflush(stdout);
    if (scanf("%d", &num2) != 1) {
        printf("Erreur de saisie pour le deuxième nombre.\n");
        return 1;
    }

    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    fflush(stdout);
    scanf(" %c", &op); // espace avant %c pour ignorer les \n précédents

    switch (op) {
        case '+':
            printf("Résultat : %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Résultat : %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Résultat : %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Résultat : %d / %d = %d\n", num1, num2, num1 / num2);
            else
                printf("Erreur : division par zéro impossible.\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Résultat : %d %% %d = %d\n", num1, num2, num1 % num2);
            else
                printf("Erreur : modulo par zéro impossible.\n");
            break;
        case '&':
            printf("Résultat : %d & %d = %d\n", num1, num2, num1 & num2);
            break;
        case '|':
            printf("Résultat : %d | %d = %d\n", num1, num2, num1 | num2);
            break;
        case '~':
            printf("Résultat : ~%d = %d\n", num1, ~num1);
            printf("Résultat : ~%d = %d\n", num2, ~num2);
            break;
        default:
            printf("Erreur : opérateur inconnu.\n");
    }

    return 0;
}
