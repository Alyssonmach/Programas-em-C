//Progama que mostra se um n�mero inteiro � par ou �mpar;
#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");
    int numero;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    if(numero % 2 == 0)
        printf("\n� par!");
    else
        printf("\n� impar!");

    printf("\n\n");

return 0;
}
