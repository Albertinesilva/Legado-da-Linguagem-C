#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"portuguese");

int codigo;

printf("\nInforme o c�digo do produto: ");
fflush(stdin);
scanf("%d",&codigo);


if(codigo != 1 && codigo != 2 && codigo != 3 && codigo != 4 && codigo != 5){
    printf("\n\n\t\tC�DIGO INV�LIDO!\n\n");
}
    else{
        if(codigo == 1){
            printf("\n C�DIGO  DESCRI��O   PRE�O R$\n");
            printf("\n  %d    \t|CANETA  |\t1,20\n",codigo);
        }
        if(codigo == 2){
            printf("\n C�DIGO  DESCRI��O   PRE�O R$\n");
            printf("\n  %d    \t| L�PIS  |\t0,80\n",codigo);
        }
        if(codigo == 3){
            printf("\n C�DIGO  DESCRI��O   PRE�O R$\n");
            printf("\n  %d    \t| CADERNO |\t4,50",codigo);
        }
        if(codigo == 4){
            printf("\n C�DIGO  DESCRI��O   PRE�O R$\n");
            printf("\n  %d    \t| BORRACHA |\t1,00\n",codigo);
        }
        if(codigo == 5){
            printf("\n C�DIGO  DESCRI��O   PRE�O R$\n");
            printf("\n  %d    \t | R�GUA |\t1,50\n",codigo);
        }

    }

}
