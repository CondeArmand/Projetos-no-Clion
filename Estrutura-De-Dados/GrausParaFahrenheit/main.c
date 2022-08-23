#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Informe a temperatura em graus celsius: \n");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    printf("Fahrenheit: %0.1f\n", fahrenheit);

    return 0;
}
