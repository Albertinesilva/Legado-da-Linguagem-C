#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float media_aritmetica (float nota[3],int n, char l);

void main()
{
    setlocale(LC_ALL,"portuguese");

    char letra;
    int i=0;
    float nota[3];

    for(i=0; i<3; i++)
    {
        printf("\n\tInforme a %d� nota do aluno: ",i+1);
        scanf("%f",&nota[i]);
    }

    printf("\n\tOP��O:\n\t (A) M�DIA ARITM�TICA\n\t (P) M�DIA PONDERADA: ");
    fflush(stdin);
    letra=getchar();

    media_aritmetica(nota,3, letra);

}
float media_aritmetica(float nota[3],int n, char l)
{
    float media=0,soma=0;
    int i=0;
    float p=0;

    if(l=='a'||l=='A')
    {
        for(i=0; i<3; i++)
        {
            soma+=nota[i];
        }

        media=soma/3;
        printf("\n\tSoma das tr�s notas: %.2f\n\tA m�dia aritm�tica �: %.2f\n",soma,media);

        return media;
    }
    else if(l=='p'||l=='P')
    {

        soma=(5*nota[0])+(3*nota[1])+(2*nota[2]);
        p=5+3+2;
        media=soma/p;

        printf("\n\t1� NOTA: PESO 5,0\n\t2� NOTA: PESO 3,0\n\t3� NOTA: PESO 2,0\n\n\tSOMA DAS TR�S NOTAS: %.2f\n\tM�DIA PONDERADA �:   %.2f\n",soma,media);

        return media;
    }

}
