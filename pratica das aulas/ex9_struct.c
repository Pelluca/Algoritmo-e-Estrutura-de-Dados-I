#include <stdio.h>
#include <stdlib.h>

//definindo a estrutura do aluno
struct aluno {
    char nome[25];
    int idade;
    int matricula;
    char email[50];
};

void preenche(struct aluno * estudante){
    printf("Digite seu nome: \n");
    scanf(" %[^\n]", estudante->nome);

    printf("digite sua idade: \n");
    scanf("%d", &estudante->idade);

    printf("Digite a matricula: \n");
    scanf("%d", &estudante->matricula);

    printf("Digite o email: \n");
    scanf(" %[^\n]", estudante->email);
}

void imprime(struct aluno * estudante) {
    printf("nome: %s\nidade: %d\nmatricula: %d\nemail: %s\n", 
    estudante->nome, estudante->idade, estudante->matricula, estudante->email);
}

//Alocação dinâmica de struct usando função
int main() {
    struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));
    if (estudante == NULL) {
        exit(1);
    }

    preenche(estudante);
    imprime(estudante);
    free(estudante);

    return 0;
}