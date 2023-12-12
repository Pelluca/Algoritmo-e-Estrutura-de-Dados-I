#include <stdio.h>
#include <stdlib.h>

//definindo a estrutura do funcionário público
typedef struct funcionariopub {
    char nome[30];
    int idade;
    char email[50];
    float salario;
    char formacao[50];
    char orgao[50];
} funcionariopub;

void preenche(funcionariopub * fp){
    printf("Digite seu nome: \n");
    scanf(" %[^\n]", fp->nome);

    printf("digite sua idade: \n");
    scanf("%d", &fp->idade);

    printf("Digite o email: \n");
    scanf(" %[^\n]", fp->email);

    printf("Digite seu salario \n");
    scanf("%f", &fp->salario);

    printf("Digite sua formacao academica: \n");
    scanf(" %[^\n]", fp->formacao);

    printf("Digite sua instituicao de trabalho: \n");
    scanf(" %[^\n]", fp->orgao);
}

void imprime(funcionariopub * fp) {
    printf("nome: %s\nidade: %d\nemail: %s\nsalario: %f\nformcao: %s\norgao: %s\n",
    fp->nome, fp->idade, fp->email, fp->salario, fp->formacao, fp->orgao);
}

//Alocação dinâmica de struct usando função e typedef
int main() {
    funcionariopub * fp = (funcionariopub*) malloc(sizeof(funcionariopub));
    if (fp == NULL) {
        exit(1);
    }

    preenche(fp);
    imprime(fp);
    free(fp);

    return 0;
}