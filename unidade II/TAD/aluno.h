/*definição de novo tipo: Aluno*/
typedef struct aluno Aluno;

/*função que aloca memoria para um struct aluno,
rece os dados via teclado e retorna um ponteiro*/
Aluno * recebe_dados();

void imprime(Aluno * aluno);
void libera(Aluno * estudante);
