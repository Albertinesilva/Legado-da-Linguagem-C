#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main()
{
    setlocale(LC_ALL,"portuguese");

    int num,maior,menor;
    int contador;

    contador=0;
    num=0;
    maior=0;
    menor=999999;

    do
    {
        contador++;

        printf("\nInforme o %d� n�mero: ",contador);
        scanf("%d",&num);

        if(num > maior)
        {
            maior=num;
        }

        else
        {
            if(num < menor)
            {
                menor=num;
            }
        }

    }
    while(contador!=5);

    printf("\n\n%d � O MAIOR N�MERO!\n",maior);
    printf("\n%d � O MENOR N�MERO!\n",menor);

}
