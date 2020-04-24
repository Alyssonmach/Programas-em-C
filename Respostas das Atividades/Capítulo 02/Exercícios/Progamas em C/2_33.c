//Progama que faz uma calculadora de economia para o transporte solid�rio;
#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"");
    float quilometros, precocomb, kml, precoesta, peda, litrototal=0, valor=0, pessoas, economia=0;

    printf("\tO transporte solid�rio � uma forma economicamente vi�vel e sustent�vel \npara as pessoas e para o meio ambiente.");
    printf("Com esse recurso, as pessoas podem\nse locomover juntas e fazer uma baita economia!\nAo passo em que a natureza agradece!");
    printf("\n\n");
    printf("Vamos ver quanto voc� est� gastando e quanto poderia economizar!\n\n");
    printf(" Quantos quilometros voc� percorre com o seu autom�vel, em m�dia, por dia? ");
    scanf("%f", &quilometros);
    printf("\n\nNa sua regi�o, quanto est� custando o combust�vel por litro? ");
    scanf("%f", &precocomb);
    printf("\n\nQuantos quil�metros s�o necess�rios para gastar um litro de combust�vel? ");
    scanf("%f", &kml);
    printf("\n\nQuanto, em m�dia, voc� gasta com estacionamento diariamente? ");
    scanf("%f", &precoesta);
    printf("\n\nQuanto, em m�dia, � o pre�o gasto com ped�gio por dia? ");
    scanf("%f", &peda);

    litrototal = (quilometros*30)/kml;
    valor = (litrototal*precocomb) + (precoesta*30) + (peda*30);

    printf("\n\nVoc� est� gastando por m�s: %.2f", valor);

    printf("\n\nCom cuantas pessoas voc� poderia compartilhar o seu carro? ");
    scanf("%f", &pessoas);

    economia = (valor*pessoas) - (valor/pessoas);

    printf("\n\nVoc� poderia economizar compartilhando o seu autom�vel com %.0f pessoas:\n%.2f reais.\n\n", pessoas, economia);

return 0;
}
