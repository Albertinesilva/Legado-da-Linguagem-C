#include <stdio.h>
#include <locale.h>
void main (){

setlocale(LC_ALL,"portuguese");

//PARAMETRO DE FORMATA��O: CADEIA DE CARACTERES:(%s "ALBERT")� INTEIRO:(%d 40)
printf("O %s tem %d anos\n", "Albert",40);

//PARAMETRO DE FORMATA��O: CADEIA DE CARACTERES:(%s "ALBERT") � INTEIRO:(%i 40) OBS: QUE PODE SER COM (%d ou %i)
printf("O %s tem %i anos de idade!\n","Albert",40);

//PARAMETRO DE FORMATA��O: N�MERO REAL: (%f 73.5)
printf("Seu peso atual � de %5.2fKg\n",73.5);

//PARAMETRO DE FORMATA��O: CARACTERE, UMA UNICA LETRA (%C 'M'), ACOMPANHA UMA UNICA ASPA
printf("O seu sexo � %c",'M');

}
