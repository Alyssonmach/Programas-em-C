//LADOS DE UM TRI�NGULO RET�NGULO

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void)
{
    float lado1, lado2, lado3;
    setlocale(LC_ALL,"");

    printf("INFORME TR�S LADOS DE UM TRI�NGULO RET�NGULO.\n");
    printf("\nLado 01: ");
    scanf("%f", &lado1);
    printf("\nLado 02: ");
    scanf("%f", &lado2);
    printf("\nLado 03: ");
    scanf("%f", &lado3);

    if((lado1*lado1 + lado2*lado2 == lado3*lado3) || (lado2*lado2 + lado3*lado3 == lado1*lado1) || (lado1*lado1 + lado3*lado3 == lado2*lado2))
         printf("\n� UM TRI�NGULO RET�NGULO V�LIDO.\n\n");
    else
        printf("\nN�O � UM TRI�NGULO RET�NGULO V�LIDO.\n\n");

    return 0;
}
