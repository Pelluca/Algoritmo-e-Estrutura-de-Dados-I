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

    fputc('A', arquivo);

    fclose(arquivo);

    if(fclose(arquivo)) {
        printf("arquivo fechado\n");
    }

    return 0;
}