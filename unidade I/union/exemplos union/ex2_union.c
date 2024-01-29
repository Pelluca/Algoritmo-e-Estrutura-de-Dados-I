#include <stdio.h>
#include <stdlib.h>

//Apenas a variável com maior bytes ocupa a memória
typedef union tipodados{
    int meu_int;
    float meu_float;
}Dados;

int main(void) {
    int opcao;
    Dados uniao;
    printf("Digite os dados: \t");
    scanf("%d %f", &uniao.meu_int, &uniao.meu_float);
    printf("Os dados informados: meu_int = %d meu_float = %f\n", uniao.meu_int, uniao.meu_float);

    return 0;
}