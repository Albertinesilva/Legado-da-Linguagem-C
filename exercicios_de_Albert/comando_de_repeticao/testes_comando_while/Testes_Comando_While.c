#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main(){
setlocale(LC_ALL,"portuguese");

bool b=true;
int num;
char continuar;




while (b==true){

printf("\nInforme um n�mero: ");
scanf("%d",&num);

     if(num%2==0){
        b=false;
        printf("\nO n�mero informado � PAR!\n");

     }
     else{ if(num%2==1){
        b=false;
        printf("\nO n�mero informado e �MPAR!\n");
     }
     }
     printf("\nVoc� deseja continuar? sim[s] n�o[n] \n");
     fflush(stdin);
     continuar=getchar();

     if(continuar=='s'){
        b=true;
     }else{
        b=false;
     }

}

}

