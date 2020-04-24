#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int multiplos(int num1, int num2);

int main (void)
{
    setlocale(LC_ALL,"");

    int numero1, numero2;

    printf("\t\t<<<<<Progama se diz se o segundo n�mero � m�ltiplo>>>>>\n");

    do
    {

        printf("\nInforme o primeiro n�mero(-1 para parar): ");
        scanf("%d", &numero1);

        if(numero1 != -1)
        {
            printf("\nInforme o segundo n�mero: ");
            scanf("%d", &numero2);

            if(multiplos(numero1,numero2))
            {
                printf("\n%d � um n�mero m�ltiplo de %d.\n\n", numero2, numero1);
            }
            else
            {
                printf("\n%d n�o � um n�mero m�ltiplo de %d.\n\n", numero2, numero1);
            }

            system("pause");
            system("cls");

        }


    }while(numero1 != -1);

    return 0;
}

int multiplos(int num1, int num2)
{
    if(num2 % num1 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
