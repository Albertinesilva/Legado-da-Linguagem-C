#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

setlocale(LC_ALL,"portuguese");

//PODE SER ATRIBUIDO UM DETERMINADO VALOR NA EXPRESS�O DESSA FORMA ABAIXO:
int a = 5;
a = a + 2;
printf("O valor de a � %i\n ",a);

//PODE SER ATRIBUIDO VALOR TAMB�M DE OUTRA FORMA, LOGO ABAIXO:
int b = 5;
b += 2;
printf("\nO valor de b � %i\n ",b);

//SERVE PARA TODOS OS TIPOS DE OPERA��O, ex:(a *= 5 , a /= 5, a -= 5).
}
