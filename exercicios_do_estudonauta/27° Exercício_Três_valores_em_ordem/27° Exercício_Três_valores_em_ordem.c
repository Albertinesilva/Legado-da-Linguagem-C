#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"portuguese");

int num1,num2,num3;

printf("Me diga tr�s n�meros e eu colocarei\n");
printf("eles em ordem pra voc�.\n");

printf("\nPimeiro n�mero: ");
fflush(stdin);
scanf("%d",&num1);

printf("\nSegundo n�mero: ");
fflush(stdin);
scanf("%d",&num2);

printf("\nTerceiro n�mero: ");
fflush(stdin);
scanf("%d",&num3);
printf("------------------------------\n");

    if(num1 > num2 && num1 > num3 && num2 < num3){
     printf("MAIOR: %d\n",num1);
     printf("INTERMEDI�RIO: %d\n",num3);
     printf("MENOR: %d\n",num2);

    }else{
        if (num2 > num1 && num2 > num3 && num3 < num1){
            printf("MAIOR: %d\n",num2);
            printf("INTERMEDIARIO: %d\n",num1);
            printf("MENOR: %d\n",num3);

        }else{
            if (num3 > num2 && num3 > num1 && num1 < num2){
                printf("MAIOR: %d\n",num3);
                printf("INTERMEDI�RIO: %d\n",num2);
                printf("MENOR: %d\n",num1);
            }

        }
    }

}
