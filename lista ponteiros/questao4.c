#include <stdio.h>
#include <math.h>

void calcula_hexagono(float l, float *area, float *perimetro){
    *area = ((3*pow(l,2))*sqrt(3))/2;
    *perimetro = 6*l;
}

int main(){
    float l, area, perimetro;

    printf("informe o tamanho em metros dos lados do seu hexagono\n");
    scanf("%f", &l);

    calcula_hexagono(l, &area, &perimetro);

    printf("O valor da area desse hexagono e %.2fm\n", area);
    printf("O valor do perimetro desse hexagono e %1.fm\n", perimetro);
}