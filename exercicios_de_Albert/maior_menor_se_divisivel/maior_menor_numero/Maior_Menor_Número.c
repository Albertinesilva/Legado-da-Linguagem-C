#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main ()
{
    setlocale(LC_ALL,"portuguese");

    int a=0,b=0,c=0;

    printf("\nInforme 3 n�meros: ");
    scanf("%d,",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    printf("\na = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);


    if(a > b && a > c)
    {
        printf("\n a � o maior n�mero: %d\n",a);
    }
    else
    {
        if(b > a && b > c)
        {
            printf("\nb � o maior n�mero: %d\n",b);
        }
        else
        {
            printf("\nc � o maior n�mero: %d\n",c);
        }
    }
}
