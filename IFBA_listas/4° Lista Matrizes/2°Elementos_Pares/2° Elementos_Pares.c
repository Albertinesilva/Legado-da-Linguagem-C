#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main()
{
    setlocale(LC_ALL,"portuguese");

    int par[10],quantos_par=0,i=0;

    for(i=0; i<10; i++)
    {
        printf("\nInforme um n�mero para saber se � PAR OU IMPAR: ");
        scanf("%d",&par[i]);

    }

    for(i=0;i<10; i++)
    {
        if(par[i]%2==0)
        {
            quantos_par++;
            printf("\n\t%d � UM N�MERO PAR:",par[i]);
        }
    }
    printf("\n\n\tQUANTIDADE DE PARES: %d \n",quantos_par);
}

