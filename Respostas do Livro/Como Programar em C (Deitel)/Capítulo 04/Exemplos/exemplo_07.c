//SOMANDO UM INTERVALO DE N�MEROS, UTILIZANDO UMA ESTRUTURA DE REPETI��O E UM CONTADOR

#include <stdio.h>

int main (void)
{
    int numero, soma = 0;

    for(numero = 2; numero <= 100; numero +=2) {
        printf("%d\n", numero);
        soma += numero;
    }

    printf("SOMA: %d.\n\n", soma);

    return 0;
}

