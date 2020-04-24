//TESTADOR DE PAL�NDROMOS

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int numero, copia, reverso;
    setlocale(LC_ALL,"");

    printf("Digite um n�mero inteiro para testar se ele � ou n�o um pal�ndromo: ");
    scanf("%d", &numero);

    copia = numero;
    reverso = 0;

    while (copia != 0) {
        reverso = (reverso*10) + (copia % 10);
        copia = copia / 10;
    }

    printf("\nN�mero invertido: %d.\n", reverso);

    if(numero == reverso) {
        printf("\n� um pal�ndromo!\n\n");
    }
    else {
        printf("\nN�o � um pal�ndromo!\n\n");
    }


    return 0;
}
