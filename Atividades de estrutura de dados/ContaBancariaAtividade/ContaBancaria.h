//
// Created by Armando on 27/11/2022.
//

#ifndef ATIVIDADES_DO_RAFAEL_CONTABANCARIA_H
#define ATIVIDADES_DO_RAFAEL_CONTABANCARIA_H



typedef struct ContaBancaria ContaBancaria;

ContaBancaria *criarConta();

void depositar(ContaBancaria *conta, float valor);

void sacar(ContaBancaria *conta, float valor);

void imprimirSaldo(ContaBancaria *conta);


#endif //ATIVIDADES_DO_RAFAEL_CONTABANCARIA_H



