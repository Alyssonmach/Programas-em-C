#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");

	int valor, *valorPtr;

	valor = 5;
	valorPtr = &valor;

	printf("O endere�o da vari�vel valor � %p\n", &valor);
	
	printf("O endere�o da vari�vel valorPtr � %p\n", valorPtr);
	
	printf("O valor da vari�vel valorPtr � %d\n", *valorPtr);
	
	printf("O valor da vari�vel valor � %d\n", valor);
	
	printf("&*valorPtr � %p\n", &*valorPtr);
	
	printf("*&valorPtr � %p\n", *&valorPtr);
	
	return 0;
}
