//Progama que verifica se um n�mero � m�ltiplo do outro;
#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");
    int numero, multiplo;

    printf("Digite um n�mero inteiro e outro para verificar se esse � m�ltiplo daquele.");
    printf("\nN�mero: ");
    scanf("%d", &numero);
    printf("Poss�vel m�ltiplo: ");
    scanf("%d", &multiplo);

    if(multiplo % numero == 0)
        printf("\n\n%d � m�ltiplo de %d.", multiplo, numero);
    else
        printf("\n\n%d n�o � m�ltiplo de %d.", multiplo, numero);

    printf("\n\n");

return 0;
}
