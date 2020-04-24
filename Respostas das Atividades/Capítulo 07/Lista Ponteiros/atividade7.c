//Universidade Federal de Campina Grande - UFCG
//Aluno: Alysson Machado de Oliveira Barbosa
//Matr�cula: 119110236
//Turma 03 - Introdu��o a Progama��o
//Professor: Roberto Farias
//Lista de Apontadores

//Exerc�cio 7�

#include <stdio.h>
#include <locale.h>

//Fun��o Principal
int main(void)
{
	setlocale(LC_ALL,"");
	char *meses[] = {"", "Janeiro", "Fevereiro", "Mar�o", "Abril", "Maio", "Junho", "Julho", "Agosto",
 	 	 	 	 	   "Setembro", "Outubro", "Novembro", "Dezembro"};
    int data, dd, mm, aaaa;
    
    printf("<<<<<PROGAMA QUE MOSTRA DATA POR EXTENSO>>>>>\n\n");
    
    printf("Informe a data no estilo (DDMMAAAA): ");
    scanf("%d", &data);
    
    aaaa = data % 10000;
    data /= 10000;
    mm = data % 100;
    data /= 100;
    dd = data;
	
	printf("\n\nA data digitada por extenso �: ");
	printf("%d de %s de %d\n\n", dd, meses[mm], aaaa);
	
	return 0;
}

//Criado por Alysson Machado