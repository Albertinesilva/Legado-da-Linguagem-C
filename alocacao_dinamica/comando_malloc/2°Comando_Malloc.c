#include <stdio.h>
#include <stdlib.h>


void main()
{
    /*Se n�o houver mem�ria suficiente para alocar
    a mem�ria requisitada, a fun��o malloc()retorna NULL*/

    int *p;
    p = (int *)malloc(5*sizeof(int));

    if(p == NULL)
    {
        printf("\nErro: Sem mem�ria!\n");
        exit(1);//Termina o programa
    }

    int i;
    for(i=0; i<5; i++)
    {
        printf("\nDigite p[%d]: ",i);
        scanf("%d",&p[i]);
    }
    printf("\n");
    for(i=0; i<5; i++)
    {
        printf("%d,",p[i]);
    }
    /*A fun��o free(); sempre que alocamos mem�ria � necess�rio
    liber�-la quando ela n�o for mais necess�ria*/
    free(p);
}
