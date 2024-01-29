#include <stdio.h>
#include <stdlib.h>

typedef enum genero {
Masculino,
Feminino
}Genero;

typedef struct pessoa {
    char nome[20];
    int idade;
    Genero gen;
} Pessoa;

void preenche(Pessoa * p) {
    printf("Informe seu nome: ");
    scanf(" %[^\n]", p->nome);

    printf("Informe sua idade: ");
    scanf("%d", &p->idade);

    printf("Qual seu genero?\n (0) Masculino (1) Feminino\n");
    scanf("%d", &p->gen);    
}

void imprime(Pessoa * p) {
    printf("Nome: %s\nIdade: %d\nGenero: %s",
    p->nome, p->idade, p->gen == Masculino ? "Masculino":"Feminino");
}


int main() {
    Pessoa * p = malloc(sizeof(Pessoa));
    free(p);
    preenche(p);
    imprime(p);
}