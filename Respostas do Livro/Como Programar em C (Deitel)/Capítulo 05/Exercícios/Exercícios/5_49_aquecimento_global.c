#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void)
{
    setlocale(LC_ALL,"");
    int contador = 0, opcao;

    printf("\t\t<<<<<PROGAMA QUE APRESENTA UM QUESTION�RIO SOBRE AQUECIMENTO GLOBAL>>>>>\n\n");

    printf("\n1� PERGUNTA: o que � aquecimento global?");
    printf("\n1 - � um processo que garante que a Terra mantenha a temperatura adequada para a vida.");
    printf("\n2 - � um processo que garante o movimento das mar�s.");
    printf("\n3 - � um processo que garante a fotoss�ntese das plantas.");
    printf("\n4 - � um processo que garante o crescimento da vida populacional.");
    printf("\n\t\tOp��o: ");
    scanf("%d", &opcao);

    printf("\n\n");
    system("pause");
    system("cls");

    if(opcao == 1)
        contador++;

    printf("\n2� PERGUNTA: � benef�cio o fim do aquecimento global?");
    printf("\n1 - Sim, pois poderiamos acabar com a polui��o do mundo.");
    printf("\n2 - Sim, as pessoas poderiam viver em um mundo com uma temperatura mais amena.");
    printf("\n3 - N�o, sem ele, o planeta seria muito frio, a ponto de muitas formas de vida n�o existirem.");
    printf("\n4 - N�o, pois as pot�ncias mundiais iriam falir as suas ind�strias.");
    printf("\n\t\tOp��o: ");
    scanf("%d", &opcao);

    printf("\n\n");
    system("pause");
    system("cls");

    if(opcao == 3)
        contador++;

    printf("\n3� PERGUNTA: o que realmente agrava o aquecimento global?");
    printf("\n1 - O desenvolvimento econ�mico das grandes pot�ncias.");
    printf("\n2 - O problema est� no aumento da emiss�o de gases poluentes, os chamados gases de efeito estufa.");
    printf("\n3 - A venda de produtos org�nicos nos supermercados.");
    printf("\n4 - A cria��o de animais dom�sticos.");
    printf("\n\t\tOp��o: ");
    scanf("%d", &opcao);

    printf("\n\n");
    system("pause");
    system("cls");

    if(opcao == 2)
        contador++;

    printf("\n4� PERGUNTA: qual uma das consequ�ncias do efeito estufa?");
    printf("\n1 - mudan�a na composi��o da fauna e da flora em todo o planeta.");
    printf("\n2 - decrescimento da natalidade populacional.");
    printf("\n3 - crise nas grandes exploradoras de combust�veis.");
    printf("\n4 - ruraliza��o dos indiv�duos que moram na cidade.");
    printf("\n\t\tOp��o: ");
    scanf("%d", &opcao);

    printf("\n\n");
    system("pause");
    system("cls");

    if(opcao == 1)
        contador++;

    printf("\n5� PERGUNTA: qual a principal contribui��o do brasil no aumento do aquecimento global?");
    printf("\n1 - combust�veis f�sseis.");
    printf("\n2 - origin�ria da queimada e derrubada de florestas, especialmente na Amaz�nia e Cerrado.");
    printf("\n3 - produ��o de bovinos.");
    printf("\n4 - atividade industrial.");
    printf("\n\t\tOp��o: ");
    scanf("%d", &opcao);

    printf("\n\n");
    system("pause");
    system("cls");

    if(opcao == 2)
        contador++;

    printf("\n\nVoc� acertou %d perguntas.\n\n", contador);

    if(contador == 1 || contador == 2)
        printf("\nQue pena, voc� precisa estudar mais sobre o tema!\n\n");
    else if(contador == 3)
        printf("\nVoc� se esfor�ou bastante, continue estudando sobre o tema!\n\n");
    else if(contador == 4)
        printf("\nQuase voc� acerta todas!\n\n");
    else if(contador == 5)
        printf("\nMuito bem! Voc� acertou tudo!\n\n");

    return 0;
}
