#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"portuguese");

int num1,num2;

printf("Informe o primeiro n�mero: ");
scanf("%i",&num1);

printf("Informe o segundo n�mero: ");
scanf("%i",&num2);


if(num1 == num2){
    printf("\nO 1� n�mero � igual ao 2� n�mero\n");

}else{if(num1 > num2){
    printf("\nO 1� n�mero %i � MAIOR que o 2� n�mero %i\n",num1,num2);

}
    else{if(num2 > num1){
    printf("\nO 2� n�mero %i � MAIOR que o 1� n�mero %i\n",num2,num1);
    }
    }

    }
}
