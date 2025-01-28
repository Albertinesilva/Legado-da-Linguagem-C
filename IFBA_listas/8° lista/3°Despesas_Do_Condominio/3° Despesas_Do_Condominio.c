#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>


//ESTRUTURA PARA CADASTRO DE MORADORERS DE CADA APARTAMENTO DO CONDOM�NIO:
struct condominio
{
    char nome_morador[10];
    int num_apart;
    float area;
    int num_moradores;
} vetor[3];

//FUN��O: MENU DE CADASTRO DOS APARTAMENTOS
int menu(void);

//FUN��O: C�LCULO DA �REA COMUM (CONDOMINIO), E C�LCULO DE  �REA DO EDIF�CIO
//ONDE � FEITO O C�LCULO PARA TRANSFORMAR AS �REAS EM PORCENTAGEM
float calculo_area(float area_cond,float area_edf);

/*ESTRUTURA QUE PASSA E RECEBE INFORMA��ES:
  �REA(EM M2)DO APARTAMENTO, �REA (EM M2) COMUM DO CONDOM�NIO
  �REA(EM M2) DO EDIF�CIO E DESPESAS DO CONDOMINIO. ONDE � FEITO O CALCULO DO PAGAMENTO DO INQUILINO
  C�LCULO CHAMADO DE (FRA��O IDEAL) */
struct condominio despesas(struct condominio tam_area[],int x,float  valor_pago_mes[],int y,float m2_condominio,float m2_edificio,float despesa_cond);

//ESTRUTURA QUE PASSA E RECEBE INSTRU��ES:
//QUAL APARTAMENTO TEM O MAIOR N�MERO DE MORADORES, E IMPRIME OS DADOS DESSE APARTAMENTO.
struct condominio moradores(struct condominio maior_moradores[],int y,int quat_moradores,float valor[],int x);

