#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main (){

setlocale(LC_ALL,"portuguese");

// COER��O DE TIPO OU TYPECAST: FOR�A UM DETERMINADO
//TIPO MESMO QUE ESSA VARIAVEL N�O SEJA DESSE TIPO.


//EXEMPLO:
int a = 5;
int y = 2;

float z = (float) a / y;
printf("O resultado e %.1f: \n",z);



// 2� EXEMPLO:

int n;
float t;
printf("\nDigite um n�mero: ");
scanf("%d",&n);

t = (float) n / 3;
printf("\nA ter�a parte de %d e igual a %.2f\n ",n,t);


//3� EXEMPLO COM CARACTERE: TRANSFORMAR O N�MERO iNTEIRO EM CARACTERE:
printf("\n--------------------Transformar um n�mero inteiro em caractere--------------------\n");
int x = 65;
//VAI IMPRIMIR A LETRA (A) PORQUE O CODIGO DA LETRA (A) E 65:
printf("\nEu tenho %c ", (char)x);
}
