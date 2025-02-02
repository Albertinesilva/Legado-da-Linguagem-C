#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*malloc() versus calloc(): Ambas servem para alocar mem�ria, mas
    calloc() inicializa todos os BITS do espa�o alocado com ZEROS*/

    int i;
    int *p,*p1;
    p = (int *) malloc (5* sizeof(int));
    p1 = (int *) calloc (5, sizeof(int));

    printf("calloc \t\t malloc\n");

    for(i=0; i<5; i++)
    {
        printf("p1[%d] = %d \t",i,p1[i]);
        printf("p[%d] = %d\n",i,p[i]);
    }
}
