//ACHE O MENOR;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int numero, menor = 99999, controlador, indice;
    setlocale(LC_ALL,"");

    printf("PROGAMA QUE ACHA O MENOR DOS N�MEROS.");

    printf("\n\nDigite quantos n�meros ser�o testados: ");
    scanf("%d", &controlador);

    for(indice = 1; indice <= controlador; indice++) {
        printf("\nDigite um n�mero: ");
        scanf("%d", &numero);

        if(numero <= menor) {
            menor = numero;
        }

    }

    printf("\nN�mero menor: %d.\n\n", menor);

    return 0;
}
