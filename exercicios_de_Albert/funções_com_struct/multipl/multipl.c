#include <stdio.h>
#include <locale.h>

int mul (int x, int y);

void main()
{
setlocale(LC_ALL,"portuguese");
int x,y,resul;

printf("Digite um n�mero\n");
scanf("%d",&x);

printf("Digite outro n�mero\n");
scanf("%d",&y);

resul = mul (x,y);
printf("Resultado da multiplica��o %d\n",resul);
printf("Resultado da multiplica��o %d\n",resul);
}

int mul (int x,int y)
{
int resul;
resul = x * y;
}
