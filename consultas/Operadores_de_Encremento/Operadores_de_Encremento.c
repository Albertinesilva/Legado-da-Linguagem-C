#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main (){
setlocale(LC_ALL,"portuguese");

//FAZENDO O INCREMENTO: 8 + 1 = 9
int n = 8;
n ++;
printf("Resultado do incremento � %i: \n",n);

//FAZENDO O DECREMENTO: 8 - 1 = 7
int m =8;
m --;
printf("\nResultado do decremento � %i: \n",m);


//A DEPENDER DA POSI��O DO SINAL O RESULTADO SO VAI SE EXIBIDO NA PROXIMA LINHA:
int z = 1;
printf("\nEssa linha n�o faz o incremento de Z por conta do sinal Z++: %i",z++);
printf("\nSo faz o incremento de Z nessa linha %i \n",z);


//A POSI��O DO SIMBOLO DE (+,-,*,/,%) FAZ TODA DIFEREN�A DENTRO DA OPERA��O
int b = 10;
printf("\nO resultado do incremento de b � %i: \n",++ b);


//DESSA FORMA O X INCREMENTA 6 E O Y INCREMENTA 5 + 3 = 8: POR CONTA DO SINAL DE X ( X++ )
int x = 5;
int y = 3 + x++;
printf("\nOs valores de x e y s�o %i � %i \n",x,y);

//DESSA FORMA O X1 INCREMENTA 6 E O Y INCREMENTA 6 + 3 = 9 POR CONTA DO SINAL DE X ( ++X )
int A = 5;
int D = 3 + ++A;
printf("\n O valor de (A) � %i o valor de (D) � %i\n",A,D);







}
