#include <stdio.h>

int n;
int vet[n];

void inverter(){
    for(int j = n-1; j >= 0; j = j - 1){
        printf("%d", vet[j]);
    }
}