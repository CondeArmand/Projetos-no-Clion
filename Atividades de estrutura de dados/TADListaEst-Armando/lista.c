#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


struct lista {
    int quant;
    int vet[MAX];
};


Lista *criar() {
    Lista *l;
    l = (Lista *) malloc(sizeof(Lista));
    if (l != NULL) {
        l->quant = 0;
    }

    return l;

}

void clear(Lista *l) {
    free(l);
}

void append(Lista *l, int valor) {
    l->vet[l->quant] = valor;
    l->quant++;
}

void insert(Lista *l, int valor) {
    
    for (int i = l->quant - 1; i >= 0; i--) {
        l->vet[i + 1] = l->vet[i];
    }
    l->vet[0] = valor;
    l->quant++;

}

void insert_sorted(Lista *l, int valor) {
    int i = 0;
    while (i < l->quant && l->vet[i] < valor) {
        i++;
    }
    for (int j = l->quant - 1; j >= i; j--) {
        l->vet[j + 1] = l->vet[j];
    }
    l->vet[i] = valor;
    l->quant++;
}

int get(Lista *l, int index) {
    return l->vet[index];
}

int full(Lista *l) {
    return l->quant == MAX;
}

int empty(Lista *l) {
    return l->quant == 0;
}

void removeFromList(Lista *l, int index) {
    for (int i = index; i < l->quant - 1; i++) {
        l->vet[i] = l->vet[i + 1];
    }
    l->quant--;
}

int size(Lista *l) {
    return l->quant;
}

void print(Lista *l) {
    for (int i = 0; i < l->quant; i++) {
        printf("%d ", l->vet[i]);
    }
    printf("\n");
}