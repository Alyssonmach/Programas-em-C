#include <stdio.h>
#include <locale.h>

int mistery(int a, int b); //Prot�tipo da fun��o;

//Fun��o main inicia a execu��o do progama;
int main(void)
{
    setlocale(LC_ALL,"");
    int x; //Primeiro Inteiro;
    int y; //Segundo Inteiro;

    printf("\nDigite dois inteiros: ");
    scanf("%d%d", &x, &y);

    if(y >= 0)
        printf("\nO resultado � %d\n", mistery(x, y));
    else
        printf("\nO resultado � %d\n", -1 * mistery(x, y)); //Garantindo a rela��o de sinais;

    return 0; //Indica conclus�o bem sucedida;
} //Fim da fun��o principal;

//Par�metro b deve ser um inteiro positivo para imperdir recurs�o infinita;

int mistery(int a, int b)
{
    if(b < 0)
        b = b*-1; //Tiro o sinal negativo de b, se for menor que zero, e restauro na fun��o principal;
    //Caso b�sico;
    if(b == 1)
        return a;
    else //Etapa recursiva;
        return  a + mistery(a, b - 1); //Fim do else;
} // Fim da fun��o mistery;

//O PROGAMA EM QUEST�O REALIZA UMA MULTIPLICA��O ENTRE DOIS N�MEROS POR RECURSIVIDADE;

