#include <stdio.h>
#include <stdlib.h>

//definindo a estrutura do aluno
struct aluno {
    char nome[25];
    int idade;
    int matricula;
    char email[50];
};

//Alocação dinâmica de struct pois a variável agora é um ponteiro
int main() {
    struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));
    printf("Digite seu nome: \n");
    scanf(" %[^\n]", estudante->nome);

    printf("digite sua idade: \n");
    scanf("%d", &estudante->idade);

    printf("Digite a matricula: \n");
    scanf("%d", &estudante->matricula);

    printf("Digite o email: \n");
    scanf(" %[^\n]", estudante->email);
    return 0;
}