#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
setlocale(LC_ALL,"portuguese");

int semana;

printf("Informe um n�mero de 1 a 7: ");
scanf("%d",&semana);

if(semana == 1){
    printf("\nO dia da semana correspondente ao n�mero informado � DOMINGO\n");
}
    else{
        if(semana == 2){
        printf("\nO dia da semana correspondente ao n�mero informando � SEGUNDA FEIRA\n");
        }
        else{
            if(semana == 3){
            printf("\nO dia da semana correspondente ao n�mero informado � TER�A FEIRA\n");
            }
            else{
                if(semana == 4){
                printf("\nO dia da semana correspondente ao n�mero informado � QUARTA FEIRA\n");
                }
                else{
                    if(semana == 5){
                    printf("\nO dia da semana correspondente ao n�mero informado � QUINTA FEIRA\n");
                    }
                    else{
                        if(semana == 6){
                        printf("\nO dia da semana correspondente ao n�mero informado � SEXTA FEIRA\n");
                        }
                        else{
                            if(semana == 7){
                            printf("\nO dia da semana correspondente ao n�mero informado � SABADO\n");
                            }
                            else{
                                printf("\nO n�mero informado � invalido!");
                            }
                        }
                    }
                }
            }
        }
    }
}
