#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main (){
setlocale(LC_ALL,"portuguese");

int num;

printf("Me diga um n�mero e eu te direi se");
printf("\nele � POSITIVO, NEGATIVO ou NULO.\n");

printf("\nDigite um n�mero: ");
fflush(stdin);
scanf("%d",&num);

if (num > 0)
    printf("O valor %d digitado � POSSITIVO.\n",num);

 else  if (num < 0)
        printf("O valor %d digitado � NEGATIVO.\n",num);

     else  if (num == 0)
            printf("O valor %d digitado � NULO.\n",num);



}
