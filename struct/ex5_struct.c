#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa {
    char nome[20];
    int idade;
}Pessoa;

void dados_pessoas(Pessoa * p) {
    /*
    função que preenche os dados de uma variável
    do tipo Pessoa (struct)
    */
    printf("informe seu nome: ");
    scanf("%[^\n]", p->nome);
    printf("informe sua idade: ");
    scanf("%d", &p->idade);
}

int main(void) {
    Pessoa * pessoa = malloc(sizeof(Pessoa)); //alocação dinâmica da struct
    free(pessoa);
    dados_pessoas(pessoa);

    return 0;
}