/*Usando instru��es if, operadores relacionais e operadores de igualdade*/
#include <stdio.h>
#include <locale.h> //biblioteca da linguagem padr�o da m�quina
//Fun��o main inicia a execu��o do progama
int main (void)
{
    int num1; //Primeiro n�mero do usu�rio a ser lido
    int num2; //Segundo n�mero do usu�rio a ser lido

    setlocale(LC_ALL,""); //Funn��o para ler strings acentuadas

    printf("Entre com dois inteiros e eu lhe direi\n");
    printf("as rela��es que eles satisfazem: ");

    scanf("%d%d", &num1, &num2); //L� dois inteiros

    if(num1 == num2) {
        printf("%d � igual a %d\n", num1, num2);
    } //Fim do if
    if(num1 != num2) {
        printf("%d n�o � igual a %d\n", num1, num2);
    } //Fim do if
    if(num1 < num2) {
        printf("%d � menor que %d\n", num1, num2);
    } //Fim do if
    if(num1 > num2) {
        printf("%d � maior que %d\n", num1, num2);
    } //Fim do if
    if(num1 <= num2) {
        printf("%d � menor ou igual que %d\n", num1, num2);
    } //Fim do if
    if(num1 >= num2) {
        printf("%d � maior ou igual que %d\n", num1, num2);
    } //Fim do if

    return 0; //Indica que o progama foi concluido com sucesso
} //Fim da fun��o main
