#include <stdio.h>
#include <stdlib.h>

typedef struct disciplinas {
    char nome[20];
    float nota;
    int codigo;
} Disciplinas;

typedef struct aluno {
    char nome[20];
    int idade;
    int long matricula;
    Disciplinas * materias; //aninhamento da estrutura disciplina na estrutura aluno
} Aluno;

int main() {
    Aluno * aluno = (Aluno*) malloc (sizeof(Aluno));
    if (aluno == NULL){
        exit(1);
    } 
    //alocando memoria para o vetor disciplinas
    aluno->materias = (Disciplinas*) malloc (2 * sizeof(Disciplinas));
    if (aluno->materias == NULL) {
        exit(1);
    }
    printf("Informe os dados do aluno: \n");
    scanf("%[^\n]", aluno->nome);
    scanf("%d %d", &aluno->idade, &aluno->matricula);
    //cadastro da disciplina
    for(int i = 0; i < 2; i++) {
        printf("Cadastro da Disciplina %d\n", i + 1);
        scanf("%[^\n]", aluno->materias[i].nome);
        scanf("%f", &aluno->materias[i].nota);
        scanf("%d", &aluno->materias[i].codigo);
    }

    return 0;
}