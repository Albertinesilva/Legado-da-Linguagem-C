#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int clima_de_agosto(int min,int max);

void main()
{
    setlocale(LC_ALL,"portuguese");

    int minima=0, maxima=0;
    int i=0,atipicos=0;;
    float taxa_dias_atipicos=0;


    for(i=1; i<=5; i++)
    {
        printf("\n\tQual a temperatura m�nima do %d� dia de Agosto: ",i);
        scanf("%d",&minima);

        printf("\n\tQual a temperatura m�xima do %d� dia de Agosto: ",i);
        scanf("%d",&maxima);

        atipicos+=clima_de_agosto(minima,maxima);
    }

    taxa_dias_atipicos = ((float)atipicos*5)/100;


    printf("\n\tTotal de dias at�picos no m�s de Agosto %d",atipicos);
    printf("\n\tTaxa de dias at�picos: %.2f\n",taxa_dias_atipicos);


}
int clima_de_agosto(int min,int max)
{
    int taxa=0;

    if(min<15 || max>38)
    {
        printf("\n\n\t\"CONTROLEM A POLUI��O - CUIDADO COM A CAMADA DE OZ�NIO.\"\n\n");
        taxa++;
    }

    return taxa;
}
