//
// Created by Armando on 27/11/2022.
//

#ifndef LISTADUPLAMENTEENCADEADA_LISTADUPLAMENTEENCADEADA_H
#define LISTADUPLAMENTEENCADEADA_LISTADUPLAMENTEENCADEADA_H

struct listaEncadeada {
    int valor;
    struct listaEncadeada *proximo;
    struct listaEncadeada *anterior;
};

typedef struct listaEncadeada ListaEncadeada;

ListaEncadeada *inserir(ListaEncadeada *lista, int valor);

ListaEncadeada *remover(ListaEncadeada *lista, int valor);

void imprimir(ListaEncadeada *lista);

void imprimirInverso(ListaEncadeada *lista);



#endif //LISTADUPLAMENTEENCADEADA_LISTADUPLAMENTEENCADEADA_H
