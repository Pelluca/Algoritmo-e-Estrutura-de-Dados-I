#include <stdio.h>
#include <stdlib.h>

//definindo a estrutura do professor
struct professor {
    char nome[25];
    int idade;
    int matricula;
    char email[50];
    float salario;
    char instituicao[10];
    char formacao[30];
};

void preenche(struct professor * prof){
    printf("Digite seu nome: \n");
    scanf(" %[^\n]", prof->nome);

    printf("digite sua idade: \n");
    scanf("%d", &prof->idade);

    printf("Digite a matricula: \n");
    scanf("%d", &prof->matricula);

    printf("Digite o email: \n");
    scanf(" %[^\n]", prof->email);

    printf("Digite seu salario \n");
    scanf("%f", &prof->salario);

    printf("Digite sua instituição filiada: \n");
    scanf(" %[^\n]", prof->instituicao);

    printf("Digite sua formação acadêmica: \n");
    scanf(" %[^\n]", prof->formacao);
}

void imprime(struct professor * prof) {
    printf("nome: %s\nidade: %d\nmatricula: %d\nemail: %s\nsalário: %f\ninstituição: %s\nformação: %s\n", 
    prof->nome, prof->idade, prof->matricula, prof->email, prof->salario, prof->instituicao, prof->formacao);
}

//Alocação dinâmica de struct usando função
int main() {
    struct professor * prof = (struct professor*) malloc(sizeof(struct professor));
    if (prof == NULL) {
        exit(1);
    }

    preenche(prof);
    imprime(prof);
    free(prof);

    return 0;
}

//use typedef na questão do funcionário público