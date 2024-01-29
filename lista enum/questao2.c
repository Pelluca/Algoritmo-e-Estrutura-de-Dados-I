#include <stdio.h>
#include <stdlib.h>

typedef enum tipo {
    ALIMENTO = 1,
    BEBIDA,
    ELETRONICO
}Tipo;

typedef struct produto {
    char nome[20];
    float preco;
    Tipo tipo;
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
        printf("Tipo: Alimento");
        break;
    
    case 2:
        printf("Tipo: Bebida");
        break;

    case 3:
        printf("Tipo: Eletronico");
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