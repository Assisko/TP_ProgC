#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Saisie des deux nombres
    printf("Entrez le premier nombre : ");
    scanf("%d", &num1);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &num2);

    // Saisie de l'opérateur
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op); // espace avant %c pour ignorer le retour à la ligne

    // Structure switch
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
