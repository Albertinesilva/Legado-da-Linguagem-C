#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"portuguese");

    int divisivel,x,primo;
    bool b = true;
    char continuar;


    do
    {
        printf("\nInforme um n�mero para saber se � PRIMO: ");
        scanf("%d",&primo);
        x = 0;
        divisivel = 0;
        do
        {
            x += 1;
            if(primo%x==0)
            {
                divisivel += 1;
            }
        }
        while(x != primo);

        if(divisivel==2)
        {
            printf("\nO n�mero %d � PRIMO\n",primo);
            printf("\nDeseja continuar? SIM[S], N�O[N] ");
            fflush(stdin);
            continuar = getchar();

        }
        else
        {
            printf("\nO n�mero %d n�o e PRIMO\n",primo);
            printf("\nDeseja continuar? SIM[S], N�O[N] ");
            fflush(stdin);
            continuar = getchar();
        }

        if(continuar=='n')
        {
            b=false;
            printf("\nA consulta terminou.\nObrigado!!\n");
        }

    }
    while(b);




}

