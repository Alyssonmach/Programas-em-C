//Progama que calc�la o IMC de uma pessoa;
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {

    setlocale(LC_ALL,"");
    float peso, altura, resultado = 0;

    printf ("\t\t\aCalculadora do �ndice de massa corporal.\n\n");
    printf ("Preencha as informa��es abaixo:\n\n");
    printf ("Peso corporal em quilogramas(KG): ");
    scanf ("%f", &peso);
    printf ("\nAltura em metros(M): ");
    scanf ("%f", &altura);
    printf("\n\n");
    system ("pause");
    resultado = peso/(altura*altura);
    printf ("\n\nO seu �ndice de massa corporar �: %f.\n\n", resultado);
    printf ("\n\n\t\tAgora vamos analisar a sua situa��o...\n\n");
    system ("pause");
    if (resultado < 18.5)
        printf ("\n\nVoc� est� abaixo do peso!\n\n");
    if (resultado > 18.5 && resultado < 24.9)
         printf ("\n\nVoc� est� com o peso normal!\n\n");
    if (resultado > 25 && resultado < 29.9)
         printf ("\n\nVoc� est� acima do peso!\n\n");
    if (resultado > 30)
         printf ("\n\nVoc� est� obeso!\n\n");

return 0;
}
