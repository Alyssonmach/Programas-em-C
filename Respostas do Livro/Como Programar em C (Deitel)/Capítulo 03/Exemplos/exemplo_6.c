/*Progama que calcula a m�dia de 10 alunos usando a estrutura de repeti��o while*/

//Define total como zero
//Define contador de notas como 1
//
//Enquanto contador de notas � menor ou igual a dez
//  L� a proxima nota
//  Soma a nota ao total
//  Soma um ao contador de notas
//
//Define a m�dia da turma como o total dividido por dez
//Imprime a m�dia da turma

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float nota, total = 0, contador = 1;
    setlocale(LC_ALL,"");

    while(contador <= 10) {

        printf("\nInforme a nota do aluno: ");
        scanf("%f", &nota);

        total = total + nota;

        contador = contador + 1;

    }

    printf("\nM�dia da tura: %.1f pontos.\n\n", ( total / 10 ) );

    return 0;
}


