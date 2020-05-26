#include <stdio.h>
#include <locale.h>

int numero_perfeito(int);

int main (void)
{
    setlocale(LC_ALL,"");
    int numero;

    printf("\t\t<<<<<Progama que mostra se um n�mero � perfeito>>>>>\n\n");

    printf("\nInsira um n�mero inteiro: ");
    scanf("%d", &numero);

    switch(numero_perfeito(numero))
    {
        case 1:
            printf("\n� um n�mero perfeto!\n\n");
            break;
        case 0:
            printf("\nN�o � um n�mero perfeito!\n\n");
            break;

    }

    return 0;
}

int numero_perfeito(int valor)
{
    int contador = 0, resultado = 0, perfeito = 0;

    for(int indice = 1; indice <= valor; indice ++)
    {
        contador++;
        resultado = resultado + contador;

        if(resultado == valor)
            perfeito = 1;
    }

    return perfeito;
}
