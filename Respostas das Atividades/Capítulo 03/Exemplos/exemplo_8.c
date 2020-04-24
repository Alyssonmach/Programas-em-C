/*Progama que v� a quantidade de alunos aprovados e reprovados, usando uma estrutura de repeti��o while*/

//Inicializa aprova��es com zero
//Inicializa reprova��es com zero
//
//Enquanto contador de alunos foi menor ou igual a dez
//  L� o pr�ximo resultado do exame
//
//  Se o aluno passou
//      Soma um �s aprova��es
//  Se n�o
//      Soma um as reprova��es
//
//  Soma um ao contador de alunos
//
//Imprimir o n�mero de aprova��es
//Imprimir o n�mero de reprova��es
//Se mais de oito alunos passaram
//Imprimir "B�nus ao instrutor"

#include <stdio.h>
#include <locale.h>

int main (void)
{
    int aprovados = 0, reprovados = 0, aluno = 1, resultado;
    setlocale(LC_ALL,"");

    while(aluno <= 10){

        printf("\nForne�a o resultado (1 - Aprovado / 2 - Reprovado): ");
        scanf("%d", &resultado);

        if(resultado == 1){
            aprovados++;
        }
        else {
            reprovados++;
        }

        aluno++;

    }

    printf("\nAprovados: %d alunos.\n\n", aprovados);
    printf("\nReprovados: %d alunos.\n\n", reprovados);

    if(aprovados >= 8) {
        printf("\nB�nus do instrutor.\n\n");
    }

    return 0;
}
