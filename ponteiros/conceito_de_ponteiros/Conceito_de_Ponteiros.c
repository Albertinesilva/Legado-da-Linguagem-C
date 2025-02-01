#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>


void main()
{

    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));

    //Imprime o valor e o endere�o de mem�ria de (a).
    int a=10;
    printf("\nValor da vari�vel (a) = %d\n",a);
    //A vari�vel (a) com (&) imprime o endere�o de mem�ria.
    printf("Endere�o de mem�ria da vari�vel (a) = %d\n",&a);
    printf("\n------------------------------------------------------------------------------\n");

    //O ponteiro aponta para o endere�o de memoria da vari�vel (b)
    int b=15;
    int *ponteiro;
    ponteiro=&b;

    //Com o asterico o ponteiro vai acessar o valor da mem�ria da vari�vel (b).
    printf("O PONTEIRO est� apontando para o valor da vari�vel (b) = %d\n",*ponteiro);

    //Sem o asterisco(*) imprime o n�mero do endere�o de mem�ria da variavel (b).
    printf("O PONTEIRO est� apontando para o endere�o de mem�ria da vari�vel (b) = %d\n",ponteiro);

    printf("------------------------------------------------------------------------------");

    //O valor de Y n�o vai alterar.
    int x=10;
    int y=x;
    x=20;

    printf("\nX: %d\nY: %d\n",x,y);

    printf("------------------------------------------------------------------------------");
    //O valor da variavel (Z) vai alterar porque o
    //ponteiroo esta apontando para o endere�o de mem�ria da vari�vel (J).
    int z=10;
    int *ponteiroo;
    ponteiroo=&z;

    int j=20;
    *ponteiroo=j;

    printf("\nZ: %d\nJ: %d\n",z,j);



}
