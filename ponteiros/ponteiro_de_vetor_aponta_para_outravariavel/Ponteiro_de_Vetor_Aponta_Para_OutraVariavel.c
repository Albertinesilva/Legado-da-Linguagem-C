#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"portuguese");

    /*Cada elemento do array pode apontar para um endere�o de mem�ria
    seja ele de uma vari�vel ou de um array*/

    int *pvet[3];
    int x = 10, y[2]={20,30};
    pvet[0]=&x;
    pvet[1]=y;

    printf("\npvet[0]: %p\n",pvet[0]);//&x
    printf("\npvet[1]: %p\n",pvet[1]);//&y[0]

    printf("\n*pvet[0]: %d\n",*pvet[0]);//x
    printf("\npvet[1][0]: %d\n",pvet[1][0]);//y[0]
    printf("\npvet[1][1]: %d\n",pvet[1][1]);//y[1]
}
