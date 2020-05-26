/*PROGAMA QUE CALCULA O NOVO SALDO DO LIMITE DE CREDITO E MOSTRA SE O LIMITE DO MESMO FOI ULTRAPASSADO OU N�O*/

// DECLARE AS VARI�VEIS COMO N�MEROS FLUTUANTES numero_conta, saldo_inicio, encargos, creditos, limite_credito e saldo_final;
// IMPRIMA NA TELA "Informe o n�mero da conta (-1 para terminar): ";
// RECEBA DO USU�RIO O VALOR DA VARI�VEL numero_conta;
// ENQUANTO numero_conta FOR DIFERENTE DE -1...
//      IMPRIMA NA TELA "Informe o saldo inicial: ";
//      RECEBA DO USU�RIO O VALOR DA VARI�VEL saldo_inicio;
//      IMPRIMA NA TELA "Informe o total de encargos: ";
//      RECEBA DO USU�RIO O VALOR DA VARI�VEL encargos;
//      IMPRIMA NA TELA "Informe o total de creditos: ";
//      RECEBA DO USU�RIO O VALOR DA VARI�VEL creditos;
//      IMPRIMA NA TELA "Informe o limite de cr�ditos: ";
//      RECEBA DO USU�RIO O VALOR DA VARI�VEL limite_credito;
//      IMPRIMA NA TELA "Conta: " E O VALOR DA VARI�VEL numero_conta;
//      IMPRIMA NA TELA "Limite de cr�dito: " E O VALOR DA VARI�VEL limite_credito;
//      ATRIBUA A VARI�VEL saldo_final A SOMA ENTRE AS VARI�VEIS saldo_inicio E encargos E SUBTRAI DESSE VALOR A VARI�VEL creditos;
//      IMPRIMA NA TELA "Saldo: " E O VALOR DA VARI�VEL saldo_final;
//      SE A VARI�VEL saldo_final FOR MAIOR QUE limite_credito;
//          IMPRIMA NA TELA "Limite de cr�dito ultrapassado.";
//      SE N�O
//          IMPRIMA NA TELA "Limite de cr�dito N�O ultrapassado.";
//      IMPRIMA NA TELA "Informe o n�mero da conta (-1 para terminar): ";
//      RECEBA DO USU�RIO O VALOR DA VARI�VEL numero_conta;
//      CASO SEJA DIGITADO -1 NA VARI�VEL numero_conta, FIM DA ESTRUTURA DE REPETI��O;
//FIM DO PROGAMA;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float numero_conta, saldo_inicio, encargos, creditos, limite_credito;
    float saldo_final;
    setlocale(LC_ALL,"");

    printf("\nInforme o n�mero da conta (-1 para terminar): ");
    scanf("%f", &numero_conta);

    while ( numero_conta != -1 ) {

        printf("\nInforme o saldo inicial: ");
        scanf("%f", &saldo_inicio);

        printf("\nInforme o total de encargos: ");
        scanf("%f", &encargos);

        printf("\nInforme o total de creditos: ");
        scanf("%f", &creditos);

        printf("\nInforme o limite de cr�ditos: ");
        scanf("%f", &limite_credito);

        printf("\n\n");

        printf("Conta: %.2f.", numero_conta);
        printf("\nLimite de cr�dito: %.2f.", limite_credito);

        saldo_final = (saldo_inicio + encargos) - creditos;

        printf("\nSaldo: %.2f.", saldo_final);

        if(saldo_final > limite_credito) {

            printf("\nLimite de cr�dito ultrapassado.\n\n");

        }
        else {

            printf("\nLimite de cr�dito n�o ultrapassado.\n\n");

        }

        printf("\nInforme o n�mero da conta (-1 para terminar): ");
        scanf("%f", &numero_conta);

    }

    return 0;
}
