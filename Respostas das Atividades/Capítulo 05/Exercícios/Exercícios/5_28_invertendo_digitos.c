#include <stdio.h>
#include <locale.h>

void inverte(int);

int main (void)
{
    setlocale(LC_ALL,"");
    int numero;

    printf("\t\t<<<<<PROGAMA QUE INVERTE O N�MERO>>>>>\n");

    printf("\nInsira um n�mero: ");
    scanf("%d", &numero);

    inverte(numero);

    return 0;
}

void inverte(int num)
{
    int resultado = 0;

    while(num != 0)
    {

        resultado = (resultado * 10) + (num % 10);
        num /= 10;
    }

    printf("\nN�mero invertido �: %d.\n\n", resultado);
}
