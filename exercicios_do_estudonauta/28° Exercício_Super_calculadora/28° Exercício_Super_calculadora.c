#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>


void main(){
setlocale(LC_ALL,"portuguese");

float num1,num2;
char operacao;

printf("VALOR 1 = ");
fflush(stdin);
scanf("%f",&num1);

printf("VALOR 2 = ");
fflush(stdin);
scanf("%f",&num2);



printf("\n========================\n");
printf("+\tAdi��o\n");
printf("-\tSubtra��o\n");
printf("x\tMultiplica��o\n");
printf("/\tDivis�o\n");
printf("========================\n");
printf("Digite a op��o => ");

fflush(stdin);
operacao = getchar();

    switch (operacao){

    case '+':
        printf("-----------------------------------------------\n");
        printf("O resultado de %.0f + %.0f � igual a %.0f.\n ",num1,num2, num1 + num2);
        printf("-----------------------------------------------\n");
    break;

    case '-':
        printf("-----------------------------------------------\n");
        printf("O resultado de %.0f - %.0f � igual a %.0f. \n",num1,num2, num1 - num2);
        printf("-----------------------------------------------\n");
    break;

    case 'x':
        printf("-----------------------------------------------\n");
        printf("O resultado de %.0f * %.0f � igual a %.0f. \n",num1,num2, num1 * num2);
        printf("-----------------------------------------------\n");
    break;

    case '/':
        printf("-----------------------------------------------\n");
        printf("O resultado de %.0f / %.0f � igual a %.2f. \n",num1,num2, num1 / num2);
        printf("-----------------------------------------------\n");
    break;

default:
    printf("--------------------------------------------------------\n");
    printf("N�o foi possivel fazer a opera��o. Tente novamente.\n");
    printf("--------------------------------------------------------\n");
break;



}
printf("\nVOLTE SEMPRE!\n");
}
