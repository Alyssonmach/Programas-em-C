//CALCULANDO JUROS COMPOSTOS

#include <stdio.h>
#include <math.h>

int main (void)
{
    //N�MERO TIPO DOUBLE � O MESMO QUE N�MERO FLUTUANTE, A DIFEREN�A EST� NA PRECIS�O
    //DOUBLE � MAIS PRECISO
    double valor, principal = 1000.0, taxa = 0.05;
    int ano;

    printf("%4s%21s\n", "Ano", "Valor na conta");

    for(ano = 1; ano <= 10; ano = ano + 1) {

        valor = principal * pow(1.0 + taxa,ano);

        printf("%4d%21.2f\n", ano, valor);
    }

    return 0;
}
