#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

setlocale(LC_ALL,"portuguese");

int num,antecessor,sucessor;

printf("Digite um n�mero: ");
scanf("%d",&num);

antecessor = num - 1;
sucessor   = num + 1;

printf("\nAnalisando o n�mero %d, seu antecessor � %d e seu sucessor � %d.\n ",num,antecessor,sucessor);

}
