//
// Created by Armando on 30/11/2022.
//

#ifndef LISTACIRCULAR_LISTACIRCULAR_H
#define LISTACIRCULAR_LISTACIRCULAR_H

#endif //LISTACIRCULAR_LISTACIRCULAR_H

struct No {
    int valor;
    struct No *proximo;
};

typedef struct No No;

struct ListaCircular {
    No *inicio;
    No *fim;
    int tamanho;
};

typedef struct ListaCircular ListaCircular;

ListaCircular *criarListaCircular();

void inserir(ListaCircular *lista, int valor);

void remover(ListaCircular *lista, int valor);

void imprimir(ListaCircular *lista);
