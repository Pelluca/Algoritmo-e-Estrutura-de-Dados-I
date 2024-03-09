#include "disciplina.h"

typedef struct Aluno Aluno;

Aluno* cria_aluno(char nome[], int matricula);

void matricula_disciplina(Aluno* aluno, Disciplina* disciplina);

void exclui_aluno(Aluno* aluno);

void exibe_info_aluno(Aluno* aluno);