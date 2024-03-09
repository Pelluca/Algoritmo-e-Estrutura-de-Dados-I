#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

struct Aluno {
    char nome[100];
    int matricula;
    Disciplina* disciplinas[10];
    int num_disciplinas;
};

Aluno* cria_aluno(char nome[], int matricula) {
    Aluno* aluno = (Aluno*)malloc(sizeof(Aluno));
    if (aluno == NULL) {
        printf("Erro");
        exit(1);
    }
    strcpy(aluno->nome, nome);
    aluno->matricula = matricula;
    aluno->num_disciplinas = 0;

    return aluno;
}

void matricula_disciplina(Aluno* aluno, Disciplina* disciplina) {
    if (aluno->num_disciplinas < 10) {
        for (int i = 0; i < aluno->num_disciplinas; i++) {
            if (aluno->disciplinas[i]->codigo == disciplina->codigo) {
                printf("O aluno ja se encontra matriculado na disciplina %s\n", disciplina->nome);
                return;
            }
        }
        aluno->disciplinas[aluno->num_disciplinas] = disciplina;
        aluno->num_disciplinas++;
    } else {
        printf("Limite de disciplinas atingido para este aluno\n");
    }
}

void exclui_aluno(Aluno* aluno) {
    free(aluno);
}

void exibe_info_aluno(Aluno* aluno) {
    printf("Nome do aluno: %s\n", aluno->nome);
    printf("Matricula do aluno: %d\n", aluno->matricula);
    printf("Disciplinas matriculadas:\n");
    
    for (int i = 0; i < aluno->num_disciplinas; i++) {
        printf("- %s\n", aluno->disciplinas[i]->nome);
    }
}
