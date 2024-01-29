#include <stdio.h>

void incrementa(int * ponteiro) {
    (*ponteiro)++;
}

int main() {
    int variavel = 5; 
    incrementa(&variavel);
    printf("o valor da variavel: %d", variavel);

    return 0;
}