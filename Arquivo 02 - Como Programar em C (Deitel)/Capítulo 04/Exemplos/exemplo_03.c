//REPETI��O CONTROLADA POR CONTADOR COM A ESTRUTURA FOR

#include <stdio.h>

int main (void)
{
    int contador;
    //INICIALIZA��O, CONDI��O DE REPETI��O E INCREMENTA��O
    for(contador = 1; contador <= 10; contador++) {
        printf("%d\n", contador);
    }

    return 0;
}
