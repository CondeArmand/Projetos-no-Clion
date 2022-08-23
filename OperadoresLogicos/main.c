#include <stdio.h>
#include <stdlib.h>

int main() {

    int iJ, iI;
    iJ = 17;
    iI = 60;

    int idade = 0;
    printf("Digite a idade de uma pessoa:\n");
    scanf(  "%i", &idade);

    if (idade <= iJ) {
        printf("\nA idade informada eh de um jovem.\n");
    } else if (idade >= iI) {
        printf("\nA idade informada eh de uma pessoa idosa.\n");
    } else {
        printf("A idade informada eh de uma pessoa de meia-idade.\n");
    }
    return 0;
}
