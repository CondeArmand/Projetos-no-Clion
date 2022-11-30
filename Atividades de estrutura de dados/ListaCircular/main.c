#include <stdio.h>
#include "ListaCircular.h"
int main() {
    ListaCircular *lista = criarListaCircular();
    inserir(lista, 1);
    inserir(lista, 2);
    inserir(lista, 3);
    inserir(lista, 4);
    inserir(lista, 5);
    inserir(lista, 6);
    inserir(lista, 7);

    imprimir(lista);
    return 0;
}
