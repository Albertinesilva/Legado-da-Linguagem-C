#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>


void main()
{
    setlocale(LC_ALL,"portuguese");

    int num,soma;
    soma=0;

    while(num!=0)
    {
        printf("\nInforme um n�mero para saber se � POSITIVO OU NEGATIVO: ");
        scanf("%d",&num);

        if(num >=1)
        {
         soma = soma + num;
        }

    }
    printf("\nResultado da soma entre n�meros POSITIVOS: %d\n",soma);
}
