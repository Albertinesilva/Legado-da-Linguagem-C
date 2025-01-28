#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>


void main()
{
    setlocale(LC_ALL,"portuguese");

    float soma,diferenca,produto,quociente;
    float num1,num2;
    char menu = 1;
    char opcao;

    opcao=0;
    soma=0;
    diferenca=0;
    produto=0;
    quociente=0;
    num1=0;
    num2=0;



    while(menu)
    {
        opcao=0;
        soma=0;
        diferenca=0;
        produto=0;
        quociente=0;
        num1=0;
        num2=0;


        printf("\n\n\t\t\t*************************ESCOLHA A OPERA��O DESEJADA*************************\n");
        printf("\n\n\n\n\t\t1 OP��O: SOMA\n\n\n\t\t2 OP��O: SUBTRA��O\n\n\n\t\t3 OP��O: MULTIPLICA��O\n\n\n\t\t4 OP��O: DIVIS�O\n\n\n\t\t0 OP��O: SA�DA\n");
        fflush(stdin);
        opcao=getchar();

        system("cls");

        if(opcao=='1')
        {
            opcao=1;
        }
        else
        {
            if(opcao=='2')
            {
                opcao=2;
            }
            else
            {
                if(opcao=='3')
                {
                    opcao=3;
                }
                else
                {
                    if(opcao=='4')
                    {
                        opcao=4;
                    }
                    else
                    {
                        if(opcao=='0')
                        {
                            opcao=0;
                        }
                    }
                }
            }
        }

        switch (opcao)
        {


        case 1:
            printf("\nInforme a 1� parcela da SOMA: ");
            fflush(stdin);
            scanf("%f",&num1);
            printf("\nInforme a 2� parcela da SOMA: ");
            fflush(stdin);
            scanf("%f",&num2);

            soma = num1 + num2;
            printf("\nResultado: (PARCELA: %.1f) + (PARCELA: %.1f) = (SOMA: %.1f)\n",num1,num2,soma);

            break;

        case 2:
            printf("\nInforme o aditivo da SUBTRA��O: ");
            fflush(stdin);
            scanf("%f",&num1);
            printf("\nInforme o substrativo da SUBTRA��O: ");
            fflush(stdin);
            scanf("%f",&num2);

            diferenca = num1 - num2;
            printf("\nResultado: (ADITIVO: %.1f) - (SUBSTRATIVO: %.1f) = (DIFEREN�A: %.1f)\n",num1,num2,diferenca);

            break;

        case 3:
            printf("\nInforme o 1� fator da MULTIPLICA��O: ");
            fflush(stdin);
            scanf("%f",&num1);
            printf("\nInforme o 2� fator da MULTIPLICA��O: ");
            fflush(stdin);
            scanf("%f",&num2);

            produto = num1 * num2;
            printf("\nResultado: (FATOR: %.1f) * (FATOR: %.1f) = (PRODUTO: %.1f)\n",num1,num2,produto);

            break;

        case 4:
            printf("\nInforme o DIVIDENDO DA DIVIS�O: ");
            fflush(stdin);
            scanf("%f",&num1);
            printf("\nInforme o DIVISOR DA DIVIS�O: ");
            fflush(stdin);
            scanf("%f",&num2);

            quociente = num1 / num2;
            printf("\nResultado: (DIVIDENDO: %.2f) / (DIVISOR: %.2f) = (QUOCIENTE: %.2f)\n ",num1,num2,quociente);

            break;

        case 0:
            menu = 0;
            printf("\nObrigado por utilizar a CALCULADORA DE ALBERT!\n");


            break;

        default:
            printf("\n\nOP��O INCORRETA!\n\nFAVOR ESCOLHER A OP��O: 1,2,3,4 OU (ZERO PARA SAIR)\n\n");
            break;
        }

    }

}
