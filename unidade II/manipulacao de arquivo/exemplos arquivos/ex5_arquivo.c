#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* arquivo;
    arquivo = fopen("entrada_escrita.txt", "wt");

    if(arquivo == NULL) {
        printf("Erro na abertura do arquivo");
        exit(1);
    } 
    else {
        printf("arquivo aberto\n");
    }

    fputs("hello world", arquivo);
    fprintf(arquivo, "meu texto");

    fclose(arquivo);

    if(fclose(arquivo)) {
        printf("arquivo fechado\n");
    }

    return 0;
}