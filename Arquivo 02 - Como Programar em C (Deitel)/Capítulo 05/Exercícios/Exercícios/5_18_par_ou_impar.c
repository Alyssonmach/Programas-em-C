#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int par_impar(int num);

int main (void)
{
    setlocale(LC_ALL,"");
    int numero;

    printf("\t\t<<<<<PROGAMA QUE CALCULA SE UM N�MERO � �MPAR OU PAR.>>>>>\n");

    do
    {

    printf("\nInsira um n�mero inteiro(-1 para parar): ");
    scanf("%d", &numero);

        if(numero != -1)
        {
            if(par_impar(numero))
            {
                printf("\nO n�mero %d � par!\n\n", numero);
            }
            else
            {
                printf("\nO n�mero � %d �mpar!\n\n", numero);
            }

                system("pause");
                system("cls");
        }

    }while(numero != -1);

    return 0;
}

int par_impar(int num)
{
    if(num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

