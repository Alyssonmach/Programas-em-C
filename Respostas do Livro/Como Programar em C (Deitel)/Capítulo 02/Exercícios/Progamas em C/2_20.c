//Progama que calcula o di�metroa, a circunfer�cia e a �rea de um c�rculo;
#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");
    float raio;

    printf("Informe o raio da circunfer�ncia: ");
    scanf("%f", &raio);

    printf("\n\nO diam�tro �: %.2f", (2*raio) );
    printf("\n\nA circunfer�ncia � %.2f", (2*3.14159*raio) );
    printf("\n\nA �rea � %.2f", (3.14159*raio*raio) );

    printf("\n\n");

return 0;
}
