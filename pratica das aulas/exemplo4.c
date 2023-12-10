#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int * vetor = malloc(3 * sizeof(int));
    if(vetor == NULL){
        printf("erro na alocação de memoria");
        exit(1);
    }
    free(vetor);
    return 0;
}