#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
setlocale(LC_ALL,"portuguese");

time_t t;
struct tm *hora;
time (&t);
hora = localtime(&t);
int h = hora->tm_hour;

float dinheiro;
float preco = 20.00;
int inicio = 7;
//CABE�ALHO DO PROGRAMA
printf("=================CINEMA ESTUDONAUTA=================\n");
printf("HORARIO DO FILME: %iHS - PRE�O DO INGRESSO: R$%.2f\n",inicio,preco);
printf("----------------------------------------------------\n");
printf("Hora atual: %ih\n\n",h);

//ENTRADA DE DADOS
printf("Quanto dinheiro voc� tem? R$");
fflush(stdin);
scanf("%f",&dinheiro);

//VERIFICA��O
if(h < inicio && dinheiro >=preco){
    printf("\nAgora s�o %ihs.\n",h);
    printf("Voc� consegue comprar o ingresso. Seja bem vindo(a)!\n");

}
else{
    printf("\nAgora s�o %ihs.\n",h);
    printf("Infelizmente n�o � possivel comprar o ingresso! Volte outro dia!\n");
}
}
