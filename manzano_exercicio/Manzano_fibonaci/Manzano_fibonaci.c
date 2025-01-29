#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

//g) Escreva um programa que apresente a s�rie de Fibonacci at� o d�cimo quinto termo. A s�rie de
//Fibonacci � formada pela seq��ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34, ..., etc. Esta s�rie se caracteriza
//pela soma de um termo atual com o seu anterior subseq�ente, para que seja formado o pr�ximo
//valor da seq��ncia. Portanto come�ando com os n�meros 1, 1 o pr�ximo termo � 1+1=2, o pr�ximo
//� 1+2=3, o pr�ximo � 2+3=5, o pr�ximo 3+5=8, etc.

void main()
{
    setlocale(LC_ALL,"portuguese");

    int anterior=0,i=0;
    int proximo=1;
    int fibonacci=0;

    for(i=1; i<15; i++)
    {
        fibonacci=anterior+proximo;
        proximo=anterior;
        anterior=fibonacci;

        printf("\n\t%d",fibonacci);
    }

    int primo=11;
    int divisivel=0;


        for(int l=0; l<=primo; l++)
        {
            if(l%primo==0&&l!=0||l==1)
            {
                printf("\n\n%d � divisivel por %d\n",primo,l);
            }
        }


}
