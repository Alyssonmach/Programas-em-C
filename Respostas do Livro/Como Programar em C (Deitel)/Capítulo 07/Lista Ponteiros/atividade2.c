//Universidade Federal de Campina Grande - UFCG
//Aluno: Alysson Machado de Oliveira Barbosa
//Matr�cula: 119110236
//Turma 03 - Introdu��o a Progama��o
//Professor: Roberto Farias
//Lista de Apontadores

//Exerc�cio 2�

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Constante Simb�lica do tamanho m�ximo dos conjuntos
#define TAM 50

//Prot�tipo das Fun��es
void mostra_array(int*, int);
void uniao(int*, int, int*, int, int*, int*);
int pesquisaLinear(int, int*, int);

//Fun��o Principal
int main(void)
{
	setlocale(LC_ALL,"");
	int conjuntoa[TAM], conjuntob[TAM], conjuntou[TAM*2];
	int tamanhoa, tamanhob, tamanhou = 0;
	int indice, valor;
	
	printf("<<<<<PROGAMA UNI�O DE CONJUNTOS>>>>>\n\n");
	
	do
	{
		printf("Informe o tamanho do conjunto A(1 - 50 inteiros): ");
		scanf("%d", &tamanhoa);
		
		if(tamanhoa <= 0 || tamanhoa > 50)
		{
			printf("Entrada Inv�lida! Digite corretamente!\n");
			system("pause");
			system("cls");
		}
			
	}while(tamanhoa > 50 || tamanhoa <= 0);
	
	printf("\n\n");
	system("pause");
	system("cls");
	
	for(indice = 0; indice <= tamanhoa - 1; indice++)
	{
		printf("\nInforme o %d� elemento de A: ", indice);
		scanf("%d", &valor);
		conjuntoa[indice] = valor;
	}
	
	printf("\n\n");
	system("pause");
	system("cls");
	
	printf("O array digitado �:\n");
	mostra_array(conjuntoa,tamanhoa);
	
	printf("\n\n");
	system("pause");
	system("cls");
	
	do
	{
		printf("Informe o tamanho do conjunto B(1 - 50 inteiros): ");
		scanf("%d", &tamanhob);
		
		if(tamanhob <= 0 || tamanhob > 50)
		{
			printf("Entrada Inv�lida! Digite corretamente!\n");
			system("pause");
			system("cls");
		}
			
	}while(tamanhob > 50 || tamanhob <= 0);
	
	printf("\n\n");
	system("pause");
	system("cls");
	
	for(indice = 0; indice <= tamanhob - 1; indice++)
	{
		printf("\nInforme o %d� elemento de B: ", indice);
		scanf("%d", &valor);
		conjuntob[indice] = valor;
	}
	
	printf("\n\n");
	system("pause");
	system("cls");
	
	printf("O array digitado �:\n");
	mostra_array(conjuntob,tamanhob);
	
	printf("\n\n");
	system("pause");
	system("cls");
	
	uniao(conjuntoa, tamanhoa, conjuntob, tamanhob, conjuntou, &tamanhou);
	
	printf("O array UNI�O �:\n");
	mostra_array(conjuntou,tamanhou);
	
	printf("\n\n");
	
	return 0;
}

//Fun��o respons�vel por imprimir o array na tela
void mostra_array(int *array, int tamanho)
{
	int *arrayPtr;
	
	for(arrayPtr = array; arrayPtr <= array + tamanho - 1; arrayPtr++)
		printf("%2d ", *arrayPtr);
	
	return;
}

//Fun��o respons�vel por formar o conjunto uni�o de dois outros conjuntos
void uniao(int *conjuntoa, int tamanhoa, int *conjuntob, int tamanhob, int *conjuntou, int *tamanhou)
{
	int *apa, *apb, *apu;
	
	for(apa = conjuntoa, apu = conjuntou; apa <= conjuntoa + tamanhoa - 1; apa++, apu++)
	{
		*apu = *apa;
		(*tamanhou)++;
	}
	
	for(apb = conjuntob; apb <= conjuntob + tamanhob - 1; apb++)
		if(!pesquisaLinear(*apb,conjuntou, *tamanhou))
		{
			*apu = *apb;
			apu++;
			(*tamanhou)++;
		}
		
	return;
}

//Fun��o respons�vel por verificar se um dado valor est� presente em um array
int pesquisaLinear(int valor, int *conjuntou, int quantidade)
{
	int *arrayPtr;
	
	for(arrayPtr = conjuntou; arrayPtr <= conjuntou + quantidade - 1; arrayPtr++)
		if(valor == *arrayPtr)
			return 1;
		
	return 0;
}

//Criado por Alysson Machado