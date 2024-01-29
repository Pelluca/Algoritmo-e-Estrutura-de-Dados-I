#include <stdio.h>
#include <stdlib.h>

typedef enum mes {
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
} Mes;

typedef struct data{
    int dia;
    Mes mes;
    int ano;
}Data;

void preenche(Data * data) {
    printf("Dia: ");
    scanf("%d", &data->dia);

    printf("Mes: ");
    scanf("%d", &data->mes);

    printf("Ano: ");
    scanf("%d", &data->ano);
}

void imprime(Data * data) {
    printf("%d/%d/%d", data->dia, data->mes, data->ano);
}

int main(void) {
    Data * data = malloc(sizeof(Data));
    free(data);
    preenche(data);
    imprime(data);

    return 0;
}