#include "contabancaria.h"
#include <stdlib.h>
#include <stdio.h>

struct contabancaria {
    char* titular;
    int numero;
    float saldo;
};

ContaBancaria* cria_conta(char* titular, int numero, float saldo) {
    ContaBancaria* conta = (ContaBancaria*)malloc(sizeof(ContaBancaria));
    if (conta == NULL) {
        printf("Erro");
        exit(1);
    }

    conta->titular = titular;
    conta->numero = numero;
    conta->saldo = saldo;
    
    return conta;
}

void deposita(ContaBancaria * conta, float valor) {
    conta->saldo += valor;
}

int saca(ContaBancaria * conta, float valor) {
    if(conta->saldo > valor) {
        conta->saldo -= valor;
        return 1;
    }
    else {
        printf("Valor indisponivel para saque");
        return 0;
    }
}

int transfere(ContaBancaria* origem, ContaBancaria* destino, float valor) {
    if (saca(origem, valor)) {
        deposita(destino, valor);
        return 1; 
    } else {
        return 0; 
    }
}

float saldo(ContaBancaria* conta) {
    return conta->saldo;
}

void exclui_conta(ContaBancaria* conta) {
    free(conta);
}





