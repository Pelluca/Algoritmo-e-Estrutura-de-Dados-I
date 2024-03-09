#include <stdio.h>
#include "aluno.h"

int main() {
    Disciplina* disciplina1 = cria_disciplina("Matematica", 101);
    Disciplina* disciplina2 = cria_disciplina("Fisica", 102);

    Aluno* aluno1 = cria_aluno("Samuel", 83745);
    Aluno* aluno2 = cria_aluno("Eduardo", 91236);

    matricula_disciplina(aluno1, disciplina1);
    matricula_disciplina(aluno1, disciplina2);
    matricula_disciplina(aluno2, disciplina1);

    printf("Informacoes do aluno 1:\n");
    exibe_info_aluno(aluno1);

    printf("\nInformacoes do aluno 2:\n");
    exibe_info_aluno(aluno2);

    exclui_disciplina(disciplina1);
    exclui_disciplina(disciplina2);
    exclui_aluno(aluno1);
    exclui_aluno(aluno2);

    return 0;
}
