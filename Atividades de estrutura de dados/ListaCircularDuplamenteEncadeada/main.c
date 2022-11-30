#include <stdio.h>
#include "ListaCircularDuplamenteEncadeada.h"

int main() {
    ListaCircularDuplamenteEncadeada *lista = criarListaCircularDuplamenteEncadeada();
    inserir(lista, 1);
    inserir(lista, 2);
    inserir(lista, 3);
    inserir(lista, 4);
    inserir(lista, 5);
    imprimir(lista);
}
