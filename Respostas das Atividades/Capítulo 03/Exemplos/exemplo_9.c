/*Uso de operadores de incremento e decremento*/

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int numero;
    setlocale(LC_ALL,"");

    printf("Insira um n�mero inteiro: ");
    scanf("%d", &numero);

    printf("\nN�mero Digitado: %d;\n\n", numero);
    printf("\nN�mero digitado e p�s-incrementado: %d;\n\n", numero++);
    printf("\nN�mero Digitado: %d;\n\n", numero);

    printf("Insira um n�mero inteiro: ");
    scanf("%d", &numero);

    printf("\nN�mero Digitado: %d;\n\n", numero);
    printf("\nN�mero digitado e pr�-incrementado: %d;\n\n", ++numero);
    printf("\nN�mero Digitado: %d;\n\n", numero);

    return 0;
}
