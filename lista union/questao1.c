#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union genero {  
    char masculino[10];
    char feminino[10];
}Genero;

typedef struct pessoa {
    char nome[20];
    int idade;
    char genero[20]; 
    Genero gen_user;
}Pessoa;

void preenche(Pessoa * p) {
    printf("Informe seu nome: ");
    scanf(" %[^\n]", p->nome);

    printf("Informe sua idade: ");
    scanf("%d", &p->idade);

    printf("Informe o genero: ");
    scanf(" %[^\n]", p->genero);

}

void imprime(Pessoa * p) {
    printf("Nome: %s\nIdade: %d\n", p->nome, p->idade);

    if (strcmp(p->genero, "masculino") == 0) {
        printf("Genero: Masculino\n");
    } else if (strcmp(p->genero, "masculino") == 0) {
        printf("Genero: Feminino\n");
    }
}


int main() {
    Pessoa * p = malloc(sizeof(Pessoa));
    free(p);

    preenche(p);
    imprime(p);
}