/*Pr�-incrementado versus p�s-incrementando*/

#include <stdio.h>;
#include <locale.h>

int main (void)
{
    int numero;
    setlocale(LC_ALL,"");

    printf("Informe um n�mero inteiro: ");
    scanf("%d", &numero);

    printf("\nO n�mero agora �: %d.", numero);
    printf("\nO n�mero pr�-incrementando �: %d.", ++numero);
    //ATRIBUIR O VALOR 1 SOMADO AO QUE J� TINHA A ESSA VARI�VEL PARA DEPOIS REALIZAR A OPERA��O;
    printf("\nO n�mero agora �: %d.", numero);
    printf("\nO n�mero p�s-incrementando �: %d.", numero++);
    //REALIZA A OPERA��O PARA DEPOIS ATRIBUIR O VALOR 1 SOMADO AO QUE J� TINHA A ESSA VARI�VEL;
    printf("\nO n�mero agora �: %d.", numero);

    return 0;
}
