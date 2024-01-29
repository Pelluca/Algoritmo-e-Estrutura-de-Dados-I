#include <stdio.h>
#include <stdlib.h>
#define ALUNOS 40

typedef struct aluno {
    int matricula;
    char nome[80];
    char turma;
    float notas[3];
    float media;
}Aluno;

void matricula(int n,Aluno** alunos) {
    if (n >= ALUNOS) {
        printf("exedido o numero de vagas\n");
        return;
    }

    Aluno* novo_aluno = (Aluno*)malloc(sizeof(Aluno));

    printf("Digite a matrícula do aluno: ");
    scanf("%d", &novo_aluno->matricula);
    
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", novo_aluno->nome);
    
    printf("Digite a turma do aluno: ");
    scanf(" %c", &novo_aluno->turma);

    alunos[n] = novo_aluno;
}

void lanca_notas(int n, Aluno** alunos) {
    for (int i = 0; i < n; i++) {
        printf("Digite as notas do aluno %s:\n", alunos[i]->nome);
        for (int j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i]->notas[j]);
        }
        
        float soma_notas = 0;

        for (int j = 0; j < 3; j++) {
            soma_notas += alunos[i]->notas[j];
        }
        alunos[i]->media = soma_notas / 3.0;
    }
}

void imprime_tudo(int n, Aluno** alunos) {
    for (int i = 0; i < n; i++) {
        printf("Matricula: %d\n", alunos[i]->matricula);
        printf("Nome: %s\n", alunos[i]->nome);
        printf("Turma: %c\n", alunos[i]->turma);
        printf("Notas: %.1f, %.1f, %.1f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
        printf("Media: %.1f\n\n", alunos[i]->media);
    }
}

void imprime_turma(int n, Aluno** alunos, char turma) {
    for (int i = 0; i < n; i++) {
        if (alunos[i]->turma == turma) {
            printf("Matricula: %d\n", alunos[i]->matricula);
            printf("Nome: %s\n", alunos[i]->nome);
            printf("Turma: %c\n", alunos[i]->turma);
            printf("Notas: %.1f, %.1f, %.1f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
            printf("Media: %.1f\n\n", alunos[i]->media);
        }
    }
}

void imprime_turma_aprovados(int n, Aluno** alunos, char turma) {
    printf("Alunos aprovados na turma %c:\n", turma);
    for (int i = 0; i < n; i++) {
        if (alunos[i]->turma == turma && alunos[i]->media >= 7.0) {
            printf("Matricula: %d\n", alunos[i]->matricula);
            printf("Nome: %s\n", alunos[i]->nome);
            printf("Media: %.1f\n\n", alunos[i]->media);
        }
    }
}

void inicializa_alunos(Aluno** alunos) {
    for (int i = 0; i < ALUNOS; i++) {
        alunos[i] = NULL;
    }
}

void menu() {
    printf("******************\n");
    printf("-------MENU-------\n");
    printf("******************\n");
        
    printf("1. Matricular aluno\n");
    printf("2. Lancar notas\n");
    printf("3. Imprimir todos os alunos\n");
    printf("4. Imprimir alunos de uma turma\n");
    printf("5. Imprimir alunos aprovados de uma turma\n");
    printf("6. Sair\n");
}

int main() {
    Aluno* alunos[ALUNOS];
    inicializa_alunos(alunos);

    int opcao, num_alunos = 0;
    char turma;

    do {
        menu();

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                matricula(num_alunos, alunos);
                num_alunos++;
                break;
            case 2:
                lanca_notas(num_alunos, alunos);
                break;
            case 3:
                imprime_tudo(num_alunos, alunos);
                break;
            case 4:
                printf("Digite a turma: ");
                scanf(" %c", &turma);
                imprime_turma(num_alunos, alunos, turma);
                break;
            case 5:
                printf("Digite a turma: ");
                scanf(" %c", &turma);
                imprime_turma_aprovados(num_alunos, alunos, turma);
                break;
            case 6:
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 6);

    for (int i = 0; i < num_alunos; i++) {
        free(alunos[i]);
    }

    return 0;
}
