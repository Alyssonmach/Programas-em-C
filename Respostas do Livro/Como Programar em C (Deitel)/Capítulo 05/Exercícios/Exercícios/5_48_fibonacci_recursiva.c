#include <stdio.h>
#include <locale.h>

int fibonacci(int);

int main(void)
{
    setlocale(LC_ALL,"");
    int enesimo;

    printf("\n<<<<<PROGAMA DA S�RIE DE FIBONACCI RECURSIVA>>>>>\n\n");

    printf("\nInsira o valor do en�simo termo: ");
    scanf("%d", &enesimo);

    printf("\n\nValor da sequ�ncia de Fibonacci: %d.\n\n", fibonacci(enesimo));

    return 0;
}

int fibonacci(int n)
{
    if(n == 1)
        return 1;
    else if(n == 2)
        return 1;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}
