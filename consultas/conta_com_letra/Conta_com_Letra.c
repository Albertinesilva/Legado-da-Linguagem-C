#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main (){

setlocale (LC_ALL,"portuguese");

//A SOMA DE UMA LETRA COM UM N�MERO RESULTA EM �LGUMA LETRA DO ALFABETO:

printf("---------------RESULTADO DA SOMA ENTRE UMA LETRA E UM N�MERO-----------------------\n");

char a = 'a';
a = a + 1;

printf("\nletra a + 1 = %c \n",a);

//A SOMA DO CODIGO DA LETRA COM OUTRO N�MERO RESULTA EM OUTRO N�MERO (MUDA O %C PELO %D NO PRINTF):

printf("\n---------------RESULTADO DA SOMA ENTRE O CODIGO DA LETRA E UM N�MERO---------------\n");

char b = 'b';
b = b + 1;

printf("\nCodigo da letra b + 1 = %d \n",b);

}
