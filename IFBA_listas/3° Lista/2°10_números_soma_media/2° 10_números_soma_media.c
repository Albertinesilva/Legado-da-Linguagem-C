#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>


void main()
{

    setlocale(LC_ALL,"portuguese");

    int soma,media,num,x;
    char continuar;
    bool b = true;
    x=0;
    soma=0;
    media=0;

    do
    {

        do
        {
            x +=1;
            printf("\nInfome o %d� n�mero para SOMA: ",x);
            scanf("%d",&num);

            soma = soma + num;

        }
        while(x!=10);
        media = (float)soma/10;

        printf("\nResultado da soma entre %d n�meros = %d\nResultado da m�dia: %d\n",x,soma,media);

        if(x==10)
        {
            x=0;
            soma=0;
            media=0;
            printf("\nDeseja continuar com a SOMA? SIM[S], N�O[N] ");
            fflush(stdin);
            continuar=getchar();
        }

        if(continuar=='n')
        {
            b=false;
            printf("\nConsulta finalizada!\nObrigado!\n");

        }

    }
    while(b);

}
