#include <stdio.h>

//define cosntantes
#define TRUE 0
#define FALSE 1

//enumeração
typedef enum bool{
    true,
    false
}Bool;

int main(void) {
    Bool respostas;
    printf("voce gosta de algoritmos? \n 0-True \n 1-False\n");
    scanf("%d", &respostas);

    if(respostas == TRUE) {
        printf("que bom\n");
    } else if(respostas == FALSE){
        printf("que pensa\n");
    }
    return 0;
}