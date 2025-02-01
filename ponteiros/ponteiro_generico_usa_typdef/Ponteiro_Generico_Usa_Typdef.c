#include <stdio.h>
#include <locale.h>


void main()
{
    setlocale(LC_ALL,"portuguese");

    void *ponteiro;
    int *p1,p2=10;
    p1=&p2;
    ponteiro=&p2;//Endere�o de int p2
    printf("\nEndere�o em ponteiro: %p\n",ponteiro);

    ponteiro=&p1;//Endere�o de int* p1
    printf("\nEndere�o em ponteiro: %p\n",ponteiro);

    ponteiro=p1;//Endere�o de int
    printf("\nEndere�o em ponteiro: %p\n",ponteiro);

    void *ponteiro2;
    int x=10;
    ponteiro2=&x;

    //N�o pode vai dar ERRO.
    //printf("\nConteudo: %d\n",*ponteiro2);

    //Antes de acessar o conte�do � preciso converter o ponteiro gen�rico para o
    //tipo de ponteiro com o qual se deseja trabalhar.
    printf("\nConteudo: %d\n",*(int*)ponteiro2);
}
