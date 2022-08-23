#include <stdio.h>

int main() {
    int idadeAnos, idadeDias;

    printf("Informe sua idade em anos:\n");
    scanf("%d", &idadeAnos);
    fflush(stdin);

    idadeDias = idadeAnos * 365;
    printf("Sua idade em dias eh: %d\n", idadeDias);
    return 0;
}
