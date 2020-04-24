//Universidade Federal de Campina Grande - UFCG
//Aluno: Alysson Machado de Oliveira Barbosa
//Matr�cula: 119110236
//Turma 03 - Introdu��o a Progama��o
//Professor: Roberto Farias
//Lista de Apontadores

//Exerc�cio 6�

#include <stdio.h>
#include <locale.h>

//Prot�tipo das Fun��es
void converteminuscula(char *);
void conta_letras(char *, int *);

//Fun��o Principal
int main(void)
{
	setlocale(LC_ALL,"");
	int letras[26] = {0};
	char string[250];
	int indice;
	
	printf("<<<<<PROGAMA QUE CONTA A OCORR�NCIA DE LETRAS>>>>>\n\n");
	
	printf("Informe uma cadeia de caracteres(M�ximo 250):\n");
	gets(string);
	
	converteminuscula(string);
	conta_letras(string,letras);
	
	for(indice = 0; indice <= 26 - 1; indice++)
	{
		printf("%c = %d\n", indice + 97, letras[indice]);
		
	}
	
	
	return 0;
}

//Fun��o respons�vel por converter as letras em min�sculas para facilitar a contagem
void converteminuscula(char *caracteres)
{
	while(*caracteres != '\0')
	{
		if(*caracteres >= 'A' && *caracteres <= 'Z')
			(*caracteres) += 32;
		caracteres++;
	}
	return;
}

//Fun��o respons�vel por contar a frequ�ncia das letras
void conta_letras(char *caracteres, int *frequencia)
{
	int auxiliar;
	
	while(*caracteres != '\0')
	{
		auxiliar = *caracteres;
		frequencia[auxiliar - 97]++;
		caracteres++;
	}
	
	return;
}

//Criado por Alysson Machado