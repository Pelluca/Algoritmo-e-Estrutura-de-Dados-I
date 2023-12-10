#include <stdio.h>

int main(void) {
int x, *p;
x = 100;
p = &x;

printf("Valor de p = %p\nValor de *p = %d", p, *p);
}

/*
a) Advertência.
b) Ele emite essa mensagem pois o ponteiro p está recebendo x e não o &x.
c) Não.
d) Trecho modificado.
f) Sim.
*/