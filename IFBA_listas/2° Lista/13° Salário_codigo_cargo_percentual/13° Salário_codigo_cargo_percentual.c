#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"portuguese");


int codigo;
float salario, percentual;
printf("Informe o c�digo correspondente ao cargo: ");
scanf("%d",&codigo);

printf("\nInforme o sal�rio do funcionario: R$");
scanf("%f",&salario);

if(codigo!=1 && codigo!=2 && codigo!=3 && codigo!=4 && codigo!=5){
    printf("\n\t\tCODIGO INV�LIDO!\n");
}
else{



if(codigo == 1){
    percentual = salario + (salario * 50 /100);
    printf("\n  C�DIGO      CARGO       PERCENTUAL");
    printf("\n    %d     ESCRITUR�RIO      50%%",codigo);
    printf("\n\nSal�rio reajustado do ESCRITUR�RIO: R$%.2f\n",percentual);

    }
    if(codigo == 2){
        percentual = salario + (salario * 30 /100);
        printf("\n  C�DIGO      CARGO       PERCENTUAL");
        printf("\n    %d      SECRET�RIO      30%%",codigo);
        printf("\n\nSal�rio reajustado do SECRET�RIO: R$%.2f\n",percentual);

    }
    if(codigo == 3){
        percentual = salario + (salario * 20 /100);
        printf("\n  C�DIGO      CARGO       PERCENTUAL");
        printf("\n    %d         CAIXA          20%%",codigo);
        printf("\n\nSal�rio reajustado do CAIXA: R$%.2f\n",percentual);
    }
    if(codigo == 4){
        percentual = salario + (salario * 10 /100);
        printf("\n  C�DIGO      CARGO       PERCENTUAL");
        printf("\n    %d        GERENTE         10%%",codigo);
        printf("\n\nSal�rio reajustado do GERENTE: R$%.2f\n",percentual);
    }
    if(codigo == 5){
        printf("\n  C�DIGO      CARGO       PERCENTUAL");
        printf("\n    %d        DIRETOR    N�o tem aumento\n",codigo);

    }
}

}
