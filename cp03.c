#include <stdio.h>
#include <string.h>

typedef struct {
    int numeroConta;
    char senha[20];
    float saldo;
} Conta;

int main() {

    Conta contas[3];

    contas[0].numeroConta = 1001;
    strcpy(contas[0].senha, "senha1");
    contas[0].saldo = 1500.50;

    contas[1].numeroConta = 1002;
    strcpy(contas[1].senha, "senha2");
    contas[1].saldo = 3200.00;

    contas[2].numeroConta = 1003;
    strcpy(contas[2].senha, "senha3");
    contas[2].saldo = 850.75;
    }