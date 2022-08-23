#include <stdio.h>
#include <ctype.h>
int main() {

    double peso, altura, imc;
    char c = 1;
    do {
        fflush(stdin);
        fflush(stdout);

        printf("Informe seu peso: \n");
        scanf("%lf",  &peso);
        fflush(stdin);
        printf("Informe sua altura: \n");
        scanf("%lf",  &altura);
        fflush(stdin);

        imc = peso / (altura*altura);
        printf("Seu imc eh de %0.1f\n", imc);

        if (imc < 18.6) {
            printf("Voce esta abaixo do peso");
        } else if (imc >= 18.6 && imc <= 24.9 ) {
            printf("Voce esta no peso ideal (Parabens)");
        } else if (imc >= 25.0 && imc <= 29.9) {
            printf("Voce esta levemente acima do peso");
        } else if (imc >= 30.0 && imc <= 34.9) {
            printf("Obesidade de grau I (Tome cuidado)");
        } else if (imc >= 35.0 && imc <= 39.9) {
            printf("Obesidade de grau II (Cuidado severo)");
        } else {
            printf("Obesidade de grau III (Como voce ainda esta vivo?)");
        }

        printf("\nVoce deseja repetir a operacao? S(1) / N(0)\n");
        scanf("%d", &c);

    }
    while (c != 0);



    return 0;
}
