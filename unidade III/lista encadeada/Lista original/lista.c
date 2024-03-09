#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

struct lista {
    int info;
    Lista * prox_elemento;
};

Lista * cria_lista(void) {
    return NULL;
}

Lista * insere_elemento(Lista * lista, int valor) {
    //aloca novo nó na lista encadeada
    Lista * novo_no = (Lista*) malloc(sizeof(Lista));
    if(novo_no == NULL) {
        exit(1);
    }
    //Adiciona valor no campo info
    novo_no->info = valor;
    //Conecta o nó a lista
    novo_no->prox_elemento = lista;
    return novo_no;
}

void imprime_elemento(Lista * lista) {
    Lista * index;
    for(index = lista; index != NULL; index = index->prox_elemento) {
        printf("%d\n", index->info);
    }
}

int verifica_lista(Lista * lista) {
    if(lista == NULL) {
        return 1;
    }
    return 0;
}

int busca_elemento(Lista * lista, int valor) {
    Lista * procura;
    for(procura = lista; procura != NULL; procura = procura->prox_elemento) {
        if(procura->info == valor) {
            return procura->info;
        }
    }
    return 0;
}

 