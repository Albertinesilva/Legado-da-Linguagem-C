#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main()
{
    setlocale(LC_ALL,"portuguese");

    int num=0,atual=1,soma=0,termos=0;

    printf("\nInforme um n�mero para saber se e quadrado perfeito ");
    scanf("%d",&num);

    do
    {
        soma=soma+atual;
        printf("%d\n",atual);
        atual=atual+2;
        termos++;
    }
    while(soma<num);

    if(soma==num)
    {
        printf("\n%d � um n�mero perfeito\nN�mero %d de termos, somados ser� igual a raiz quadrada de %d \n",soma,termos,soma);
    }
    else
    {
        printf("\n%dN�o � um n�mero perfeito\n",soma);
    }

}
