#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"portuguese");

int ano;

printf("Digite um ano qualquer: ");
fflush(stdin);
scanf("%d",&ano);

if(ano%4==0 && ano%100!=0 || ano%400==0){
    printf("O ano %d � BISSEXTO.\n",ano);

}
else{
    printf("O ano %i N�O � BISSEXTO.\n",ano);
}


}
