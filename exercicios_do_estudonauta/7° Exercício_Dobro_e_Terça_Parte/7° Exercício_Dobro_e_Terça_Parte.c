#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

setlocale(LC_ALL,"portuguese");

float terca_parte;
int num,dobro;
printf("Digite um n�mero: ");
scanf("%d",&num);

dobro = num * 2;

//(FLOAT)NUM/3; --> ISSO SE CHAMA (COER��O) FOR�ANDO A (VARIAVEL: NUM) FAZER A OPERA��O COMO FLOAT:
terca_parte = (float)num / 3;

printf("\nAnalisando o n�mero %d, seu dobro � %d e sua ter�a parte � %.2f\n",num,dobro,terca_parte);


//TAMB�M PODE SER FEITO O CALCULO DENTRO DA STRING
printf("\n Analisando o n�mero %d, seu dobro � %d e sua ter�a parte � %.2f\n",num,(num*2),((float)num/3));
}