void main()
{
    setlocale(LC_ALL,"portuguese");

    int cadastro=0,i=0;
    int vet_moradores[3];
    float valorpago[3];
    bool sair=true;

    //CADASTRO RECEBE DA FUN��O A OP��O DO USU�RIO
    cadastro=menu();


    while(sair)
    {

        switch(cadastro)
        {
        case 1:
            for(i=0; i<3; i++)
            {
                printf("\n\n------------------------------CADASTRO DO %d� APARTAMENTO------------------------------\n",i+1);
                printf("\nInforme o nome do respons�vel do apartamento: ");
                setbuf(stdin,NULL);
                fflush(stdin);
                gets(vetor[i].nome_morador);

                printf("\nInforme o n�mero do apartamento: ");
                setbuf(stdin,NULL);
                scanf("%i",&vetor[i].num_apart);

                printf("\nInforme a �rea em m2 do apartamento: ");
                setbuf(stdin,NULL);
                scanf("%f",&vetor[i].area);

                printf("\nInforme o n�mero de moradores do apartamento: ");
                setbuf(stdin,NULL);
                scanf("%i",&vetor[i].num_moradores);

                //VETOR RECEBE DO VETOR DE ESTRUTURA OS DADOS DOS DO N�MERO DE MORADORES DE CADA
                //APARTAMENTO, PARA SER REORDENADO LOGO ABAIXO NA OP��O 4
                vet_moradores[i]=vetor[i].num_moradores;

            }

            printf("\n\n---------------------------------------------------------------------------------------\n\n");

            //CADASTRO RECEBE DA FUN��O A OP��O DO USU�RIO
            cadastro=menu();
            break;

        case 2:

            printf("\n\n--------------------INFORMA��ES DA �REA(EM M2) DO CONDOM�NIO E EDIF�CIO-----------------\n");

            float area_comum=0;
            float area_totcondominio=0;
            float area_totedificio=0;

            printf("\nInforme a �rea de uso comum do condom�nio em M2: ");
            setbuf(stdin,NULL);
            scanf("%f",&area_totcondominio);

            printf("\nInforme a �rea total do edif�cio em M2: ");
            setbuf(stdin,NULL);
            scanf("%f",&area_totedificio);

            //VARIAVEL (�REA_COMUM)RECEBE DA FUN��O O CALCULO DA �REA DO CONDOMINIO E �REA
            //DO EDIF�CIO EM PORCENTAGEM DE �REA
            area_comum=calculo_area(area_totcondominio,area_totedificio);

            printf("\n%.1f%%: DE �REA COMUM DO CONDOMINIO",area_comum);

            printf("\n\n-----------------------------------------------------------------------------------------\n\n");

            //CADASTRO RECEBE DA FUN��O A OP��O DO USU�RIO
            cadastro=menu();

            break;

        case 3:

            printf("\n\n----------------------INFORMA��ES DAS DESPESAS DE CADA APARTAMENTO-----------------------\n");

            float tot_despesa=0;

            printf("\nInforme o valor total das despesas do condom�nio: ");
            setbuf(stdin,NULL);
            scanf("%f",&tot_despesa);

            //FUN��O QUE PASSA OS DADOS DAS DESPESAS DE CADA APARTAMENTO
            despesas(vetor,i,valorpago,i,area_totcondominio,area_totedificio,tot_despesa);

            printf("\n\n----------------------------------------------------------------------------------------\n\n");

            //CADASTRO RECEBE DA FUN��O A OP��O DO USU�RIO
            cadastro=menu();

            break;

        case 4:
            printf("\n--------------------DADOS DO APARTAMENTO COM MAIOR N�MERO DE MORADORES--------------------\n");

            int aux=0,x=0;
            int maior=0;

            //REORDENANDO VETORES PARA DESCOBRIR O MAIOR N�MERO DE MORADORES
            for(i=0; i<3; i++)
            {
                for(x=i+1; x<3; x++)
                {
                    if( vet_moradores[i]< vet_moradores[x])
                    {
                        aux= vet_moradores[i];
                        vet_moradores[i]= vet_moradores[x];
                        vet_moradores[x]=aux;
                    }
                }

            }

            //VARIAVEL MAIOR RECEBE DO VETOR O MAIOR N�MERO DE MORADORES DE UM APARTAMENTO
            maior= vet_moradores[0];

            //FUN��O QUE IMPRIME OS DADOS DO APARTAMENTO COM MAIOR N�MERO DE MORADORES
            moradores(vetor,i,maior,valorpago,i);

            printf("\n\n----------------------------------------------------------------------------------------\n\n");

            //CADASTRO RECEBE DA FUN��O A OP��O DO USU�RIO
            cadastro=menu();

            break;

        //OP��O 5: SAI DO PROGRAMA
        case 5:
            sair=false;
            break;

        default:

            printf("\nDigite a op��o correta: 1, 2, 3, 4 ou 5 para sair!\n");

            break;
        }
    }

}
//MENU
int menu(void)
{
    int opcao=0;

    while(opcao<1||opcao>5)
    {
        printf("\n\n\t1�- OP��O: CADASTRO ");
        printf("\n\t2�- OP��O: �REA TOTAL DO CONDOM�NIO ");
        printf("\n\t3�- OP��O: DESPESAS DO CONDOM�NIO ");
        printf("\n\t4�- OP��O: MAIOR N�MERO DE MORADORES ");
        printf("\n\t5�- OP��O: SAIR DO PROGRAMA ");

        printf("\n\n\tEscolha a op��o desejada: ");
        setbuf(stdin,NULL);
        scanf("%i",&opcao);

        system("cls");

        if(opcao<1||opcao>5)
        {
            printf("\n\tDIGITE A OP��O CORRETA: 1, 2, 3, 4 OU 5 PARA SAIR!\n");
        }

    }
    return opcao;
};
//CALCULO DA �REA DO CONDOMINIO: TRANSFORMANDO EM PORCENTAGEM
float calculo_area(float area_cond,float area_edf)
{
    float fi=0;

    fi=(area_cond/area_edf)*10;

    return fi;
};
//CALCULO DAS DESPESAS DO CONDOMINIO E O VALOR A SER PAGO POR CADA APARTAMENTO
struct condominio despesas(struct condominio tam_area[],int x,float  valor_pago_mes[],int y, float m2_condominio,float m2_edificio,float despesa_cond)
{
    int i=0;
    float fi = calculo_area(m2_condominio,m2_edificio);

    for(i=0; i<3; i++)
    {
        valor_pago_mes[i]= (tam_area[i].area * fi) + despesa_cond;

        printf("\nDespesa do %i� apartamento R$:%.2f ",i+1,valor_pago_mes[i]);
    }
};

//APARTAMENTO COM O MAIOR N�MERO DE MORADORES E IMPRIME OS DADOS DO APARTAMENTO
struct condominio moradores(struct condominio maior_moradores[],int y,int quant_moradores,float valor[],int x)
{

    for(y=0; y<3; y++)
    {
        if(maior_moradores[y].num_moradores==quant_moradores)
        {
            printf("\nNome do responsavel: %s\nN�mero do apartamento: %i\n�rea (em m2): %.0f M2\nN�mero de moradores: %i\nValor pago no M�s R$%.2f\n"
                   ,maior_moradores[y].nome_morador,maior_moradores[y].num_apart,maior_moradores[y].area,maior_moradores[y].num_moradores,valor[y]);
        }
    }

};

