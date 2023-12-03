#include <stdio.h>

int num1;
int num2;
int sm = 0;

void soma(){
    if(num1 > num2){
        for(int i = num2 + 1; i < num1; i++){
        sm = sm + i;
    }

    } else {
        for(int i = num1 + 1; i < num2; i++){
        sm = sm + i;
    }
    }
    printf("%d",sm);
}
    

int main(){
    printf("escreva 2 numeros positivos\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    soma();
}