#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

void main(){
setlocale(LC_ALL,"portuguese");


float salario,vendas,salario_final;

printf("Informe o seu sal�rio. R$");
fflush(stdin);
scanf("%f",&salario);

printf("Informe o total de vendas efetuadas no m�s: ");
fflush(stdin);
scanf("%f",&vendas);

float comissao = vendas + (vendas * 15)/100;
salario_final =  salario + comissao;

printf("\nComiss�o: R$%.2f\n",comissao);
printf("O sal�rio final do vendedor �: R$%.2f\n",salario_final);


}
