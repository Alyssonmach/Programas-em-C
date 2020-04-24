#include <stdio.h>
#include <locale.h>

int main (void)
{
    int codigo = 0;
    float hora, vendas, itens;
    setlocale(LC_ALL,"");

    printf("PROGAMA QUE CALCULA O SAL�RIO DE FUNCION�RIOS.\n\n");

    while( !(codigo == -1) ) {

        printf("Selecione o tipo de empregado (-1 para parar):\n\n");
        printf("1 - GERENTES;\n2 - TRABALHADORES POR HORA;\n3 - TRABALHADORES COMISSIONADOS;\n4 - TRABALHADORES POR UNIDADE;\n\n");
        printf("C�DIGO: ");
        scanf("%d", &codigo);

        if( !(codigo == -1) ) {

            switch(codigo) {

            case 1: {
                printf("\nSAL�RIO SEMANAL FIXO: %d reais.\n\n", 2500);
                break;
            }

            case 2: {
                printf("\nQuantas horas por semana voc� trabalhou: ");
                scanf("%f", &hora);
                if(hora <= 40) {
                    printf("\nSAL�RIO: %.2f reais.\n\n", hora*100);
                }
                else if (hora > 40) {
                    printf("\nSAL�RIO: %.2f reais.\n\n", ((40*100) + ((hora-40)*150)));
                }
                break;
            }

            case 3: {
                printf("\nQuanto em dinheiro voc� vendeu nessa semana: ");
                scanf("%f", &vendas);
                printf("\nSAL�RIO SEMANAL: %.2f reais.\n\n", ((vendas*0.057) + 250) );
                break;
            }

            case 4: {
                printf("\nQuantos itens voc� vendeu: ");
                scanf("%f", &itens);
                printf("\nSAL�RIO SEMANAL: %.2f reais.\n\n", (itens*100));
                break;
            }

            default:
                printf("\nTRABALHADOR N�O REGISTRADO, TENTE NOVAMENTE!\n\n");
                break;
            }
        }
        else
            printf("\nFIM DO PROGAMA.\n\n");
    }

    return 0;
}
