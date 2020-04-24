//Universidade Federal de Campina Grande - UFCG
//Aluno: Alysson Machado de Oliveira Barbosa
//Matr�cula: 119110236
//Turma 03 - Introdu��o a Progama��o
//Professor: Roberto Farias
//Lista de Apontadores

//Exerc�cio 5�

#include <stdio.h>
#include <locale.h>

#define TAM 50

//Prot�tipo da Fun��o
int contemcadeia(char *, char *);

//Fun��o principal
int main(void)
{
	setlocale(LC_ALL,"");
	char string1[TAM], string2[TAM];
	
	printf("<<<<<PROGAMA QUE VERIFICA SE A SEGUNDA CADEIA EST� CONTIDA NA PRIMEIRA>>>>>\n\n");
	
	printf("Informe a %s cadeia: ", "Primeira");
	gets(string1);
	
	printf("Informe a %s cadeia: ", "Segunda");
	gets(string2);
	
	if(contemcadeia(string1,string2))
		printf("\nA primeria cadeia cont�m a segunda.\n\n");
	else
		printf("A primeria cadeia n�o cont�m a segunda.\n\n");
	
	return 0;
}

//Fun��o respons�vel por verificar se a segunda cadeia est� contida na primeira
int contemcadeia(char *cadeia1, char *cadeia2)
{
	char *ap1, *ap2;
	
	ap1 = cadeia1;
	
	while(*ap1 != '\0')
	{
		ap2 = cadeia2;
		while(*ap1 == *ap2 && *ap1 != '\0' && *ap2 != '\0')
		{
			ap1++;
			ap2++;
		}
		if(*ap2 == '\0')
			return 1;
		++cadeia1;
		ap1 = cadeia1;
	}
	
	return 0;
}

//Criado por Alysson Machado