#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* arquivo;
    arquivo = fopen("entrada.txt", "wt");
    if(arquivo == NULL) {
        printf("Erro na abertura do arquivo");
        exit(1);
    } 
    else {
        printf("arquivo aberto");
    }
    fclose(arquivo);

    if(fclose(arquivo)) {
        printf("arquivo fechado");
    }

    return 0;
}