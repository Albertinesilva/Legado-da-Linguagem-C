#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

float media,nota1,nota2;
setlocale(LC_ALL,"portuguese");

printf("Primeira nota: ");
scanf("%f",&nota1);

printf("Segunda nota: ");
scanf("%f",&nota2);

media = (nota1 + nota2)/2;
printf("\nA m�dia do aluno foi %.1f:\n ",media);

printf("\nA situa��o � %s",(media >= 7) ? "APROVADO" : "REPROVADO");




}
