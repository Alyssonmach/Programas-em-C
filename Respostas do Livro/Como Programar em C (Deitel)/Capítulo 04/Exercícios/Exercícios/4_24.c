#include <stdio.h>
#include <locale.h>

int main (void)
{
    int i = 1, j = 2, k = 3, m = 2;

    printf("%d\n", i == 1);
    printf("%d\n", j == 3);
    printf("%d\n", i >= 1 && j < 4);
    printf("%d\n", m <= 99 && k < m);
    printf("%d\n", j >= i || k == m);
    printf("%d\n", k + m < j || 3 - j >= k);
    printf("%d\n", !m);
    printf("%d\n", !(j - m) );
    printf("%d\n", !(k > m) );
    printf("%d\n", !(j > k) );

    //O PROGAMA EM QUEST�O ATESTA AS CONDI��ES L�GICAS DADAS E INFORMA SE S�O VERDADEIRAS OU FALSAS,
    //CASO VERDADEIRAS � UM N�MERO DIFERENTE DE ZER, CASO FALSO O MESMO � IGUAL A ZERO;


    return 0;
}
