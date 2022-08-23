#include <stdio.h>

int main() {
    int num1, num2, num3;
    char let1, let2, let3;

    printf("Informe o primeiro, segundo e terceiro numero:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    fflush(stdin);

    printf("Informe a primeira, segunda e terceira letra:\n");
    scanf("%c %c %c", &let1, &let2, &let3);


    printf("\nAs variaveis inteiras contem os numeros %d, %d e %d.\n", num1, num2, num3);
    printf("As variaveis caracteres contem os valores %c, %c e %c.\n", let1, let2, let3);

    return 0;
}
