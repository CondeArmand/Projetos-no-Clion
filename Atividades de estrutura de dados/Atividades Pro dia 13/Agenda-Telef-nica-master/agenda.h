#include <stdio.h>
#include <string.h>

struct contato{
    char nome[50];
    char telefone[20];
    char email[50];
};

void cadastrar(struct contato *c, int *qtd);
void listar(struct contato *c, int *qtd);
void buscar(struct contato *c, int *qtd);
int imprimirMenu();