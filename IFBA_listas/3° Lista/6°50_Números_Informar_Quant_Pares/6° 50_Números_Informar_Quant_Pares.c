#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main()
{   setlocale(LC_ALL,"portuguese");
    srand(time (NULL));

    int par,cont;
    cont=0;
    par=0;

    while(cont!=50)
    {
        cont++;
        int num = rand()%100+1;
        printf("\n\n\tInforme um n�mero para saber se � PAR:%d ",num);


        if(num%2==0)
        {
            par+=1;
        }

    }
    printf("\n\n\t%d N�MEROS PARES ENTRE 50 N�MEROS:\n",par);
}
