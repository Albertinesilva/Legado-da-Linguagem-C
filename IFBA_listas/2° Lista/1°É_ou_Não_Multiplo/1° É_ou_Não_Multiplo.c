#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
setlocale(LC_ALL,"portuguese");

int multiplo;

printf("Informe um n�mero multiplo de tr�s: ");
fflush(stdin);
scanf("%i",&multiplo);

if(multiplo%3==0){
    printf("\nO n�mero %i � multiplo de TR�S\n ",multiplo);

    }else{
    printf("\nO n�mero %i n�o e multiplo de TR�s \n",multiplo);

}


}
