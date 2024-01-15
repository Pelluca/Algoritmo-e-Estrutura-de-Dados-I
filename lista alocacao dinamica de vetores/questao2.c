#include <stdio.h>
#include <stdlib.h>

int main () {
    int num_questoes;
    int alunos = 10;

    printf("informe o numero de questoes\n");
    scanf("%d", &num_questoes);

    char *gabarito = (char*) malloc(num_questoes * sizeof(char));
    if(gabarito == NULL) {
        printf("erro na alocacao de memoria");
        exit(1);
    }

    char **resposta_alunos = (char**) malloc(alunos * sizeof(char*));
    for(int i = 0; i < alunos; i++) {
        resposta_alunos[i] = (char*) malloc(num_questoes * sizeof(char));
    }

    printf("informe o gabarito: ");
    scanf("%s", gabarito);

    for (int i = 0; i < alunos; i++) {
        printf("informe as respostas do aluno %d: ", i + 1);
        scanf("%s", resposta_alunos[i]);
    }

    printf("\nnotas dos alunos:\n");
    for (int i = 0; i < alunos; i++) {
        int nota = 0;
        for (int j = 0; j < num_questoes; j++) {
            if (resposta_alunos[i][j] == gabarito[j]) {
                nota += alunos / num_questoes;
            }
        }
        printf("aluno %d: %d\n", i + 1, nota);
    }

    int aprovados = 0;
    for (int i = 0; i < alunos; i++) {
        int nota = 0;
        for (int j = 0; j < num_questoes; j++) {
            if (resposta_alunos[i][j] == gabarito[j]) {
                nota += alunos / num_questoes;
            }
        }
        if (nota >= 6) {
            aprovados++;
        }
    }

    printf("\nporcentagem de aprovacao: %.0f%%\n", (float)aprovados / alunos * 100);

    free(gabarito);
    for (int i = 0; i < alunos; i++) {
        free(resposta_alunos[i]);
    }
    free(resposta_alunos);

    return 0;
}