//Progama que mostra a soma, o produto, a diferen�a, o quociente e o m�dulo;
#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");
    int numero1, numero2, soma, produto, diferenca, quociente, modulo;

    printf("Digite dois n�meros inteiros: ");
    printf("\n\nN�mero 01: ");
    scanf("%d", &numero1);
    printf("\n\nN�mero 01: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    produto = numero1 * numero2;
    diferenca = numero1 - numero2;
    quociente = numero1 / numero2;
    modulo = numero1 % numero2;

    printf("\nSoma: %d", soma);
    printf("\nProduto: %d", produto);
    printf("\nDiferen�a: %d", diferenca);
    printf("\nQuociente: %d", quociente);
    printf("\nModulo: %d", modulo);

    printf("\n\n");

return 0;
}
