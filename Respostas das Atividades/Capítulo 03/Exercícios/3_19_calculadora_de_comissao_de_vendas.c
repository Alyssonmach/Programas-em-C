/*Calculadora de comiss�o de vendas*/

//DECLARE A VARI�VEL EM N�MEROS FLUTUANTES preco E pagamento;
//IMPRIMA NA TELA "Informe a venda em reais (-1 para terminar): ";
//RECEBA DO USU�RIO O VALOR DA VARI�VEL preco;
//ENQUANTO A VARI�VEL preco FOR DIFERENTE DE -1;
//  ATRIBUA A VARI�VEL pagamento A MULTIPLICA��O DA VARI�VEL preco VEZES 0.09, ADICIONANDO FORA ESSA OPERA��O 200;
//  MOSTRE NA TELA "\nO pagamento � de: %.2f reais.\n\n", JUNTAMENTO COM A VARI�VEL PAGAMENTO;
//  IMPRIMA NA TELA "Informe a venda em reais (-1 para terminar): ";
//  RECEBA DO USU�RIO O VALOR DA VARI�VEL preco;
//  SE O VALOR DA VARI�VEL FOR -1, FIM DA ESTRUTURA DE REPETI��O;
//FIM DO PROGAMA;

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float preco, pagamento;
    setlocale(LC_ALL,"");

    printf("Informe a venda em reais (-1 para terminar): ");
    scanf("%f", &preco);

    while (preco != -1) {

        pagamento = (preco*0.09) + 200;
        printf("\nO pagamento � de: %.2f reais.\n\n", pagamento);

        printf("\nInforme a venda em reais (-1 para terminar): ");
        scanf("%f", &preco);

    }
    return 0;
}
