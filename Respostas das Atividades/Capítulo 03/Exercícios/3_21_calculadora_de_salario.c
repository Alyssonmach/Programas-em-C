/*Calculadora de sal�rio*/

//DECLARE AS VARI�VEIS TIPO N�MERO FLUTUANTE hora, preco_hora, salario;
//IMPRIMA NA TELA A STRING "Digite o quanto o trabalhador tem de horas acumuladas (-1 para terminar): ";
//RECEBA DO USU�RIO O VALOR DA VARI�VEL hora;
//
//ENQUANTO HORA FOR DIFERENTE DE -1 FA�A:
//  IMPRIMA NA TELA A STRING "\nDigite o sal�rio por hora do funcion�rio: ";
//  RECEBA DO USU�RIO O VALOR DA VARI�VEL preco_hora;
//  SE A VARI�VEL hora FOR MENOR OU IGUALA 40;
//      FA�A A SEGUINTE ATRIBUI��O DE VARI�VEIS: salario = hora * preco_hora;
//  SE N�O
//      FA�A SEGUINTE ATRIBUI��O DE VARI�VEIS: salario = 40 * preco_hora + ( (hora-40) * (preco_hora + preco_hora*0.5) );
//  IMPRIMA NA TELA A STRING "\nSal�rio � de %.2f reais.\n\n", MOSTRANDO O VALOR DA VARI�VEL salario;
//  IMPRIMA NA TELA A STRING "Digite o quanto o trabalhador tem de horas acumuladas (-1 para terminar): ";
//  RECEBA DO USU�RIO O VALOR DA VARI�VEL hora;
//  CASO O VALOR ATRIBUIDO A VARI�VEL hora SEJA -1, ENCERRA A ESTRUTURA DE REPETI��O;
//
//FIM DO PROGAMA;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float hora, preco_hora, salario;
    setlocale(LC_ALL,"");

    printf("Digite o quanto o trabalhador tem de horas acumuladas (-1 para terminar): ");
    scanf("%f", &hora);

    while(hora != -1) {

        printf("\nDigite o sal�rio por hora do funcion�rio: ");
        scanf("%f", &preco_hora);

        if(hora <= 40) {
            salario = hora * preco_hora;
        }
        else {
            salario = 40 * preco_hora + ( (hora-40) * (preco_hora + preco_hora*0.5) );
        }

        printf("\nSal�rio � de %.2f reais.\n\n", salario);

        printf("Digite o quanto o trabalhador tem de horas acumuladas (-1 para terminar): ");
        scanf("%f", &hora);

    }

    return 0;
}
