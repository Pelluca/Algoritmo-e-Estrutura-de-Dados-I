#include <stdio.h>

int soma(int a, int b){
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

int divisao(int a, int b) {
    return a / b;
}

int calcula(int x, int y, int (*operacao)(int, int)) {
    return (*operacao)(x,y);
}

int main(){
    int escolheop;
    int resultado = calcula(5, 3, soma);

    printf("escolha qual operacao voce quer realizar\n");
    printf("(1) soma (2) subtracao (3) multiplicacao (4) divisao\n");
    scanf("%d", &escolheop);

    switch (escolheop) {
    case 1:
        resultado = calcula(5, 3, soma);
        printf("Resultado: %d", resultado);
        break;

    case 2:
        resultado = calcula(5, 3, subtracao);
        printf("Resultado: %d", resultado);
        break;

    case 3:
        resultado = calcula(5, 3, multiplicacao);
        printf("Resultado: %d", resultado);
        break;

    case 4:
        resultado = calcula(5, 3, divisao);
        printf("Resultado: %d", resultado);
        break;
    
    default:
        break;
    }

    return 0;
}