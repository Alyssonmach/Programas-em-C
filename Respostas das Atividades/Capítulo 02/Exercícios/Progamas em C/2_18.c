//Progama que compara n�meros inteiros;
#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");
    int numero1, numero2;

    printf("Digite dois n�meros inteiros: ");
    printf("\nN�mero 01: ");
    scanf("%d", &numero1);
    printf("\nN�mero 02: ");
    scanf("%d", &numero2);

    if(numero1 > numero2)
        printf("N�mero %d � maior que %d", numero1, numero2);
    else
        if(numero1 < numero2)
            printf("N�mero %d � menor que %d", numero1, numero2);
    else
        printf("N�mero %d � igual a %d", numero1, numero2);

    printf("\n\n");

return 0;
}
