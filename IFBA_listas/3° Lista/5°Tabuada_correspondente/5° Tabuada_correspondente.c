#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>


void main ()
{
    setlocale(LC_ALL,"portuguese");

    //VARIAVEL: (NUM: OP��O DO MENU), VARIAVEIS(SOMA E SUBTR RECEBE O CALCULO DA OPERA��
    //VARIAVEL: (X: CONTADOR DO WHILE).
    int num,soma,subtr,x;
    //VARIAVEIS QUE RECEBE O VALOR DA TABUADA QUE O USU�RIO QUER:
    int parcela,aditivo,dividendo,fator;
    // VARIAVEIS QUE RECEBE O CALCULO DA OPERA��O:
    float mult,divisao;
    //VARIAVEL PARA SABER SE O USUARIO QUER OU N�O CONTINUAR COM A TABUADA:
    char continuar;
    //VARIAVEIS DO TIPO BOOLEANA:
    char tabuada = 1;
    bool b = true;

    x=0;
    aditivo=0;
    parcela=0;
    dividendo=0;
    tabuada =1;
    fator=0;

    while(b)
    {
        x=0;
        aditivo=1;
        parcela=0;
        dividendo=0;
        tabuada=1;
        fator=0;

        //MENU DA TABOADA:
        printf("\n\n\t\t++--**//++--**//++--**//++--**//ESCOLHA A TABUADA DESEJADA++--**//++--**//++--**//++--**//\n\n");
        printf("\n\n\n\t1 Op��o: Soma +++++\n\t2 Op��o: Subtra��o -----\n\t3 Op��o: Multiplica��o *****\n\t4 Op��o: Divis�o ///// \n");
        printf("\n\tDigite a op��o desejada? ");
        fflush(stdin);
        scanf("%d",&num);

        switch (num)
        {
        //CASO O USUARIO ESCOLHA: OP��O DE ADI��O:
        case 1:

            x = -1;
            printf("\nInforme a 1� parcela da TABUADA DE ADI��O que voc� deseja!  ");
            fflush(stdin);
            scanf("%d",&parcela);
            while(x!=10)
            {
                x+=1;
                printf("\n\t%d + %d = %d\n",parcela,x,soma=parcela+x);
            }
            break;

        //CASO O USUARIO ESCOLHA: OP��O DE SUBTRA��O COM N�MERO (1)
        case 2:

            printf("\n\nInforme o aditivo da TABUADA DE SUBTRA��O que voc� deseja!  ");
            fflush(stdin);
            scanf("%d",&aditivo);

            if(aditivo==1)
            {
                x = -1;
                while (x!=11)
                {
                    x += 1;

                    printf("\n\t%d - %d = %d\n",x,aditivo,subtr=x-aditivo);

                }

            }

            //CASO O USUARIO ESCOLHA: OP��O DE SUBTRA��O COM N�MERO (2)
            if(aditivo==2)
            {
                x = -1;
                while(x!=12)
                {
                    x+=1;
                    printf("\n\t%d - %d = %d\n",x,aditivo,subtr=x-aditivo);
                }

            }
            //CASO O USUARIO ESCOLHA: OP��O DE SUBTRA��O COM N�MERO (3)
            if(aditivo==3)
            {
                x=-1;
                while(x!=13)
                {
                    x+=1;
                    printf("\n\t%d - %d = %d\n",x,aditivo,subtr=x-aditivo);

                }
            }
            //CASO O USUARIO ESCOLHA: OP��O DE SUBTRA��O COM N�MERO (4)
            if(aditivo==4)
            {
                x=-1;
                while(x!=14)
                {
                    x+=1;
                    printf("\n\t%d - %d = %d\n",x,aditivo,subtr=x-aditivo);
                }
            }
            //CASO O USUARIO ESCOLHA: OP��O DE SUBTRA��O COM N�MERO (5)
            if(aditivo==5)
            {
                x=-1;
                while(x!=15)
                {
                    x+=1;
                    printf("\n\t%d - %d = %d\n",x,aditivo,subtr=x-aditivo);
                }
            }
            //CASO O USUARIO ESCOLHA: OP��O DE SUBTRA��O COM N�MERO (6)
            if(aditivo==6)
            {
                x=-1;
                while(x!=16)
                {
                    x+=1;
                    printf("\n\t%d - %d = %d\n",x,aditivo,subtr=x-aditivo);
                }
            }
            //CASO O USUARIO ESCOLHA: OP��O DE SUBTRA��O COM N�MERO (7)
            if(aditivo==7)
            {
                x=-1;
                while(x!=17)
                {
                    x+=1;
                    printf("\n\t%d - %d = %d\n",x,aditivo,subtr=x-aditivo);
                }
            }
            //CASO O USUARIO ESCOLHA: OP��O DE SUBTRA��O COM N�MERO (8)
            if(aditivo==8)
            {
                x=-1;
                while(x!=18)
                {
                    x+=1;
                    printf("\n\t%d - %d = %d\n",x,aditivo,subtr=x-aditivo);
                }
            }
            //CASO O USUARIO ESCOLHA: OP��O DE SUBTRA��O COM N�MERO (9)
            if(aditivo==9)
            {
                x=-1;
                while(x!=19)
                {
                    x+=1;
                    printf("\n\t%d - %d = %d\n",x,aditivo,subtr=x-aditivo);
                }
            }
            //CASO O USUARIO ESCOLHA: OP��O DE SUBTRA��O COM N�MERO (10)
            if(aditivo==10)
            {
                x=-1;
                while(x!=20)
                {
                    x+=1;
                    printf("\n\t%d - %d = %d\n",x,aditivo,subtr=x-aditivo);
                }
            }
            break;

        //TABUADA DE MULTIPLICA��O:
        case 3:
            x=-1;
            printf("\n\nInforme o fator da TABUADA DE MULTIPLICA��O que voc� deseja!  ");
            fflush(stdin);
            scanf("%d",&fator);

            while(x!=10)
            {
                x += 1;
                printf("\n\t%d * %d = %.0f\n",x,fator,mult=x*fator);
            }
            break;

        //CASO O USUARIO ESCOLHA: TABUADA DE DIVIS�O DE N�MERO (1)
        case 4:
            printf("\n\nInforme o dividendo da TABUADA DE DIVIS�O que voc� deseja!  ");
            fflush(stdin);
            scanf("%d",&dividendo);

            if (dividendo==1)
            {
                x=0;
                while(x!=10)
                {
                    x += 1;
                    printf("\n\t%d / %d = %.1f\n",x,dividendo,divisao=(float)x/dividendo);
                }
            }

            //CASO O USUARIO ESCOLHA: TABUADA DE DIVIS�O DE N�MERO (2)
            if(dividendo==2)
            {
                x=1;
                while(x!=20)
                {
                    x+=1;
                    printf("\n\t%d / %d = %.1f\n",x,dividendo,divisao=(float)x/dividendo);
                }
            }

            //CASO O USUARIO ESCOLHA: TABUADA DE DIVIS�O DE N�MERO (3)
            if(dividendo==3)
            {
                x=2;
                while(x!=30)
                {
                    x += 1;
                    printf("\n\t%d / %d = %.1f\n",x,dividendo,divisao=(float)x/dividendo);
                }
            }

            //CASO O USUARIO ESCOLHA: TABUADA DE DIVIS�O DE N�MERO (4)
            if(dividendo==4)
            {
                x=3;
                while(x!=40)
                {
                    x += 1;
                    printf("\n%d / %d = %.1f\n",x,dividendo,divisao=(float)x/dividendo);
                }
            }

            //CASO O USUARIO ESCOLHA: TABUADA DE DIVIS�O DE N�MERO (5)
            if(dividendo==5)
            {
                x=4;
                while(x!=50)
                {
                    x += 1;
                    printf("\n\t%d / %d = %.1f\n",x,dividendo,divisao=(float)x/dividendo);
                }
            }

            //CASO O USUARIO ESCOLHA: TABUADA DE DIVIS�O DE N�MERO (6)
            if(dividendo==6)
            {
                x=5;
                while(x!=60)
                {
                    x += 1;
                    printf("\n\t%d / %d = %.1f\n",x,dividendo,divisao=(float)x/dividendo);
                }
            }

            //CASO O USUARIO ESCOLHA: TABUADA DE DIVIS�O DE N�MERO (7)
            if(dividendo==7)
            {
                x=6;
                while(x!=70)
                {
                    x += 1;
                    printf("\n\t%d / %d = %.1f\n",x,dividendo,divisao=(float)x/dividendo);
                }
            }

            //CASO O USUARIO ESCOLHA: TABUADA DE DIVIS�O DE N�MERO (8)
            if(dividendo==8)
            {
                x=7;
                while(x!=80)
                {
                    x += 1;
                    printf("\n\t%d / %d = %.1f\n",x,dividendo,divisao=(float)x/dividendo);
                }
            }

            //CASO O USUARIO ESCOLHA:TABUADA DE DIVIS�O DE N�MERO (9)
            if(dividendo==9)
            {
                x=8;
                while(x!=90)
                {
                    x = 1;
                    printf("\n\t%d / %d = %.1f\n",x,dividendo,divisao=(float)x/dividendo);
                }
            }

            //CASO O USUARIO ESCOLHA:TABUADA DE DIVIS�O DE N�MERO (10)
            if(dividendo==10)
            {
                x=10;
                while(x!=100)
                {
                    x += 10;
                    printf("\n\t%d / %d = %.1f\n",x,dividendo,divisao=(float)x/dividendo);
                }
            }

            break;

        //CASO O USUARIO INFORME ALGUMA OP��O INEXISTENTE:
        default:
            printf("\nInforme a op��o correta!\n");
            break;
        }


        //VARIAVEL DO TIPO (CHAR: CONTINUAR) PERGUNTA AO USUARIO SE ELE QUER CONTINUAR COM A TABUADA:
        printf("\nDeseja continuar com a TABUADA? SIM [S], N�O [N]  ");
        fflush(stdin);
        continuar=getchar();

        //SE O USUARIO INFORMAR ALGUMA OP��O DIFERENTE DE (S) OU (N) O PROGRAMA N�O IRA ACEITAR:
        if(continuar!='s'&&continuar!='n')
        {
            //VARIAVEL (CHAR: TABUADA, DO TIPO BOOLEANA) SO SAI DO LA�O DE REPETI��O QUANDO
            //O USUARIO DIGITA (S) OU (N). AT�: TABUADA = 0;
            while(tabuada)
            {
                printf("\nVoc� digitou a op��o errada, favor informar a op��o correta!\n");
                printf("\nDeseja continuar com a TABUADA? SIM [S], N�O [N]  ");
                fflush(stdin);
                continuar=getchar();

                //CONFERE SE O USUARIO iNFORMOU (S) OU (N).
                if(continuar=='s'||continuar=='n')
                {
                    tabuada=0;
                }

            }


        }

        //SE FOR (N) A TABUADA E ENCERRADA E SAI DO PROGRAMA.
        if(continuar=='n')
        {
            b=false;
            printf("\nA tabuada foi encerrada!\nObrigado!\n");
        }
        else
        {
            //SE FOR (S) CONTINUA A TABUADA E SEGUE O PROGRAMA.
            if(continuar=='s')
            {
                system("cls");

                printf("\n\nCONTINUE!...\n\n");
            }

        }


    }


}







