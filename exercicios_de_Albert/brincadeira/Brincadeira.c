#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

void main (){
setlocale(LC_ALL,"portuguese");

time_t t;
time (&t);
struct tm *data;
data = localtime (&t);

int idade,ano1,ano,dia,mes;
int hora,minu,seg ,semana;
char nome [20];
char estuda[10];

printf("-----------------------ISOLAMENTO TOTAL---------------------------------\n");
dia    = data->tm_mday;
mes    = data->tm_mon + 1;
semana = data->tm_wday;
ano1   = data->tm_year + 1900;
hora   = data->tm_hour;
minu   = data->tm_min;
seg    = data->tm_sec;
printf("\nHoje � %d do m�s %d do ano de %d: PEGUEM A VIS�O!\n",dia,mes,ano1);
printf("Dia da semana %i, s�o exatamente: %i:%d � %i segundos\n",semana,hora,minu,seg);


printf("\nQual o seu nome? ");
fflush(stdin);
gets(nome);

printf("Em que ano voc� nasceu? ");
fflush(stdin);
scanf("%d",&ano);

idade = data->tm_year + 1900 - ano;

printf("Meu nome � %s, tenho %d anos: Estou em isolamento do IFBA! kkkkkk\n",nome,idade);
printf("\nMinha idade n�o e essa! kkkkk\n");

printf("\nEdu esta estudando? SIM [s], N�O [n]: ");
fflush(stdin);
gets(estuda);
if (strcmp(estuda, "n")== 0){
    printf("\nSe n�o estudar Leandro e George vai empurrar com for�a!\n");
}
char fag[10];
printf("\nFagner e Uelbert esta estudando? SIM [s], N�O [s]: \n");
fflush(stdin);
gets(fag);
if (strcmp(fag,"s")==0){
    printf("Fagner provavelmente esta estudando, j� Uelbert eu n�o sei!\n");
}
char jorge[10];
printf("\nJorge aprendeu logica? SIM [s], N�O [n]\n");
fflush(stdin);
gets(jorge);
if(strcmp(jorge,"n")==0){
    printf("Tem que estudar, se n�o o fumo entra dinovo!\n");
}
}
