#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
setlocale(LC_ALL,"portuguese");

int n1,n2;
int deslocamento_direita,deslocamento_esquerda;

printf("Digite um n�mero: ");
scanf("%d",&n1);
printf("Digite o deslocamento: ");
scanf("%i",&n2);

deslocamento_direita = n1 >> n2;
deslocamento_esquerda = n1 << n2;

printf("\n--------------------OPERA��ES SHIFT--------------------\n");
printf("\nCalculando deslocamento a direita %d >> %d � igual a %d: \n",n1,n2,deslocamento_direita);
printf("\nCalculando deslocamento a esquerda %i << %i � igual a %d: \n",n1,n2,deslocamento_esquerda);

}
