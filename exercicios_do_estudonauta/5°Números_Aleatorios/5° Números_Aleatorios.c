#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main(){

setlocale(LC_ALL,"portuguese");

srand (time (NULL)); //COMANDO NECESSARIO PARA GERAR UM N�MERO ALEATORIO. OBS (-> TEM QUE SER MAIUSCULO (NULL))

// int n = rand() GERA N�MEROS GRANDES ( QUALQUER VALOR!)
int palpite,n = rand() % 5 + 1; // VARIAVEL = RAND () % 5 + 1 GERA UM N�MERO ALEATORIO ENTRE 1 E 5.



printf("***SER� QUE VOC� ACERTA?***\n");

printf("\n========== Vou pensar em um n�mero entre 1 e 5. Tente advinha! ==========\n");

printf("\nQual � o seu palpite? ");
scanf("%d",&palpite);

printf("\nEu pensei no n�mero %d e voc� pensou no %d.\n",n,palpite);



}
