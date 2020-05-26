//Lista 6.1 - Fun��es e Arrays
//Quest�o 6.28
//Aluno: Alysson Machado de Oliveira Barbosa
//Matr�cula: 119110236
//Turma 03

#include <stdio.h>
#include <locale.h>

#define TAM 20

//Prot�tipo da fun��o
int pesquisaBinaria(int[], int, int);

//Fun��o principal
int main(void)
{
	setlocale(LC_ALL,"");
	int vetor[20] = {0}, contador = 0, valor, indice;
	
	printf("<<<<<PROGAMA ELIMINA��O DE DUPLICATAS>>>>>\n\n");
	
	do
	{
		printf("Informe um valor de 1 - 20: ");
		scanf("%d", &valor);
		
		if(pesquisaBinaria(vetor, valor, TAM) == 0)
		{
			vetor[contador] = valor;
			contador++;
		}
		else
			printf("\nValor j� digitado, tente outro!\n");
		
	}while(contador != 20);
	
	for(indice = 0; indice <= TAM - 1;indice++)
		printf("%d ",vetor[indice]);
	
	return 0;
}

//Fun��o que pesquisa, linearmente, se o n�mero digitado j� est� no vetor
int pesquisaBinaria(int vetor[], int chave, int tamanho)
{
	int indice;
	
	for(indice = 0; indice <= tamanho - 1; indice++)
	{
		if(vetor[indice] == chave)
			return 1; //Indica que o valor j� foi digitado
	}
	
	return 0; //Indica que o valor n�o existe no vetor
}

//Criado por Alysson Machado