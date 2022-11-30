//
// Created by Armando on 30/11/2022.
//

#ifndef LISTACIRCULARDUPLAMENTEENCADEADA_LISTACIRCULARDUPLAMENTEENCADEADA_H
#define LISTACIRCULARDUPLAMENTEENCADEADA_LISTACIRCULARDUPLAMENTEENCADEADA_H

#endif //LISTACIRCULARDUPLAMENTEENCADEADA_LISTACIRCULARDUPLAMENTEENCADEADA_H

struct ListaCircularDuplamenteEncadeada {
    int valor;
    struct ListaCircularDuplamenteEncadeada *proximo;
    struct ListaCircularDuplamenteEncadeada *anterior;
};

typedef struct ListaCircularDuplamenteEncadeada ListaCircularDuplamenteEncadeada;

ListaCircularDuplamenteEncadeada *criarListaCircularDuplamenteEncadeada();

void inserir(ListaCircularDuplamenteEncadeada *lista, int valor);

void remover(ListaCircularDuplamenteEncadeada *lista, int valor);

void imprimir(ListaCircularDuplamenteEncadeada *lista);
