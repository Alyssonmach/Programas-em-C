//SOMA DE UMA SEQU�NCIA DE INTEIROS;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int numero, contador, soma = 0, indice;
    setlocale(LC_ALL,"");

    printf("PROGAMA QUE SOMA UMA S�RIE DE INTEIROS.\n\n");

    printf("Digite quantos inteiros voc� quer somar: ");
    scanf("%d", &contador);

    for(indice = 1; indice <= contador; indice++) {
        printf("\nDigite um n�mero: ");
        scanf("%d", &numero);
        soma += numero;
    }

    printf("\nSOMA: %d.\n\n", soma);

    return 0;
}
