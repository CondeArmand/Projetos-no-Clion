//
// Created by Armando on 30/11/2022.
//

#include <malloc.h>
#include <stdio.h>
#include "ListaCircular.h"

ListaCircular *criarListaCircular() {
    ListaCircular *lista = (struct ListaCircular *) malloc(sizeof(struct ListaCircular));
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tamanho = 0;
    return lista;
}

void inserir(ListaCircular *lista, int valor) {
    No *novoNo = (No *) malloc(sizeof(struct No));
    novoNo->valor = valor;
    novoNo->proximo = NULL;
    if (lista->inicio == NULL) {
        lista->inicio = novoNo;
        lista->fim = novoNo;
        novoNo->proximo = novoNo;
    } else {
        lista->fim->proximo = novoNo;
        novoNo->proximo = lista->inicio;
        lista->fim = novoNo;
    }
    lista->tamanho++;
}

void remover(ListaCircular *lista, int valor) {
    No *noAtual = lista->inicio;
    No *noAnterior = NULL;
    while (noAtual != NULL) {
        if (noAtual->valor == valor) {
            if (noAnterior == NULL) {
                lista->inicio = noAtual->proximo;
                lista->fim->proximo = noAtual->proximo;
                free(noAtual);
                lista->tamanho--;
                return;
            } else {
                noAnterior->proximo = noAtual->proximo;
                free(noAtual);
                lista->tamanho--;
                return;
            }
        }
        noAnterior = noAtual;
        noAtual = noAtual->proximo;
    }
}

void imprimir(ListaCircular *lista) {
    No *noAtual = lista->inicio;
    do {
        printf("%d ", noAtual->valor);
        noAtual = noAtual->proximo;
    } while (noAtual != lista->inicio);
}



