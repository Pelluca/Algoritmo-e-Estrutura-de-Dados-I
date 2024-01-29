#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float base;
    float altura;
} Retangulo;

typedef struct {
    float raio;
} Circ;

typedef struct {
    float base;
    float altura;
} Ret;

Ret* ret_circunscrito(Circ* c, float h) {
    Ret* ret = (Ret*)malloc(sizeof(Ret));

    float diametro = 2 * c->raio;

    ret->base = diametro;
    ret->altura = h;

    return ret;
}

Circ* circ_interno(Retangulo* r) {
    Circ* circ = (Circ*)malloc(sizeof(Circ));

    circ->raio = (r->base < r->altura) ? r->base / 2 : r->altura / 2;

    return circ;
}

int main() {
    Circ* c = (Circ*)malloc(sizeof(Circ));
    c->raio = 6;

    float altura_retangulo = 8;
    Ret* ret_circ = ret_circunscrito(c, altura_retangulo);
    printf("Retangulo circunscrito: Base = %.2f, Altura = %.2f\n", ret_circ->base, ret_circ->altura);
    free(ret_circ);

    Ret* r = (Ret*)malloc(sizeof(Ret));
    r->base = 16;
    r->altura = 8;

    Circ* circ_int = circ_interno(r);
    printf("Circulo interno: Raio = %.2f\n", circ_int->raio);
    free(circ_int);

    free(c);
    free(r);

    return 0;
}
