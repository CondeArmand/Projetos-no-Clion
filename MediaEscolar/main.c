#include <stdio.h>
# include <stdlib.h>
int main() {

    double nota1, nota2, nota3, nota4, media;
    nota1 = nota2 = nota3 = nota4 = media = 0.0;

    printf("============== Media Escolar 1.0 =================\n\n");
    printf("Digite a sua 1 nota bimestral: \n");
    scanf("%lf", &nota1);
    printf("Digite a sua 2 nota bimestral: \n");
    scanf("%lf", &nota2);
    printf("Digite a sua 3 nota bimestral: \n");
    scanf("%lf", &nota3);
    printf("Digite a sua 4 nota bimestral: \n");
    scanf("%lf", &nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;

    printf("A sua media escolar foi de: %f\n\n", media);

    if (media >= 7) {
        printf("Voce foi aprovado.\n\n");
    } else {
        printf("Voce foi reprovado!\n\n");
    }

    return 0;
}
