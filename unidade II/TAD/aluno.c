/*TAD: Aluno*/
#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>

struct aluno{
    char nome[20];
    int matricula;
    float IRA;
};

Aluno * recebe_dados(void) {
    Aluno * estudante = (Aluno*) malloc(sizeof(Aluno));
    if(estudante == NULL) {
        printf("sem memoria");
        exit(0);
    }
    
    printf("informe o nome do aluno:\n");
    scanf(" %[^\n]", estudante->nome);

    printf("informe a matricula:\n");
    scanf("%d", &estudante->matricula);

    printf("informe o IRA:\n");
    scanf("%f", &estudante->IRA);

    return estudante;
}

void imprime(Aluno * aluno) {
    printf("nome:%s\nmatricula: %d\nIRA: %f\n",
    aluno->nome, aluno->matricula, aluno->IRA);
}

void libera(Aluno * estudante) {
    free(estudante);
}
