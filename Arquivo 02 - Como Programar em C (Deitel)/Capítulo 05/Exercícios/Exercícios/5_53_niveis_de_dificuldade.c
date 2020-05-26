#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void soma(void);
void multiplicacao(void);
void subtracao(void);

int main (void)
{
    setlocale(LC_ALL,"");
    int opcao;

    srand(time(NULL));

    printf("<<<<<PROGAMA PARA APRENDER TABUADA>>>>>\n\n");

    do
    {
        printf("\nEscolha uma das op��es abaixo(-1 para parar):\n");
        printf("\n1 - Soma;");
        printf("\n2 - Subtra��o;");
        printf("\n3 - Multiplica��o;");
        printf("\n\t\tOp��o: ");
        scanf("%d", &opcao);

        printf("\n\n");
        system("pause");
        system("cls");

        if(opcao == 1)
            soma();
        else if(opcao == 2)
            subtracao();
        else if(opcao == 3)
            multiplicacao();
        else if( opcao != -1)
            printf("\nOp��o inv�lida, por favor tente novamente!");

        printf("\n\n");

        if(opcao < 1 || opcao > 3)
        {
            system("pause");
            system("cls");
        }

    }while(opcao != -1);

    return 0;
}

void soma(void)
{
    int numero1, numero2, resposta, soma, erradas = 0, dificuldade, multiplicador = 1;

    do
    {
        printf("\nVamos aprender a somar!\n\n");

        printf("\n\nInsira o n�vel de dificuldade do problema: ");
        scanf("%d", &dificuldade);

        for(int indice = 1; indice <= dificuldade; indice++)
        {
            multiplicador = multiplicador * 10;
        }

        numero1 = (rand() % (9 * multiplicador))+ 1;
        numero2 = (rand() % (9 * multiplicador))+ 1;
        soma = numero1 + numero2;
        multiplicador  = 1;

        printf("\n\nQual a soma entre %d e %d?\n\tResposta: ", numero1, numero2);
        scanf("%d", &resposta);

        if(resposta == soma)
            printf("\nVoc� acertou!!\n\n");
        else
        {
            printf("Que pena! Tente novamente!\n\n");
            erradas++;
        }

        system("pause");
        system("cls");

    }while(resposta != soma);

    printf("\n\nAntes de acertar, voc� errou %d vezes.\n\n", erradas);
        if(erradas == 0)
            printf("\nMuito bem! Voc� relmente est� pronto para avan�ar!\n\n");
        if(erradas >= 1 && erradas <= 3)
            printf("\nVoc� est� na m�dia, mas sempre � bom estudar!\n\n");
        if(erradas > 3)
            printf("\nVoc� precisa treinar mais!!\n\n");

    system("pause");
    system("cls");
}

void multiplicacao(void)
{
    int numero1, numero2, resposta, multiplicacao, erradas = 0, dificuldade, multiplicador = 1;

    do
    {

        printf("\n\nVamos aprender a multiplicar!\n\n");

        printf("\n\nInsira o n�vel de dificuldade do problema: ");
        scanf("%d", &dificuldade);

        for(int indice = 1; indice <= dificuldade; indice++)
        {
            multiplicador = multiplicador * 10;
        }

        numero1 = (rand() % (9 * multiplicador))+ 1;
        numero2 = (rand() % (9 * multiplicador))+ 1;
        multiplicacao = numero1 * numero2;
        multiplicador = 1;

        printf("\n\nQual a multiplica��o entre %d e %d?\n\tResposta: ", numero1, numero2);
        scanf("%d", &resposta);

        if(resposta == multiplicacao)
            printf("\nVoc� acertou!!\n\n");
        else
        {
            printf("Que pena! Tente novamente!\n\n");
            erradas++;
        }

        system("pause");
        system("cls");

    }while(resposta != multiplicacao);

    printf("\n\nAntes de acertar, voc� errou %d vezes.\n\n", erradas);
        if(erradas == 0)
            printf("\nMuito bem! Voc� relmente est� pronto para avan�ar!\n\n");
        if(erradas >= 1 && erradas <= 3)
            printf("\nVoc� est� na m�dia, mas sempre � bom estudar!\n\n");
        if(erradas > 3)
            printf("\nVoc� precisa treinar mais!!\n\n");

    system("pause");
    system("cls");

}
void subtracao(void)
{
    int numero1, numero2, resposta, subtracao, erradas = 0, dificuldade, multiplicador = 1;

    do
    {
        printf("\n\nVamos aprender a subtrair!\n\n");

        printf("\n\nInsira o n�vel de dificuldade do problema: ");
        scanf("%d", &dificuldade);

        for(int indice = 1; indice <= dificuldade; indice++)
        {
            multiplicador = multiplicador * 10;
        }

        numero1 = (rand() % (9 * multiplicador))+ 1;
        numero2 = (rand() % (9 * multiplicador))+ 1;
        subtracao = numero1 - numero2;
        multiplicador = 1;

        printf("\n\nQual a subtracao entre %d e %d?\n\tResposta: ", numero1, numero2);
        scanf("%d", &resposta);

        if(resposta == subtracao)
            printf("\nVoc� acertou!!\n\n");
        else
        {
            printf("Que pena! Tente novamente!\n\n");
            erradas++;
        }

        system("pause");
        system("cls");

    }while(resposta != subtracao);

    printf("\n\nAntes de acertar, voc� errou %d vezes.\n\n", erradas);
        if(erradas == 0)
            printf("\nMuito bem! Voc� relmente est� pronto para avan�ar!\n\n");
        if(erradas >= 1 && erradas <= 3)
            printf("\nVoc� est� na m�dia, mas sempre � bom estudar!\n\n");
        if(erradas > 3)
            printf("\nVoc� precisa treinar mais!!\n\n");

    system("pause");
    system("cls");
}
