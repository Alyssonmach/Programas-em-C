/*Progama de Adi��o*/
#include <stdio.h>

//Fun��o main inicia a execu��o do progama
int main (void)
{
    int inteiro1; //Primeiro n�mero a ser informado pelo usu�rio
    int inteiro2; //Segundo n�mero a ser informado pelo usu�rio
    int soma; //Vari�vel em que a soma ser� mantida

    printf("Digite o primeiro inteiro\n"); //Prompt
    scanf("%d", &inteiro1); //l� um inteiro

    printf("Digite o primeiro inteiro\n"); //Prompt
    scanf("%d", &inteiro2); //l� um inteiro

    soma = inteiro1 + inteiro2; //Atribui o total a soma;

    printf("A soma vale %d\n", soma); //print soma

    return 0; //Indica que o progama foi concluido com sucesso
} //Fim da fun��o main
