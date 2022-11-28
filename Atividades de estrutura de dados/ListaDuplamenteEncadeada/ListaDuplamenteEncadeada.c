//
// Created by Armando on 27/11/2022.
//

#include <malloc.h>
#include <stdio.h>
#include "ListaDuplamenteEncadeada.h"

ListaEncadeada *inserir(ListaEncadeada *lista, int valor) {
    ListaEncadeada *novo = (ListaEncadeada *) malloc(sizeof(ListaEncadeada));
    novo->valor = valor;
    novo->proximo = lista;
    novo->anterior = NULL;
    if (lista != NULL) {
        lista->anterior = novo;
    }
    return novo;
}

ListaEncadeada *remover(ListaEncadeada *lista, int valor) {
    ListaEncadeada *aux = lista;
    while (aux != NULL && aux->valor != valor) {
        aux = aux->proximo;
    }
    if (aux == NULL) {
        return lista;
    }
    if (aux->anterior == NULL) {
        lista = aux->proximo;
    } else {
        aux->anterior->proximo = aux->proximo;
    }
    if (aux->proximo != NULL) {
        aux->proximo->anterior = aux->anterior;
    }
    free(aux);
    return lista;
}

void imprimir(ListaEncadeada *lista) {
    ListaEncadeada *aux = lista;
    if (aux) {
        do {
            printf("%d ", aux->valor);
            aux = aux->proximo;
        } while (aux != NULL);
        }
    }

void imprimirInverso(ListaEncadeada *lista) {
        ListaEncadeada *aux = lista;
        if (aux) {
            while (aux->proximo != NULL) {
                aux = aux->proximo;
            }
            do {
                printf("%d ", aux->valor);
                aux = aux->anterior;
            } while (aux != NULL);
        }
    }



