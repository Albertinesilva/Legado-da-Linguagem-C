#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"portuguese");

int n1,n2;

printf("Digite um n�mero: ");
fflush(stdin);
scanf("%d",&n1);

printf("Digite o segundo n�mero: ");
fflush(stdin);
scanf("%i",&n2);


    //if (n1 > n2){
        //printf("\nO maior valor � o primeiro: %d\n",n1);
    //} else {
      //  if (n1 < n2){
          //  printf("\nO maior valor � o segundo: %d\n",n2);
        //} else {
         //   if(n1 == n2){
           //     printf("\nOs dois valores s�o iguais: %d = %d\n",n1,n2);
            //}
        //}
    //}

//MESMO EXERC�CIO: SO QUE DE MANEIRA SIMPLIFICADA.

    //if (n1 > n2) {
      //  printf("\nO maior valor � o primeiro: %d\n",n1);
    //} else if (n1 < n2) {
        //printf("\nO maior valor � o segundo: %d\n",n2);
    //} else if (n1 == n2) {
      //  printf("\nOs dois valores s�o iguais: %d = %d\n",n1,n2);

    //}

//MESMO EXERC�CIO: DE OUTRA MANEIRA SIMPLIFICADA.

 if (n1 > n2) printf("\nO maior valor � o primeiro: %d\n",n1);
    else if (n1 < n2) printf("\nO maior valor � o segundo: %d\n",n2);
    else if (n1 == n2) printf("\nOs dois valores s�o iguais: %d = %d\n",n1,n2);

}
