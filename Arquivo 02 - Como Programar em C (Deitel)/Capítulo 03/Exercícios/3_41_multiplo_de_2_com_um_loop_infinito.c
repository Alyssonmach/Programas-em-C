//MULTIPLO DE 2 COM UM LOOP INFINITO

#include <stdio.h>

int main (void)
{
    int contador = 2, indice;

    while (contador != 0) {
        printf("%d\n", contador);
        contador = contador * 2;
    }

    return 0;
}

/*
Assim, em 32 bits, o maior inteiro que o processador consegue lidar � 4.294.967.295 e isto apenas se for considerado
n�meros inteiros positivos, sem sinal. Como os processadores utilizam a representa��o complemento de dois para n�meros inteiros,
ao permitir que se use sinal a faixa de representa��o de um inteiro em 32 bits vai de -2.147.483.648 at� +2.147.483.647
(com complemento de dois ganha-se uma representa��o a mais no lado negativo).
*/
