//
// Created by Armando on 30/11/2022.
//

#ifndef CONVERSORDECIMALPRABINARIO_DECITOBIN_H
#define CONVERSORDECIMALPRABINARIO_DECITOBIN_H

struct lista {
    int valor;
    struct lista *ant;
    struct lista *prox;
};

typedef struct lista Lista;

struct fila {
    Lista *ini;
    Lista *fim;
};

typedef struct fila Fila;

Fila *cria_fila();

Lista *ins_init(Lista *ini, int v);

void insere_inicio(Fila *f, int v);

void imprime_fila(Fila *f);

void deciToBin(Fila *f, int n);










#endif //CONVERSORDECIMALPRABINARIO_DECITOBIN_H
