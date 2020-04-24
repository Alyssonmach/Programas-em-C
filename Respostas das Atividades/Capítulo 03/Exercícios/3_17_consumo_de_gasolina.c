/*Progama que calcula a quantidade de quilometros por litro de um carro em um percurso,
e mostra a media final de todos os valores digitados */

//declare as variaveis tipo flutuante quilometros, litro, media, soma_media e contador
//atribua a vari�vel soma_media e contador o valor zero do teclado
//enquanto litros for diferente de -1
//  imprima na tela "Informe quantos litros abasteceu (-1 para terminar): "
//  receba do usu�rio o valor da variavel litros
//  se o valor da vari�vel litro for diferente de -1
//      Imprima na tela "Informe quantos km dirigiu: "
//      receba do usu�rio o valor da vari�vel quil�metros
//      atribua a divis�o da vari�vel quil�metros por litro na vari�vel media
//      imprima na tela "O consumo atual � de: "
//      imprima na tela o valor da vari�vel m�dia
//      atribua a vari�vel soma_media a soma dela mesma com a vari�vel media
//      incremente 1 a vari�vel contador
//  caso o usu�rio digite -1 na vari�vel litro, fim da estrutura de repeti��o
//imprima na tela "O consumo geral foi de: "
//imprima na tela o valor da var�avel soma_media dividido pelo contador
//fim do progama

#include <stdio.h>
#include <locale.h>

int main (void)
{
    float quilometros, litro, media, soma_media, contador;
    setlocale(LC_ALL,"");

    soma_media = 0;
    contador = 0;

    while(litro != -1) {

        printf("\nInforme quantos litros abasteceu (-1 para terminar): ");
        scanf("%f", &litro);

        if(litros != -1) {

            printf("\nInforme quantos km dirigiu: ");
            scanf("%f", &quilometros);

            media = quilometros / litro;

            printf("O consumo atual � de: %f km/l.\n\n", media);

            soma_media = soma_media + media;

            ++contador;

        }

    }

    printf("\nO consumo geral foi de: %.2f km/l.\n\n", (soma_media / contador) );

    return 0;
}
