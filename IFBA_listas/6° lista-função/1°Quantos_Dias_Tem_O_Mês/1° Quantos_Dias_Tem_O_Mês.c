#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void quantosdias_tem_omes (int dias);

void quantosdias_tem_omes (int dias)
{
    if(dias==1 || dias==3 || dias==5 || dias==7 || dias==8 || dias==10 || dias==12)
    {
        printf("\n\tO M�S %d TEM 31 DIAS\n",dias);
    }
    else
    {
        if(dias==4 || dias==6 || dias==9 || dias==11)
        {
            printf("\n\tO M�S %d TEM 30 DIAS\n",dias);
        }
        else
        {
            if(dias==2)
            {
                printf("\n\tO M�S %d TEM 28 DIAS\n",dias);

            }

            else
            {
                printf("\n\tM�s inexistente!!!\n");
            }
        }

    }
}

void main()
{
    setlocale(LC_ALL,"portuguese");

    int mes=0;

    printf("\n\tInforme um m�s de 1 a 12 para saber quantos dias ele tem no m�s! ");
    scanf("%d",&mes);

    quantosdias_tem_omes(mes);
}



