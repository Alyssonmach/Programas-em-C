/*ACHE O N�MERO MAIOR*/

//DECLARE AS VARI�VEIS TIPO INTEIRO contador = 0, numero E maior = 0, REALIZANDO AS ATRIBUI��ES INICIAIS DEVIDAS;
//
//ENQUANTO CONTADOR FOR DIFERENTE DE 10;
//  IMPRIMA NA TELA A STRING "\nInsira um n�mero inteiro: ";
//  PE�A QUE O USU�RIO INFORME O VALOR DA VARI�VEL numero;
//  SE A VARI�VEL numero FOR MAIOR QUE A VARI�VEL maior:
//      FA�A A SEGUNTE ATRIBUI��O:  maior = numero;
//  INCREMENTAR A VARI�VEL contador O VALOR 1;
//  QUANDO A VARI�VEL contador TIVER UM VALOR ATRIBUIDO NA MEM�RIA 10, A ESTRUTURA DE REPETI��O SE ENCERRAR�;
//
// IMPRIMA NA TELA A STRING "\nN�mero maior �: %d.\n\n", MOSTRANDO O VALOR ATRIBUIDO A VARI�VEL maior;
//
//FIM DO PROGAMA;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int contador = 0, numero, maior = 0;
    setlocale(LC_ALL,"");

    while(contador != 10) {

    printf("\nInsira um n�mero inteiro: ");
    scanf("%d", &numero);

    if(numero > maior) {
        maior = numero;
    }

    contador++;

    }

    printf("\nN�mero maior �: %d.\n\n", maior);

    return 0;
}
