#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>


void main(){
setlocale(LC_ALL,"portuguese");

float quantidade_dolar,cotacao_dolar;

printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ CONVERS�O EM REAL $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

printf("\nInforme a cota��o do dolar R$ ");
fflush(stdin);
scanf("%f",&cotacao_dolar);

printf("\nInforme a quantidade de dolar disponivel R$ ");
fflush(stdin);
scanf("%f",&quantidade_dolar);

float conversaoreal = quantidade_dolar * cotacao_dolar;

printf("\nO valor da convers�o: DOLAR PARA REAL � R$ %.2f:\n",conversaoreal);
printf("\nTa ruim Jackson?\nClaro que nao!\nEntao fique na Nigeria$$$$! kkkkkkkk\n");

}
