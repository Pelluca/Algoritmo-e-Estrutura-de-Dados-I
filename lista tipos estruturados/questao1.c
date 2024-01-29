#include <stdio.h>
#include <stdlib.h>

typedef struct ingresso {
    float preco;
    char local[30];
    char atracao[30];
}Ingresso;

void preenche(Ingresso* i) {
    printf("informe o preco do ingresso: ");
    scanf("%f", &i->preco);

    printf("informe o local do show: ");
    scanf(" %[^\n]", i->local);

    printf("informe a atracao do show: ");
    scanf(" %[^\n]", i->atracao);
}

void imprime(Ingresso* i) {
    printf("preco: %.2f\nlocal: %s\natracao: %s\n", i->preco, i->local, i->atracao);
}

void altera_preco(Ingresso* i, float valor) {
    i->preco = valor;
}

void imprime_menor_maior_preco(int n, Ingresso* vet) {
    Ingresso menor = vet[0];
    Ingresso maior = vet[0];

    for (int i = 1; i < n; i++) {
        if (vet[i].preco < menor.preco) {
            menor = vet[i];
        }
        if (vet[i].preco > maior.preco) {
            maior = vet[i];
        }
    }

    printf("\nEvento de ingresso mais barato:\n");
    imprime(&menor);

    printf("\nEvento de ingresso mais caro:\n");
    imprime(&maior);
}

int main() {
    int num_ingressos;

    printf("informe o numero de ingressos a serem cadastrados: ");
    scanf("%d", &num_ingressos);

    Ingresso* ingressos = (Ingresso*)malloc(num_ingressos * sizeof(Ingresso));

    for(int j = 0; j < num_ingressos; j++) {
        printf("\ndigite os dados do ingresso %d:\n", j + 1);
        preenche(&ingressos[j]);
    }

    for(int j = 0; j < num_ingressos; j++) {
        printf("\ningresso %d:\n", j + 1);
        imprime(&ingressos[j]);
    }

    altera_preco(&ingressos[0], 70.00);

    imprime_menor_maior_preco(num_ingressos, ingressos);

    free(ingressos);


    return 0;
}
