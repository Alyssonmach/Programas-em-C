//DIAMETRO, CIRCUNFER�NCIA E �REA DE UM C�RCULO

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void)
{
    float raio, diametro, circunferencia, area, pi = 3.14159;
    setlocale(LC_ALL,"");

    printf("INFORME O RAIO DO C�RCULO: ");
    scanf("%f", &raio);

    diametro = raio * 2;
    circunferencia = 2 * pi * raio;
    area = pi * pow(raio,2);

    printf("\nDI�METRO: %.2f", diametro);
    printf("\nCIRCUNFER�NCIA: %.2f", circunferencia);
    printf("\n�REA: %.2f", area);

    return 0;
}

