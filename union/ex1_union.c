#include <stdio.h>
#include <stdlib.h>

//Estrutura para armazenar um documento por vez
typedef union documentos{
    char rg[15];
    char cpf[15];
}Documentos;

typedef struct pessoa {
    char nome[20];
    int idade;
    Documentos doc;
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

    int opcao;

    printf("digite 1 para CPF ou 2 para RG");
    scanf("%d", &opcao);
    
    switch (opcao) {
    case 1:
        scanf("%[^\n]", p->doc.cpf);
        break;

    case 2:
        scanf("%[^\n]", p->doc.rg);
        break;
    
    default:
        break;
    }

    printf("cpf: %s rg: %s", p->doc.cpf, p->doc.rg);
}

int main(void) {
    Pessoa * pessoa = malloc(sizeof(Pessoa)); //alocação dinâmica da struct
    free(pessoa);
    dados_pessoas(pessoa);
    

    return 0;
}