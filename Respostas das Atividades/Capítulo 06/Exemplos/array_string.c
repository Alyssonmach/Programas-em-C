#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"");
	char nome[10], indice;
	
	printf("\t\t<<<<<CONVERTE MIN�SCULAS PARA MAI�SCULAS>>>>>\n\n");
	
	printf("Informe seu primeiro nome em min�sculo: ");
	scanf("%s", nome);
	
	printf("\n\nSeu nome �:\n");
	
	for(indice = 0; nome[indice] != '\0'; indice++)
	{
		printf("%c ", nome[indice] - 32);
	}
	
	return 0;
}