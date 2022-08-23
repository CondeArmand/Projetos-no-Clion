#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, soma, subtracao, multi, div;

    printf("Calculadora 1.0\nEntre dois numeros a serem processados\n");
    scanf("%d%d", &num1, &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;

    printf("A soma e: %i\n", soma);
    printf("A subtracao: %i\n", subtracao);
    printf("A multiplicacao: %i\n", multi);
    printf("A divisao e: %i\n", div);

    return 0;
}
