#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



void main()
{
    setlocale(LC_ALL,"portuguese");

    int num1=0,num2=0,num3=0,num4=0,num5=0;
    int aux=0;

    printf("\n\t1� n�mero: ");
    scanf("%d",&num1);

    printf("\n\t2� n�mero: ");
    scanf("%d",&num2);

    printf("\n\t3� n�mero: ");
    scanf("%d",&num3);

    printf("\n\t4� n�mero: ");
    scanf("%d",&num4);

    printf("\n\t5� n�mero: ");
    scanf("%d",&num5);



    if(num1>num2&&num1>num3&&num1>num4&&num1>num5)
    {
        printf("\n\t%d � maior",num1);
    }
    else
    {
        if(num1<num2&&num1<num3&&num1<num4&&num1<num5)
        {
            printf("\n\t%d � menor",num1);
        }

    }
    if(num2>num1&&num2>num3&&num2>num4&&num2>num5)
    {
        printf("\n\t%d � maior",num2);
    }
    else
    {
        if(num2<num1&&num2<num3&&num2<num4&&num2<num5)
        {
            printf("\n\t%d � menor",num2);
        }

    }
    if(num3>num1&&num3>num2&&num3>num4&&num3>num5)
    {
        printf("\n\t%d � maior",num3);
    }
    else
    {
        if(num3<num1&&num3<num2&&num3<num4&&num3<num5)
        {
            printf("\n\t%d � menor",num3);
        }

    }
    if(num4>num1&&num4>num2&&num4>num3&&num4>num5)
    {
        printf("\n\t%d � maior",num4);
    }
    else
    {
        if(num4<num1&&num4<num2&&num4<num3&&num4<num5)
        {
            printf("\n\t%d � menor",num4);
        }

    }
    if(num5>num1&&num5>num2&&num5>num3&&num5>num4)
    {
        printf("\n\t%d � maior",num5);
    }
    else
    {
        printf("\n\t%d � menor",num5);

    }






    if(num1%2==0&&num1%3==0)
    {
        printf("\n\t%d � divisivel por 2 e 3\n",num1);
    }

    if(num2%2==0&&num2%3==0)
    {
        printf("\n\t%d � divisivel por 2 e 3\n",num2);
    }

    if(num3%2==0&&num3%3==0)
    {
        printf("\n\t%d � divisivel por 2 e 3\n",num3);
    }

    if(num4%2==0&&num4%3==0)
    {
        printf("\n\t%d � divisivel por 2 e 3\n",num4);
    }



    if(num1<num2 && num1<num3 && num2<=num3)
    {
        printf("\n\t%d,%d,%d",num1,num2,num3);
    }
    else
    {
        if(num2<num1 && num2<num3 && num1<=num3)
        {
            printf("\n\t%d,%d,%d",num2,num1,num3);
        }
        else
        {
            if(num3<num2 && num3<num2 && num2<=num1)
            {
                printf("\n\t%d,%d,%d",num3,num2,num1);
            }
        }
    }

}


