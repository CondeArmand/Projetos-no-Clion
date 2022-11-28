//
// Created by Armando on 27/11/2022.
//

#include "ContaBancaria.h"
#include <stdio.h>
#include <malloc.h>


struct ContaBancaria {
    int numero;
    float saldo;
};

ContaBancaria *criarConta() {
    ContaBancaria *conta = (ContaBancaria *) malloc(sizeof(ContaBancaria));
    conta->numero = 0001;
    conta->saldo = 10;
    return conta;
}

void depositar(ContaBancaria *conta, float valor) {
    conta->saldo += valor;
}

void sacar(ContaBancaria *conta, float valor) {
    conta->saldo -= valor;
}

void imprimirSaldo(ContaBancaria *conta) {
    printf("Saldo: %.2f\n", conta->saldo);
}

