#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//e) Apresentar os resultados das pot�ncias de 3, variando do expoente 0 at� o expoente 15. Deve ser
//considerado que qualquer n�mero elevado a zero � 1, e elevado a 1 � ele pr�prio. Observe que
//neste exerc�cio n�o pode ser utilizado o operador de exponencia��o do portuguol (^).

void main()
{
    setlocale(LC_ALL,"portuguese");

    int b=0,soma=1,e=0;

    printf("\n\tBase: ");
    setbuf(stdin,NULL);
    scanf("%d",&b);

    printf("\n\tExpoente: ");
    setbuf(stdin,NULL);
    scanf("%d",&e);

    for(int i=0; i!=e; i++)
    {
        soma*=b;

    }
    printf("\n\t%d",soma);

}
