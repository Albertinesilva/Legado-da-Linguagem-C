#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
setlocale(LC_ALL,"portuguese");


int a,b,c;

printf("Informe um dos lados do tri�ngulo: ");
scanf("%d",&a);

printf("\nInforme o outro lado do tri�ngulo: ");
scanf("%d",&b);

printf("\nInforme o ultimo lado do tri�ngulo: ");
scanf("%d",&c);

if(a < b + c && b < a + c && c < a + b)
    {

    if((a==b) && (b==c)){
    printf("\nCom os dados informados, forma um TRI�NGULO EQUIL�TERO\n");
    }

    else{
        if((a!=b) && (b!=c)){
        printf("\nCom os dados informados, forma um TRI�NGULO ESCALENO\n");
        }

        else{

            printf("\nCom os dados informados, forma um TRI�NGULO IS�SCELES\n");
            }

        }
}


        else{
        printf("\nN�o forma um TRI�NGULO\n");
            }

}
