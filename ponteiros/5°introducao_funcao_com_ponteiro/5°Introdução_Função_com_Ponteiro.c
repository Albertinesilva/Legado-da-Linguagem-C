#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void testeVariavel(int x);
void testePonteiro(int *px);


void main(){

    setlocale(LC_ALL,"portuguese");

    int teste = 1;
    int *pTeste = &teste;

    //O valor n�o vai alterar.
    testeVariavel(teste);
    printf("\nTeste: %d\n",teste);

    //O valor altera porque o ponteiro esta passando o endere�o de mem�ria da variavel teste.
    testePonteiro(pTeste);
    printf("\nTeste: %d\n",*pTeste);


}

void testeVariavel(int x){

++x;

}

void testePonteiro(int *px){

++*px;
}
