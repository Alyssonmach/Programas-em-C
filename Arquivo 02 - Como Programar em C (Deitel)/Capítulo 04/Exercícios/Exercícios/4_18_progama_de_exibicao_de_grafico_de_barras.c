#include <stdio.h>
#include <locale.h>

int main (void)
{
    int historiograma;
    setlocale(LC_ALL,"");

    printf("PROGAMA QUE MONTA UM HISTORIOGRAMA.\n\n");
    printf("\nDigite o limite inteiro gr�fico (1 a 30): ");
    scanf("%d", &historiograma);
    printf("\n\n");

    if(historiograma >= 1 && historiograma <= 30 ) {

        for(int indice = 1; indice <= historiograma; indice ++ ) {
            printf("%s", "*");
        }

    printf("\n\n");

    }
    else
        printf("\nEntrada inv�lida.\n\n");

    return 0;
}
