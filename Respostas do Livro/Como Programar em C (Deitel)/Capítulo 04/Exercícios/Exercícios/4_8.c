#include <stdio.h>

int main (void)
{
    int x, y, i, j;

    printf("DIGITE DOIS INTEIROS NO INTERVALO DE 1 - 20: ");
    scanf("%d%d", &x, &y);

    for(i = 1; i <= y; i++){

        for (j = 1; j <= x; j++) {
            printf("@");
        }
        printf("\n");
    }

    return 0;
}

//O PROGAMA EM QUEST�O IMPRIME UM RET�NGULO EM QUE O USU�RIO � RESPONS�VEL POR DIGITAR O VALOR DOS LADOS;
