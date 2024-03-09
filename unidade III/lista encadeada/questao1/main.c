#include "lista.c"

int main(void) {
    //criando uma lista encadeada
    Lista * lista_encadeada = cria_lista();
    //inserindo o valor 3 na lista
    lista_encadeada = insere_elemento(lista_encadeada, 3);
    lista_encadeada = insere_elemento(lista_encadeada, 4);
    lista_encadeada = insere_elemento(lista_encadeada, 5);
    lista_encadeada = insere_elemento(lista_encadeada, 6);
    lista_encadeada = insere_elemento(lista_encadeada, 7);
    lista_encadeada = insere_elemento(lista_encadeada, 8);
    lista_encadeada = insere_elemento(lista_encadeada, 9);

    imprime_elemento(lista_encadeada);

    int nos_maiores = maiores(lista_encadeada, 3);

    printf("Numero de nos maiores: %d\n", nos_maiores);

    return 0;
}