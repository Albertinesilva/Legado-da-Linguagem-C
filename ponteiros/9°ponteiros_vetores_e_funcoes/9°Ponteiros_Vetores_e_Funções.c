#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somarVetor(int vetor[],int n)
{

    int soma = 0;
    int *ponteiro;
    //O ponteiro (finalVetor) pega o ultimo endere�o do Vetor
    int *finalVetor = vetor + n;

    //Enquanto o endere�o do ponteiro � menor que o endere�o do vetor
    //ele soma mais 1 e passa para o proximo endere�o.
    for(ponteiro = vetor; ponteiro<finalVetor; ponteiro++)
    {
        //Variavel soma recebe a soma dos membros do vetor que o ponteiro esta apontando.
        soma += *ponteiro;
    }

    return soma;

}

void main()
{
    setlocale(LC_ALL,"portuguese");

     int somarVetor(int vetor[],int n);

     int vetor[7]={5,15,20,20,10,30,5};

     printf("\nA soma dos membros do vetor = %i\n",somarVetor(vetor,7));
}
