#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    printf("Informe suas 3 notas: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    fflush(stdin);

    media = (n1 + n2 + n3) / 3;
    printf("Media: %0.1f\n", media);

    return 0;
}
