#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

int num;

setlocale(LC_ALL,"portuguese");
printf("Digite um n�mero qualquer: ");
scanf("%i",&num);

printf("\nO n�mero %i que voc� digitou � %s\n",num,(num % 2 == 0) ? "PAR" : "IMPAR");

}
