#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main (){
setlocale(LC_ALL,"portuguese");

time_t t;
time (&t);
struct tm *data;
data = localtime(&t);
int idade,ano_nascimento;



printf("Em que ano voc� nasceu? ");
fflush(stdin);
scanf("%d",&ano_nascimento);

idade = data->tm_year + 1900 - ano_nascimento;

printf("--------------------------------\n");
printf("Voc� tem %d anos, certo?\n",idade);
printf("Seja bem-vindo(a) ao Banco Estudonauta!\n");

if (idade >= 65){
    printf("===ATEN��O!! DIRIJA - SE PARA A FILA PREFERENCIAL===\n");
    printf("-----------------------------\n");
}



}
