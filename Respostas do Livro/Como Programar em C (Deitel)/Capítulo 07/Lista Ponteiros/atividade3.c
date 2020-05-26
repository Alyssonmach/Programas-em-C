//Universidade Federal de Campina Grande - UFCG
//Aluno: Alysson Machado de Oliveira Barbosa
//Matr�cula: 119110236
//Turma 03 - Introdu��o a Progama��o
//Professor: Roberto Farias
//Lista de Apontadores

//Exerc�cio 3�

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Constante Simb�lica do tamanho m�ximo do array
#define TAM 100

//Prot�tipo das fun��es
int pesquisaBinaria(int*, int, int);
void bolha(int*, int);
void mostraArray(int*, int);

//Fun��o Principal
int main(void)
{
	setlocale(LC_ALL,"");
	int array[TAM] = {0}, tamanhoa = 0, valor, n, indice;
	
	printf("<<<<<PROGAMA VERIFICA ELEMENTO NO ARRAY>>>>>\n\n");
	
	do
	{
		printf("\nInforme o %d� n�mero inteiro(0 para parar): ", tamanhoa);
		scanf("%d", &valor);
		
		if(valor != 0)
		{
			array[tamanhoa] = valor;
			tamanhoa++;
		}
		
		if(tamanhoa == 100)
			valor = 0;
		
	}while(valor != 0);
	
	printf("\n\n");
	system("pause");
	system("cls");
	
	printf("O array digitado �:\n");
	mostraArray(array,tamanhoa);
	bolha(array, tamanhoa);
	
	printf("\n\n");
	system("pause");
	system("cls");
	
	printf("Informe agora quantos n�meros voc� quer verificar se est�o no array:\n");
	printf("Quantidade: ");
	scanf("%d", &n);
	
	printf("\n\n");
	system("pause");
	system("cls");
	
	for(indice = 1; indice <= n; indice++)
	{
		do
		{
		printf("\nInforme u valor diferente de 0: ");
		scanf("%d", &valor);
		
		if(valor == 0)
			printf("\nEntrada Inv�lida, tente novamente.\n\n");
		}while(valor == 0);
		
		if(pesquisaBinaria(array, valor, tamanhoa) != -1)
		{
			printf("\n\n O valor %d se encontra no elemento %d do array\n\n", valor, pesquisaBinaria(array, valor, tamanhoa));
			mostraArray(array, tamanhoa);			
		}
		else
			printf("\nElemento n�o encontrado no array.\n\n");	
	}
	
	printf("\n\n");
	system("pause");
	system("cls");
	
	return 0;
}

//Fun��o que utiliza pesquisa bin�ria para encontrar o elemento na qual est� um valor em um array
int pesquisaBinaria(int *array, int chave, int tamanho)
{
	int inicio, meio, fim;
	
	inicio = 0;
	fim = tamanho - 1;
	
	while(inicio <= fim)
	{
		meio = (inicio + fim) / 2;
		
		if(chave == array[meio])
			return meio;
		if(chave < array[meio])
			fim = meio - 1;
		else
			inicio = meio + 1;
	}
	
	return -1;
}

//Fun��o que ordena crescentemente os valores do array, utilizando apontadores
void bolha(int *array, int tamanho)
{
	//Fun��o que realiza a permuta dos elementos de forma crescente em um array
	void troca(int *elemento1, int *elemento2);
	int indice1, indice2;
	
	for(indice1 = 0; indice1 <= tamanho - 1; indice1++)
		for(indice2 = 0; indice2 <= tamanho - 2; indice2++)
			if(array[indice2] > array[indice2 + 1])
				troca(&array[indice2], &array[indice2 + 1]);

    return;
}

//Fun��o integrada a Fun��o bolha, respons�vel por realizar a permuta dos elementos de forma crescente em um array
void troca(int *elemento1, int *elemento2)
{
	int auxiliar;
	
	auxiliar = *elemento1;
	*elemento1 = *elemento2;
	*elemento2 = auxiliar;
	
	return;
}

//Fun��o que mostra na tela o array digitado
void mostraArray(int *array, int tamanho)
{
	int *arrayPtr;
	
	for(arrayPtr = array; arrayPtr <= array + tamanho - 1; arrayPtr++)
	{
		printf("%2d ", *arrayPtr);
		
		if((*arrayPtr) % 10 == 0)
			printf("\n");
	}
    
	return;
}

//Criado por Alysson Machado