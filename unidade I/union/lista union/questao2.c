#include <stdio.h>
#include <stdlib.h>

typedef union tipo {
    char ALIMENTO[20];
    char BEBIDA[20];
    char ELETRONICO[20];
}Tipo;

typedef struct produto {
    char nome[20];
    float preco;
    int tipo;
    Tipo tipos;
}Produto;

void preenche(Produto * p) {
    printf("informe o nome do produto: ");
    scanf("%[^\n]", p->nome);

    printf("Informe o preco do produto: ");
    scanf("%f", &p->preco);

    printf("informe o tipo do produto\n(1) Alimento (2) Bebida (3)Eletronico\n");
    scanf("%d", &p->tipo);
}

void imprime(Produto * p) {
    printf("Nome: %s\n", p->nome);
    printf("Preco: %.2f\n", p->preco);
    
    switch (p->tipo) {
    case 1:
        printf("Tipo: Alimento", p->tipos.ALIMENTO);
        break;
    
    case 2:
        printf("Tipo: Bebida", p->tipos.BEBIDA);
        break;

    case 3:
        printf("Tipo: Eletronico", p->tipos.ELETRONICO);
        break;
    
    default:
        break;
    }
}

int main(void) {
    Produto * p = malloc(sizeof(Produto));
    free(p);
    preenche(p);
    imprime(p);

    return 0;
}
