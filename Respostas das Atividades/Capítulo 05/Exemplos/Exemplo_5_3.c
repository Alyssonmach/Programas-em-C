//Criando e usando uma fun��o definida pelo progamador.

#include <stdio.h>

int square(int y); //Prot�tipo de uma fun��o.

int main (void)
{
    int x; //contador.

    //lopp 10 vezes e calcula e exibe o quadrado de x a cada vez.
    for(x = 1; x <= 10; x = x + 1) {
        printf("%4d", square(x)); //Chamada da fun��o.
    } //Fim do for.

    printf("\n");

    return 0; //Indica conclus�o bem-sucedida.
} //Fim do main.

//Defini��o da fun��o square retorna o quadrado do par�metro.
int square(int y){ //y � uma c�pia do argumento a fun��o.
    return y*y; //retorna o quadrado de y com um int.
} //Fim da fun��o square.
