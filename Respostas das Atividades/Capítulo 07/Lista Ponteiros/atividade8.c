//Universidade Federal de Campina Grande - UFCG
//Aluno: Alysson Machado de Oliveira Barbosa
//Matr�cula: 119110236
//Turma 03 - Introdu��o a Progama��o
//Professor: Roberto Farias
//Lista de Apontadores

//Exerc�cio 8�

#include <stdio.h>
#include <locale.h>

//Fun��o Principal
int main(void)
{
	setlocale(LC_ALL,"");
	char *unidade[10] = {"","Primeiro", "Segundo", "Terceiro", "Quarto", "Quinto", "Sexto", 
 	 	 	 	 	 	 "S�timo", "Oitavo", "Nono"};
    char *dezena[10] = {"","D�cimo", "Vig�simo", "Trig�simo", "Quadrag�simo", "Quinquag�simo",
						"Sexag�simo","Septuag�simo", "Octag�simo", "Nonag�simo"};
    char *centesimo[10] = {"", "Cent�simo", "Ducent�simo", "Trecent�simo", "Quadringencent�simo",
                           "Quingent�simo","Sexcent�simo", "Sentigent�simo","Octingent�simo",
						   "Nongent�simo"};
    int numero, uni, dez, cent;
    
    printf("<<<<<Progama N�meros Ordinais>>>>>\n\n");
    
    printf("Informe um valor em n�meros: ");
    scanf("%d", &numero);
    
    printf("\n\nA vers�o em ordinal �: ");
    
    if(numero == 1000)
    	printf("Mil�simo\n\n");
    else
	{
		uni = numero % 10;
		dez = (numero % 100) / 10;
		cent = numero / 100;
		
		printf("%s %s %s\n\n", centesimo[cent], dezena[dez], unidade[uni]);
	}
    
	return 0;
}

//Criado por Alysson Machado