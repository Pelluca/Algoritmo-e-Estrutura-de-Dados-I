//1- dado a função abaixo qual a complexidade do espaço e tempo?
int max(int valor1, int valor2){
    if(valor1>valor2) {
        return valor1;
    }
    else{
        return valor2;
    }
}
//ocupa 8 bytes no total

//a(n - 1) + b = b + an -a + b
//an -a + b
//an
//n
//O(n)

//2- dado a função abaixo, qual a complexidade do tempo
int funcao_aula(int max1, int max2) {
    int count1, count2; //1 vez: c1
    for(count1=0; count1<max1; count1++) { //c2: max1 vezes
        for(count2=0; count2<max2; count2++) { //c3: max1*max2 vezes
            printf("exemplo da aula"); //c4: max1*max2 vezes
        }
    }
    return 0; //c5: 1 vez
}
// c1 + max1.c2 + max1*max2.c3 + max1*max2.c4 +c5
// (c3 + c4) + max1.c2 + (c1 + c5) :. a = (c3 + c4) | c = (c1 + c5) | b = c2
// a.max1*max2 + b.max1 + c
// a.max1*max2 + b.max1
// a.max1*max2
// max1*max2

//3- qual a complexidade de tempo do insertion sort
void insertionsort(int arr[], int n) {
    int i, key, j;
    for(i = 1; i < n; i++) {
        key = arr[i];
        j = 1 - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = i - 1;
        }
        arr[j + 1] = key;
    }
}
/*c1 + n(c2 + c3+ c6) + n²(c4 + c5)
a + bn + n²c
O(n²)*/
