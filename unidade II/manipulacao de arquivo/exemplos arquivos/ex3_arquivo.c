#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* arquivo;
    arquivo = fopen("entrada.txt", "rt");
    char c[20];
    if(arquivo == NULL) {
        printf("Erro na abertura do arquivo");
        exit(1);
    } 
    else {
        printf("arquivo aberto\n");
    }
    
    fgets(c, 20, arquivo);
    printf("%s\n", c);

    fclose(arquivo);

    if(fclose(arquivo)) {
        printf("arquivo fechado\n");
    }

    return 0;
}