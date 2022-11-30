//
// Created by Armando on 30/11/2022.
//

#include <malloc.h>
#include <stdio.h>
#include "ListaCircularDuplamenteEncadeada.h"

ListaCircularDuplamenteEncadeada *criarListaCircularDuplamenteEncadeada() {
    ListaCircularDuplamenteEncadeada *lista = (ListaCircularDuplamenteEncadeada *) malloc(sizeof(ListaCircularDuplamenteEncadeada));
    lista->proximo = lista;
    lista->anterior = lista;
    return lista;
}

void inserir(ListaCircularDuplamenteEncadeada *lista, int valor) {
    ListaCircularDuplamenteEncadeada *novo = (ListaCircularDuplamenteEncadeada *) malloc(sizeof(ListaCircularDuplamenteEncadeada));
    novo->valor = valor;
    novo->proximo = lista->proximo;
    novo->anterior = lista;
    lista->proximo->anterior = novo;
    lista->proximo = novo;
}

void remover(ListaCircularDuplamenteEncadeada *lista, int valor) {
    ListaCircularDuplamenteEncadeada *aux = lista->proximo;
    while (aux != lista && aux->valor != valor) {
        aux = aux->proximo;
    }
    if (aux != lista) {
        aux->anterior->proximo = aux->proximo;
        aux->proximo->anterior = aux->anterior;
        free(aux);
    }
}

void imprimir(ListaCircularDuplamenteEncadeada *lista) {
    ListaCircularDuplamenteEncadeada *aux = lista->anterior;
    while (aux != lista) {
        printf("%d ", aux->valor);
        aux = aux->anterior;
    }
    printf("\n");
}