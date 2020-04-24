#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 10

void imprimeArray( const int[], int);
void escolheCadeira( int[], int);
int verificaCadeira(const int[], int);

int main(void)
{
	setlocale(LC_ALL,"");
	
	int vetor[TAM] = {0};
	int opcao;
	
	printf("\t\t<<<<<SISTEM A�REO FEDERAL AIRLINE>>>>>\n\n");
	
	do 
	{
		
	do 
	{
		
	printf("Por favor, escolha qual classe voc� deseja: ");
	printf("\n1 - Primeira Classe");
	printf("\n2 - Classe Econ�mica");
	printf("\n\tOp��o: ");
	scanf("%d", &opcao);
	
	if(opcao != 1 && opcao != 2)
	{
		printf("\n\nOp��o inv�lida! Tente novamente.\n\n");
		system("pause");
		system("cls");
	}
	else
	{
		printf("\n\n");
		system("pause");
		system("cls");
	}
		
	
	} while(opcao != 1 && opcao != 2);
		
	imprimeArray(vetor, opcao);
	escolheCadeira(vetor, opcao);
	
	if(verificaCadeira(vetor,1) == 1 && verificaCadeira(vetor, 2) == 1)
	{
		printf("\n\nN�o h� mais vagas! Espere outro avi�o.\n\n");
	}
	else if(verificaCadeira(vetor,opcao) == 1)
	{
		do
		{
			
		printf("\n\nA classe que voc� escolheu est� cheia, deseja troc�-la?\n\n");
		printf("\n3 - Sim");
		printf("\n4 - N�o");
		printf("\n\t Op��o: ");
		scanf("%d", &opcao);
		
		if(opcao != 3 && opcao != 4)
		{
			printf("\n\nEntrada Inv�lida! Tente novamente.\n\n");
			system("pause");
			system("cls");
		}
		else
		{
			printf("\n\n");
			system("pause");
			system("cls");
		}
			
		
		}while(opcao != 3 && opcao != 4);
	}
	
	} while(verificaCadeira(vetor,opcao) == 0 || opcao == 3);
	
	return 0;
}

void imprimeArray(const int array[], int escolha)
{
	int indice, cadeiras;
	
	if(escolha == 1)
	{
		printf("\n\nDisponibilidade de cadeiras para a %s:\n", "Primeira Classe");
		printf("Cadeiras:\t");
		
		for(cadeiras = 1; cadeiras <= 5; cadeiras++)
			printf("%4d", cadeiras);
		
		printf("\n        \t");
		
		for(indice = 0; indice <= 4; indice++)
			printf("%4d", array[indice]);
		
		printf("\n\n");
	}
	else if(escolha == 2)
	{
		printf("\n\nDisponibilidade de cadeiras para a %s:\n", "Classe Econ�mica");
		printf("Cadeiras:\t");
		
		for(cadeiras = 6; cadeiras <= 10; cadeiras++)
			printf("%4d", cadeiras);
		
		printf("\n        \t");
		
		for(indice = 5; indice <= 9; indice++)
			printf("%4d", array[indice]);
		
		printf("\n\n");
	}
	
	return;
}

void escolheCadeira( int array[], int escolha)
{
	int indice, cadeira;
	
	if(escolha == 1)
	{
		for(indice = 0; indice <= 4; indice++)
		{
			if(array[indice] == 0)
			{
				array[indice] = 1;
				cadeira = indice + 1;
				break;
			}
		}
	}
	else if(escolha == 2)
		
		for(indice = 5; indice <= 9; indice++)
		{
			if(array[indice] == 0)
			{
				array[indice] = 1;
				cadeira = indice + 1;
				break;
			}
		}
		
		if(verificaCadeira(array, escolha) == 0)
    		printf("\n\nVoc� ficou com o assento N� %d.\n\n", cadeira);
    
    system("pause");
    system("cls");
    
    imprimeArray(array, escolha);
    
    system("pause");
    system("cls");
	
	return;
}

int verificaCadeira(const int array[], int escolha)
{
	int indice;
	
	if(escolha == 1)
	{
		for(indice = 0; indice <= 4; indice++)
		{
			if(array[indice] == 0)
				return 0;
		}
		
    	return 1;
	}
	else 
	{
		for(indice = 5; indice <= 9; indice++)
		{
			if(array[indice] == 0)
				return 0;
		}
		
    	return 1;
	}
	
}