//ALTERNATIVA DE PLANO DE IMPOSTO

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float moradia, alimentacao, vestuario, transporte, educacao, saude, ferias, soma;
    setlocale(LC_ALL,"");

    printf("QUANTO VOC� GASTA COM MORADIA POR M�S: ");
    scanf("%f", &moradia);
    printf("\nQUANTO VOC� GASTA COM ALIMENTA��O POR M�S: ");
    scanf("%f", &alimentacao);
    printf("\nQUANTO VOC� GASTA COM VESTU�RIO POR M�S: ");
    scanf("%f", &vestuario);
    printf("\nQUANTO VOC� GASTA COM TRANSPORTE POR M�S: ");
    scanf("%f", &transporte);
    printf("\nQUANTO VOC� GASTA COM EDUCA��O POR M�S: ");
    scanf("%f", &educacao);
    printf("\nQUANTO VOC� GASTA COM SA�DE POR M�S: ");
    scanf("%f", &saude);
    printf("\nQUANTO VOC� GASTA COM F�RIAS POR M�S: ");
    scanf("%f", &ferias);

    soma = moradia + alimentacao + vestuario + transporte + educacao + saude + ferias;
    soma = soma*0.23;

    printf("\nIMPOSTO MENSAL FAIRTAX: %.2f", soma);



    return 0;
}
