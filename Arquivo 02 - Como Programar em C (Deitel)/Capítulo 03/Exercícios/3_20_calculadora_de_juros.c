/*Calculadora de juros*/

//DECLARE AS VARI�VEIS COMO N�MERO FLUTUANTE juros, principal, taxa, dias;
//IMPRIMA NA TELA A STRING "Informe o valor principal do empr�stimo (-1 para terminar): ";
//RECEBA DO USU�RIO O VALOR DA VARI�VEL principal;
//
//ENQUANTO A VARI�VEL principal FOR DIFERENTE DE -1;
//
//  IMPRIMA NA TELA A STRING "\nInforme a taxa de juros: ";
//  RECEBA DO USU�RIO O VALOR DA VARI�VEL taxa;
//  IMPRIMA NA TELA A STRING "\nInforme o prazo do empr�stimo em dias: ";
//  RECEBA DO USU�RIO O VALOR DA VARI�VEL dias;
//  ATRIBUA A VARIAVEL juros A MULTIPLICA��O DA VARI�VEL principal COM taxa E dias, DIVIDINDO-AS POR 365;
//  IMPRIMA NA TELA A STRING "\nO valor dos juros �: %.2f reais.\n\n", MOSTRANDO JUNTAMENTE A ELA O VALOR DA VARI�VEL juros;
//  IMPRIMA NA TELA A STRING "Informe o valor principal do empr�stimo (-1 para terminar): ";
//  RECEBA DO USU�RIO O VALOR DA VARI�VEL principal;
//  SE O USU�RIO ATRIBUIR -1 A VARI�VEL principal, FIM DA ESTRUTURA DE REPETI��O;
//
//FIM DO PROGAMA/

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float juros, principal, taxa, dias;
    setlocale(LC_ALL,"");

    printf("Informe o valor principal do empr�stimo (-1 para terminar): ");
    scanf("%f", &principal);

    while(principal != -1) {

        printf("\nInforme a taxa de juros: ");
        scanf("%f", &taxa);
        printf("\nInforme o prazo do empr�stimo em dias: ");
        scanf("%f", &dias);

        juros = principal * taxa * dias/365;

        printf("\nO valor dos juros �: %.2f reais.\n\n", juros);

        printf("Informe o valor principal do empr�stimo (-1 para terminar): ");
        scanf("%f", &principal);

    }

    return 0;
}
