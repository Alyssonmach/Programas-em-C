#include <stdio.h>
#include <locale.h>

int main()
{
    static int count = 1;

    printf("%d", count++);

    return main(count);
}

//A fun��o main n�o pode retornar ela mesma na estrutura por recursividade;
