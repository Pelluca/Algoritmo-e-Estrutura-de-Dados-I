#include <stdio.h>

int inc(int num) {
    return(++num);
}

int main(void){
    int numero = 5;
    inc(numero);

    printf("%d", numero);
}