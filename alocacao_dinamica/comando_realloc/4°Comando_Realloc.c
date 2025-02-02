#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Fun��o realloc():Serve para mudar o tamanho do vetor no decorrer do codigo.
    /*serve para alocar ou realocar mem�ria durante a execu��o do programa.
    Ela faz o pedido de mem�ria ao computador e retorna um ponteiro com
    o endere�o do in�cio do espa�o de mem�ria alocado.

    CUIDADO: Se n�o houver a mem�ria suficiente para
    alocar a mem�ria requisitada, a fun��o realloc() retona NULL*/

    int *p = (int *) malloc(5* sizeof (int));
    int *p1 = (int *) realloc (p,15* sizeof (int));

    if(p1 != NULL)//Realoca��o deu certo
    {
        p = p1;
    }
}

