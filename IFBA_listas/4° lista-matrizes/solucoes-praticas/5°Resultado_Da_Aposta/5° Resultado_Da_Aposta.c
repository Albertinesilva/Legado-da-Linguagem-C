#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main ()
{
    setlocale(LC_ALL,"portuguese");

    int resultado[13],respostas[13];
    int i=0,acertos=0,cont=0,num_apostador=0;

    for(i=0; i<13; i++)
    {
        printf("\nResultado da aposta: ");
        scanf("%d",&resultado[i]);

    }
    cont=0;
    while(cont!=3)
    {
        cont++;
        printf("\nInforme o n�mero do apostador: ");
        scanf("%d",&num_apostador);
        acertos=0;
        for(i=0; i<13; i++)
        {
            printf("\nInforme os n�meros para � aposta: ");
            scanf("%d",&respostas[i]);

            if(resultado[i]==respostas[i])
            {
                acertos++;

            }


        }
        if(acertos==13)
        {
            printf("\n\tO apostador do n�mero %d � o GANHADOR!\n",num_apostador);
        }
        if(acertos!=13)
        {
            printf("\n\tN�mero do apostador: %d\n\tN�mero de acertos: %d\n",num_apostador,acertos);
        }

    }

}
