//M�DIA DE UMA SEQU�NCIA DE INTEIROS;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int numero, soma = 0, contador = 0;
    setlocale(LC_ALL,"");

    printf("PROGAMA QUE CALCULA A M�DIA DE IN�MEROS INTEIROS.\n\n");

    do {

        printf("Digite um n�mero (9999 para parar): ");
        scanf("%d", &numero);

        if( !(numero == 9999) ) {
            soma += numero;
            contador++;
        }

    }while( !(numero == 9999));

    printf("\nM�dia: %d.\n\n", (soma / contador) );

    return 0;
}
