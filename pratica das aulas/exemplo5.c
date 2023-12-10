#include <stdio.h>
#include <stdlib.h>

int main(void){
    int tamanho = 5;
    int contador;
    int * vetor = (int*) malloc(tamanho*sizeof(int));
    if(vetor == NULL){
        exit(1);
    } else {
        printf("Alocacao realizada com sucesso");
    }

    printf("Digite os valores do vetor\n");
    for(contador = 0; contador < vetor; contador++){
        scanf("%d", &vetor[contador]);
    }
    free(vetor);
    return 0;
}