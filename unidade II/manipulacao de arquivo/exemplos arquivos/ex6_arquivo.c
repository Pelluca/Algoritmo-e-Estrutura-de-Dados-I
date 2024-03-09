#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int c;
    int nlinhas = 0;
    FILE* fp;

    fp = fopen("entrada.txt", "rt");
    if(fp == NULL) {
        printf("Erro na abertura do arquivo");
        exit(1);
    } 
    
    return 1;

    while((c = fgetc(fp)) != EOF) {
        if(c == '\n') {
            nlinhas++;
        }
    }

    fclose(fp);

    printf("numero de linhas = %d\n", nlinhas);
    return 0;
}