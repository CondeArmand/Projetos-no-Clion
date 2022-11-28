#include <stdio.h>
#include "ListaDuplamenteEncadeada.h"

int main(void) {
    ListaEncadeada *lista = NULL;
    int opcao, valor;
    do {
        printf("1 - Inserir\n");
        printf("2 - Remover\n");
        printf("3 - Imprimir\n");
        printf("4 - Imprimir Inverso\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Valor: ");
                scanf("%d", &valor);
                lista = inserir(lista, valor);
                break;
            case 2:
                printf("Valor: ");
                scanf("%d", &valor);
                lista = remover(lista, valor);
                break;
            case 3:
                imprimir(lista);
                break;
            case 4:
                imprimirInverso(lista);
                break;
        }
        printf("\n");
    } while (opcao != 0);
}


