#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main() {
setlocale(LC_ALL,"portuguese");

float salario_minimo, salario, imposto;

printf("Informe o valor do sal�rio m�nimo atual: R$ ");
scanf("%f",&salario_minimo);

printf("\nInforme o seu sal�rio: R$ ");
scanf("%f",&salario);

float quant_salario = salario / salario_minimo;

printf("\nEu ganho %.0f sal�rios m�nimos\n",quant_salario);
printf("\n\n--------------------CASO GANHE MAIS DE 3 SAL�RIOS, DEVE PAGAR IMPOSTO DE RENDA COM AL�QUOTA DE %%15--------------------\n\n");

if(quant_salario > 3){
        imposto = salario - (salario * 15 /100);
printf("\nEu ganho %.0f sal�rios m�nimos. Tenho que pagar imposto de renda!\nSAL�RIO COM DESCONTO: R$%.2f \n",quant_salario,imposto);

}
    else{
        printf("\nEu ganho %.0f sal�rios minimos, n�o h� imposto a ser pago!\n",quant_salario);
    }
}
