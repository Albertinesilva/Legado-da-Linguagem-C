#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

void main(){
setlocale(LC_ALL,"portuguese");

int opcao;
float preco;
printf("Digite o pre�o de um produto R$");
fflush(stdin);
scanf("%f",&preco);

printf("\n        ESCOLHA UM PER�ODO\n");
printf("    ==========================\n");
printf("    1�  Carnaval         [+10]\n");
printf("    2�  F�rias Escolares [+20]\n");
printf("    3�  Dia das Crian�as [+ 5]\n");
printf("    4�  Black Friday     [-30]\n");
printf("    5�  Natal            [- 5]\n");
printf("    ==========================\n");

printf("\n    Digite sua op��o => ");
fflush(stdin);
scanf("%d",&opcao);

switch (opcao){

case 1:
    printf("\n----------------------------------------------------------\n");
    printf("Na �poca da CARNAVAL, o pre�o do produto vai para R$ %.2f\n",preco + (preco * 10)/100);
    printf("------------------------------------------------------------\n");
    break;

case 2:
    printf("\n--------------------------------------------------------------\n");
    printf("Na �poca do  F�RIAS ESCOLARES, o pre�o do produto vai para R$ %.2f\n",preco + (preco * 20)/100);
    printf("----------------------------------------------------------------\n");
    break;

case 3:
    printf("\n---------------------------------------------------------------\n");
    printf("Na �poca das DIA DAS CRIAN�AS, o pre�o do produto vai para R$ %.2f\n",preco + (preco * 5)/100);
    printf("-----------------------------------------------------------------\n");
    break;

case 4:
    printf("\n-------------------------------------------------------------\n");
    printf("Na �poca do BLACK FRIDAY, o pre�o do produto vai para R$ %.2f\n",preco - (preco * 30)/100);
    printf("---------------------------------------------------------------\n");
    break;

case 5:
    printf("\n------------------------------------------------------\n");
    printf("Na �poca da NATAL, o pre�o do produto vai para R$ %d\n");
    printf("--------------------------------------------------------\n");
    break;

default:
    printf("\n--------------------------------------------------------\n");
    printf("Em �pocas assim, mantenha o pre�o do produto em R$500,00.\n");
    printf("----------------------------------------------------------\n");
    break;

}
printf("\nVOLTE SEMPRE!\n");

}
