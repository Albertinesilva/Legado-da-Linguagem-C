#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
// OPERADOR TERNARIO

setlocale(LC_ALL,"portuguese");

//A LETRA (a e menor que b) ENT�O (c) VAI RECEBER 2:
    int a = 4, b = 8;
    int c = (a > b) ? 1 : 2;
    printf("O resultado � %i \n",c);

//A LETRA (a1 e maior que b1) ENT�O (c1) VAI RECEBER 14:
    int a1 = 14, b1 = 8;
    int c1 = (a1 > b1) ? 1 : 2;
    printf("\nO resultado � %d \n",c1);

//A LETRA (a2 e maior que b2) ENT�O (c2) VAI RECEBER b2 * 2 = 16:
    int a2 = 14, b2 = 8;
    int c2 = (a2 > b2) ? b2 * 2 : a + 5;
    printf("\nO resultado � %i \n",c2);

//MOSTRA A ESTRIG "APROVADO" OU "REPROVADO" SE (media > 7);
    float media = 5.5;
    printf("\nSua situa��o � %s \n",(media >= 7) ? "Aprovado" : "Reprovado");

//EXEMPLO CLASSICO DE MAIOR OU MENOR N�MERO:
    int n1,n2;

    printf("\nDigite um n�mero: ");
    scanf("%d",&n1);
    printf("\nDigite outro n�mero: ");
    scanf("%i",&n2);

    int maior = (n1 > n2) ? n1 : n2;
    printf("\nEntre %d � %d, o maior foi %i\n",n1,n2,maior);
}
