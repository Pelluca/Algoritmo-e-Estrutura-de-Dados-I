#include <stdio.h>
#include <stdlib.h>

//definindo a estrutura do aluno
struct aluno {
    char nome[25];
    int idade;
    int matricula;
    char email[50];
};

//Alocação estática
int main() {
    struct aluno estudante;
    printf("Digite seu nome: \n");
    scanf(" %[^\n]", estudante.nome);

    printf("digite sua idade: \n");
    scanf("%d", &estudante.idade);

    printf("Digite a matricula: \n");
    scanf("%d", &estudante.matricula);

    printf("Digite o email: \n");
    scanf(" %[^\n]", estudante.email);
    return 0;
}