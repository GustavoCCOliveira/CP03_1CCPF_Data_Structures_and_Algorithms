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
 
    int numeroConta;
    char senha[20];

    int indiceConta;
    int opcao;

    float valor;

        do {

        indiceConta = -1;

        printf("\n--- SEJA BEM VINDO AO ATMONEY ---\n");

        printf("Digite o numero da conta: ");
        scanf("%d", &numeroConta);

        for(int i = 0; i < 3; i++) {

            if(contas[i].numeroConta == numeroConta) {
                indiceConta = i;
                break;
            }
        }

        if(indiceConta == -1) {

            printf("Conta nao encontrada.\n");

        } else {

            printf("Digite a senha: ");
            scanf("%s", senha);

        if(strcmp(contas[indiceConta].senha, senha) == 0) {

            do {
                  printf("\n--- MENU DA CONTA ---\n");                    printf("1 - Ver saldo\n");
                printf("2 - Sacar\n");
                printf("3 - Depositar\n");
                printf("4 - Voltar ao painel inicial\n");
                printf("Escolha uma opcao: ");
                scanf("%d", &opcao);
            }
    }
}