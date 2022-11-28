#include <stdio.h>
#include "ContaBancaria.h"

int main() {
        ContaBancaria *conta = criarConta();
        int opcao;
        float valor;
        do {
            printf("1 - Depositar\n");
            printf("2 - Sacar\n");
            printf("3 - Imprimir saldo\n");
            printf("4 - Sair\n");
            printf("Opção: ");
            scanf("%d", &opcao);
            switch (opcao) {
                case 1:
                    printf("Valor: ");
                    scanf("%f", &valor);
                    depositar(conta, valor);
                    break;
                case 2:
                    printf("Valor: ");
                    scanf("%f", &valor);
                    sacar(conta, valor);
                    break;
                case 3:
                    imprimirSaldo(conta);
                    break;
                case 4:
                    break;
                default:
                    printf("Opção inválida!\n");
            }
        } while (opcao != 4);
        return 0;
    }