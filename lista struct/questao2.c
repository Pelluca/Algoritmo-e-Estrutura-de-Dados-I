#include <stdio.h>

typedef struct pessoa {
    char nome[20];
    int num_do_documento;
    int idade;
} pessoa;

void preenche(pessoa * p) {
    printf("Digite seu nome: ");
    scanf(" %[^\n]", p->nome);

    printf("Digite os numeros do seu documento: ");
    scanf("%d", &p->num_do_documento);

    printf("Digite sua idade: ");
    scanf("%d", &p->idade);
}

void imprime(pessoa * p) {
    printf("\nNome: %s\nNumero do documento: %d\nIdade: %d\n",
    p->nome, p->num_do_documento, p->idade);
}

void novaidade(pessoa * p) {
    int novo;
    printf("\nDeseja mudar a idade dessa pessoa?\n");
    printf("(1) sim (2) nao\n");
    scanf("%d", &novo);

    if(novo == 1) {
        printf("Digite a nova idade: ");
        scanf("%d", &p->idade);
    }
}

void encontraidade(pessoa pessoas[], int tamanho) {
    int maioridade = 0, menoridade = 0;

    for (int i = 1; i < tamanho; ++i) {
        if (pessoas[i].idade > pessoas[maioridade].idade) {
            maioridade = i;
        }
        if (pessoas[i].idade < pessoas[menoridade].idade) {
            menoridade = i;
        }
    }

    printf("\nPessoa mais velha:\n");
    printf("Nome: %s\n", pessoas[maioridade].nome);

    printf("\nPessoa mais nova:\n");
    printf("Nome: %s\n", pessoas[menoridade].nome);
}

int main() {
    int numpessoas;

    printf("Digite o numero de pessoas a serem cadastrados: ");
    scanf("%d", &numpessoas);

    pessoa pessoas[numpessoas];

    for (int i = 0; i < numpessoas; ++i) {
        printf("\nDigite os dados da pessoa %d:\n", i + 1);
        preenche(&pessoas[i]);
        novaidade(&pessoas[i]);
    }

    printf("\nDados das pessoas:\n");
    for (int i = 0; i < numpessoas; ++i) {
        printf("\nPessoa %d:\n", i + 1);
        imprime(&pessoas[i]);
    }

    encontraidade(pessoas, numpessoas);

    return 0;
}