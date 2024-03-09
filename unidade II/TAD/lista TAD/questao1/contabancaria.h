typedef struct contabancaria ContaBancaria;

ContaBancaria* cria_conta(char* titular, int numero, float saldo);

void deposita(ContaBancaria* conta, float valor);

int saca(ContaBancaria* conta, float valor);

int transfere(ContaBancaria* origem, ContaBancaria* destino, float valor);

float saldo(ContaBancaria* conta);

void exclui_conta(ContaBancaria* conta);