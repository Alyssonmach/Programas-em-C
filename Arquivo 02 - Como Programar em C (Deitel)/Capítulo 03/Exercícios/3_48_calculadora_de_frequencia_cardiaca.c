//CALCULADORA DE FREQU�NCIA CARDIACA;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int idade;
    setlocale(LC_ALL,"");

    printf("PROGAMA QUE MOSTRA A FREQU�NCIA CARDI�CA NORMAL E M�XIMA DO USU�RIO.\n");

    printf("\nDigite a sua idade: ");
    scanf("%d", &idade);

    printf("\nFrequ�ncia Card�aca normal: %d bat/min.", (220 - idade) );
    printf("\nFrequ�ncia Card�aca m�xima: %.0f bat/min.", (208 - (0.7 * idade)) );

    return 0;
}
