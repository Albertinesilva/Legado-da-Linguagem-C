#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>


void main(){
setlocale(LC_ALL,"portuguese");

int divisivel,x,primo;
bool b = true;
char continuar;
divisivel = 0;
x = 0;


while (b){
    divisivel = 0;
    x = 0;
    printf("\nInforme um n�mero para saber se � PRIMO: ");
    scanf("%d",&primo);

    while (x != primo){
        x += 1;

    if(primo%x==0){
        divisivel += 1;
        }
    }

        if(divisivel==2){
        printf("\nO n�mero %d � PRIMO\n\nDeseja continuar? SIM[S], N�O [N]: ",primo);
        fflush(stdin);
        continuar = getchar();
        }

        else{
        printf("\nO n�mero %d n�o � PRIMO!\n\nDeseja continuar? SIM[S], N�O[N] ",primo);
        fflush(stdin);
        continuar = getchar();
        }

        if(continuar=='n'){
            b = false;
            printf("\nConsulta de n�meros PRIMOS FOI ENCERRADA!!!\n");
        }

}

}
