#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int menor_numero(int num1, int num2);
int comparar_menor(int x, int y);

void main()
{
    setlocale(LC_ALL,"portuguese");

    int menor1=0, menor2=0, retorno_menor=0;

    printf("\n\tInforme um n�mero: ");
    scanf("%d",&menor1);

    printf("\n\tInforme outro n�mero: ");
    scanf("%d",&menor2);

    menor_numero(menor1,menor2);
    retorno_menor = comparar_menor(menor1,menor2);

    printf("\n\tMenor n�mero: %d Fun�ao com retorno\n",retorno_menor);

}
int menor_numero(int num1, int num2)
{
    if(num1<num2)
    {
        printf("\n\tO menor n�mero �: %d\n",num1);
    }
    else
    {
        printf("\n\tO menor n�mero �: %d\n",num2);
    }
}
int comparar_menor(int x,int y)
{
    if(x > y)
    {
        return y;
    }
    else
    {
        return x;
    }
}
