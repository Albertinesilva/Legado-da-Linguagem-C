#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main() {
setlocale(LC_ALL,"portuguese");

int num;

printf("Informe um n�mero, para saber se � PAR, IMPAR OU ZERO: ");
scanf("%d",&num);

if(num == 0){
    printf("\nO n�mero %i � ZERO: \n",num);

}
    else{if(num % 2==0){
        printf("\nO n�mero %i � PAR: \n",num);
    }

        else{
        printf("\nO n�mero %i � IMPAR: \n",num);
        }

    }


}
