/*M�dia da turma com N alunos usando uma sentinela de parada na estrutura de repeti��o while*/

//Inicializar total como zero
//Inicializar contador como zero
//
//Ler a primeira nota
//Enquanto o usu�rio n�o tiver digitado a sentinela
//  Somar essa nota ao total acumulado
//  Somar um ao contador de notas
//  Ler a pr�xima nota (possivelmente a sentinela)
//
//Se o contador n�o � igual a zero
//  Definir a m�dia como total dividido pelo contador
//  Imprimir a m�dia
//Se n�o
//  Imprimir "Nenhuma nota foi informada"

#include <stdio.h>
#include <locale.h>

int main(void)
{
    float nota, total = 0, contador = 0;
    setlocale(LC_ALL,"");

    printf("\nInforme a nota do aluno, digite -1 para parar: ");
    scanf("%f", &nota);

    while (nota != -1) {

        total = total + nota;

        contador = contador + 1;

        printf("\nInforme a nota do aluno, digite -1 para parar: ");
        scanf("%f", &nota);

    }

    if(contador != 0)
        printf("\nA m�dia �: %.2f", ( total / contador ) );
    else
        printf("\nNenhuma nota foi encontrada.\n\n");

    return 0;
}

