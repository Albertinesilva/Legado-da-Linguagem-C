#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main()
{
    setlocale(LC_ALL,"portuguese");

    int num,soma_positivo,soma_negativo;

    soma_positivo=0;
    soma_negativo=0;


    while(num!=0)
    {
        printf("\nInforme um n�mero positivo ou negativo para a soma: ");
        scanf("%d",&num);

        if(num < 0)
        {
            soma_negativo = soma_negativo + num;
        }

        if(num >= 1)
        {
            soma_positivo = soma_positivo + num;
        }

    }
    printf("\nResultado da soma entre n�meros POSITIVOS: %d\n",soma_positivo);
    printf("\nResultado da soma entre n�meros NEGATIVOS: %d\n",soma_negativo);
}
