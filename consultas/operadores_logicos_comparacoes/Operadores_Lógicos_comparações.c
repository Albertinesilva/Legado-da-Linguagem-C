#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

//CONJUN��O (&&) SO E VERDADEIRO QUANDO OS DOIS E VERDADEIRO
setlocale(LC_ALL,"portuguese");
int a = 4, b = 13, c = 2;
printf("%s\n",a < b && a > c ? "Verdadeiro" : "Falso");

//DISJUN��O (||) SO E FALSO QUANDO OS DOIS E FALSO
int d = 2, e = 6, f = 10;
printf("\n%s\n", d > e || d > f ? "Verdadeiro" : "Falso");

//DISJUN��O,CONJUN��O � NEGA��O
int g = 5, h = 4, i = 2;
printf("\n%s",g > h || g < i && ! i != 4 ? "Verdadeiro" : "Falso");

}
