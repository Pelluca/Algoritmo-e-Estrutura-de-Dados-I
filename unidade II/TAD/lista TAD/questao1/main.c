#include "contabancaria.c"

int main() {
    ContaBancaria* conta1 = cria_conta("Pedro", 69697, 1000.0);
    ContaBancaria* conta2 = cria_conta("Thamirys", 77756, 500.0);

    deposita(conta1, 300.0);
    saca(conta2, 200.0);
    transfere(conta1, conta2, 500.0);

    printf("Saldo da conta de %s: %.2f\n", conta1->titular, saldo(conta1));
    printf("Saldo da conta de %s: %.2f\n", conta2->titular, saldo(conta2));

    exclui_conta(conta1);
    exclui_conta(conta2);

    return 0;
}