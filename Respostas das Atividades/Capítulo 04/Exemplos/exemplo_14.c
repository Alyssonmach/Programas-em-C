//USANDO O OPERADOR DE NEGA��O L�GICA

#include <stdio.h>

int main (void)
{
    int contador = 0;
//TRANSFORMA ALGUMA EXPRESS�O NO OPOSTO DO SEU VALOR L�GICO
    while( !(contador == 10) ) {

        contador++;
        printf("%5d", contador);

    }

    return 0;
}
