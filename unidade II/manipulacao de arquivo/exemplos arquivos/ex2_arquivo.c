#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* arquivo;
    arquivo = fopen("entrada.txt", "rt");
    int c;
    if(arquivo == NULL) {
        printf("Erro na abertura do arquivo");
        exit(1);
    } 
    else {
        printf("arquivo aberto\n");
    }
    c = fgetc(arquivo);
    printf("%c\n", c);

    fclose(arquivo);

    if(fclose(arquivo)) {
        printf("arquivo fechado\n");
    }

    return 0;
}