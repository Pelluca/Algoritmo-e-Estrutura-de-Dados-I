#include <stdio.h>
#include <stdlib.h>
int main() {
    int linhas=3, colunas=3, i, j;
    
    // Alocando vetor de ponteiros
    int **matriz = (int **) malloc(linhas * sizeof(int *));
    
    // Alocando cada linha da matriz
    for (i = 0; i < linhas; i++) {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }
    
    // Liberando a memória alocada
    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
    }