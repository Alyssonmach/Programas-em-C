#include <stdio.h>

//Fun��o main inicia a execu��o do progama;

int main(void)
{
    int c; //vari�vel para manter a entrada de caractere pelo usu�rio;

    if((c = getchar() ) != EOF)
    {
        main();
        printf("%c", c);
    } //Fim do if;

    return 0; //Indica conclus�o bem sucedida;
} //Fim da main;


//COM ESSE PROGAMA � POSS�VEL ESCREVER DIVERSOS CARACTERES;

