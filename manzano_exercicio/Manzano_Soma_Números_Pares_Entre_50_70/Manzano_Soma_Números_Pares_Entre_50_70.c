///j) Elaborar um programa que apresente os resultados da soma e da m�dia aritm�tica dos valores
///pares situados na faixa num�rica de 50 a 70.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL,"portuguese");

    int par=49;
    int soma=0;
    float media=0;

    do
    {
        par++;
        if(par%2==0)
        {
            soma+=par;
            printf("%d,",par);
        }


    }
    while(par<=70);

    printf("\n\nResultado da Soma: %d\n",soma);

    media=soma/10;

    printf("\nM�dia Aritmetica: %.2f\n",media);

}
