#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"portuguese");


int num;

printf("Informe um n�mero: ");
scanf("%i",&num);

if (num > 20){
    printf("\nO n�mero %i � maior que 20\n",num);

    }else{

if (num < 20){
    printf("\nO n�mero %i � menor que 20\n",num);

    }else{
    printf("\nO n�mero %i � igual a 20\n",num);

        }
    }

}
