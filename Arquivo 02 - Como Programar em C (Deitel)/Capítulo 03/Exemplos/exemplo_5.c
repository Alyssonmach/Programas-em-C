//Progama que mostra o produto de 3, at� o n�mero 100

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int produto = 3;
    setlocale(LC_ALL,"");

    printf("\nProgama que mostra o produto de 3, at� o n�mero 100.\n\n");

    while (produto <= 100) {

        printf("\n%d", produto);
        produto = 3 * produto;

    }

    printf("\n\n");

    return 0;
}
