#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main()
{
    setlocale(LC_ALL,"portuguese");

    int num,contador,divisivel;

    contador=0;
    num=0;
    divisivel=0;

    printf("\nInforme um n�mero para saber quantos divisores ele possui: ");
        scanf("%d",&num);

    do
    {
        contador++;

        if(num%contador==0)
        {
            divisivel+=1;
            printf("\n%d � divisivel por %d\n",num,contador);
        }
    }
    while(contador!=num);
    printf("\n\n\tO n�mero %d Tem %d divisores\n\n",num,divisivel);
}
