#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"portuguese");

    int num=0, contador=0;


    printf("\nInforme um n�mero para saber quais s�o seus divisores: ");
    scanf("%d",&num);

    system("cls");

    printf("\n\n\t//////////////////// DIVISORES DE %d ////////////////////\n\n",num);

    while(contador!=num)
    {
        contador++;

        if(num%contador==0)
        {
            printf("\t\t\t%d � divisivel por: %d\n ",num,contador);
        }

    }

}
