#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    num1 = 15;
    num2 = 20;

    int soma = num1 + num2;
    printf("soma = %d\n", soma);

    int subtracao = num2 - num1;
    printf("subtracao = %d\n", subtracao);

    int multi = num1 * num2;
    printf("multi = %d\n", multi);

    int div = num2 / 3;
    printf("div = %d\n", div);

    return 0;
}
