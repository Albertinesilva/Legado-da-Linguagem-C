#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){
setlocale(LC_ALL,"portuguese");


float ater=1.000;
float aund=100;
float atund=4.000;
float fi=0;

fi=(ater/atund)*10;
//fi=fi*100+250;
//fi=(fi*10)/100;
printf("%.1f\n",fi);

int divisivel,x,primo;
bool b=true;
divisivel=0;
x=0;

printf("Informe um n�mero, para saber se � PRIMO: ");
fflush(stdin);
scanf("%d",&primo);

while (x!=primo){
     x +=1;

    if(primo%x==0){
    divisivel +=1;
    }
}

    if(divisivel==2){
        printf("\nO n�mero %d � PRIMO\n",primo);
    }else{
        printf("\nO n�mero %d n�o � PRIMO\n",primo);
    }
printf("\nObrigado!!!\n");
}
