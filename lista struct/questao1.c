#include <stdio.h>

typedef struct funcionario {
        char nome[20];
        float salario;
        int indentificador;
        char cargo[20];
}funcionario;

void preenche(funcionario * func) {
    printf("Digite seu nome: ");
    scanf(" %[^\n]", func->nome);

    printf("Digite seu salario: ");
    scanf("%f", &func->salario);

    printf("Digite seus numeros de indentificacao: ");
    scanf("%d", &func->indentificador);

    printf("Digite seu cargo: ");
    scanf(" %[^\n]", func->cargo);
}

void imprime(funcionario * func) {
    printf("\nNome: %s\nSalario: %.2f\nIndentificador: %d\nCargo: %s\n",
    func->nome, func->salario, func->indentificador, func->cargo);
}

void novosal(funcionario * func) {
    int novo;
    printf("\nDeseja mudar o valor do salario desse funcionario?\n");
    printf("(1) sim (2) nao\n");
    scanf("%d", &novo);

    if(novo == 1) {
        printf("Digite o novo salario: ");
        scanf("%f", &func->salario);
    }
}

void encontrasal(funcionario funcionarios[], int tamanho) {
    int maiorsal = 0, menorsal = 0;

    for (int i = 1; i < tamanho; ++i) {
        if (funcionarios[i].salario > funcionarios[maiorsal].salario) {
            maiorsal = i;
        }
        if (funcionarios[i].salario < funcionarios[menorsal].salario) {
            menorsal = i;
        }
    }

    printf("\nFuncionario com maior salario:\n");
    printf("Nome: %s\nCargo: %s\n", funcionarios[maiorsal].nome, funcionarios[maiorsal].cargo);

    printf("\nFuncionario com menor salario:\n");
    printf("Nome: %s\nCargo: %s\n", funcionarios[menorsal].nome, funcionarios[menorsal].cargo);
}

int main() {
    int numfunc;

    printf("Digite o numero de funcionarios a serem cadastrados: ");
    scanf("%d", &numfunc);

    funcionario funcionarios[numfunc];

    for (int i = 0; i < numfunc; ++i) {
        printf("\nDigite os dados do funcionario %d:\n", i + 1);
        preenche(&funcionarios[i]);
        novosal(&funcionarios[i]);
    }

    printf("\nDados dos funcionarios:\n");
    for (int i = 0; i < numfunc; ++i) {
        printf("\nFuncionario %d:\n", i + 1);
        imprime(&funcionarios[i]);
    }

    encontrasal(funcionarios, numfunc);

    return 0;
}