#include "aluno.c"

int main(void) {
    Aluno * aluno;
    aluno = recebe_dados();
    imprime(aluno);
    libera(aluno);

    return 0;
}