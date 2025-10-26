
#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Lecture des valeurs
    printf("Entrez le premier nombre : ");
    scanf("%d", &num1);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &num2);

    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op); // Espace avant %c pour ignorer les caractères de retour à la ligne

    // Structure switch : choix entre
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
                printf("Erreur : division par zéro impossible !\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Résultat : %d %% %d = %d\n", num1, num2, num1 % num2);
            else
                printf("Erreur : modulo par zéro impossible !\n");
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
            printf("Opérateur non reconnu.\n");
    }

    return 0;
}
