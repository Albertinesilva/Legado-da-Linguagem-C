#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



struct banco
{
    int agencia;
    int conta;
    int idade;
    char nome[30];

} dados;

struct endereco
{
    int numero;
    char bairro[30];
} a;

void imprime_valor(int n);

void soma_imprime_valor(int *n);

void atribuir(struct banco *dados);

struct endereco imprimedados(struct endereco a);

int passagem(int x);

void passagem_por(int *y);

void main ()
{
    setlocale(LC_ALL,"portuguese");

    int por_valor=0;
    int referencia=5;

//Paasagem por valor, a variavel altera dentro da fun��o MAIN.
    printf("\n\tVariavel:(Por_valor) = %d",por_valor);
    passagem(por_valor);
    printf("\n\tDentro da fun��o MAIN a variavel:(por_valor)volta a ser o valor anterior = %d",por_valor);
    printf("\n--------------------------------------------------------------------------------------------------------------------\n");

//Passagem por referencia, a variavel altera dentro da fun��o MAIN.
    printf("\n\tVariavel:(referencia) = %d",referencia);
    passagem_por(&referencia);
    printf("\n\tO valor da variavel:(referencia)altera dentro da fun��o MAIN %d",referencia);
    printf("\n--------------------------------------------------------------------------------------------------------------------\n");

//Passando um campo da struct por valor.
    dados.agencia=0;
    printf("\n\tVariavel da struct antes da passagem por valor %d",dados.agencia);
    imprime_valor(dados.agencia);
    printf("\n\tVariavel depois da passagem por valor: %d",dados.agencia);
    printf("\n--------------------------------------------------------------------------------------------------------------------\n");

//Passando um campo da struct por refer�ncia.
    dados.conta=0;
    printf("\n\tVariavel da struct antes da passagem por refer�ncia %d",dados.conta);
    soma_imprime_valor(&dados.conta);
    printf("\n\tVariavel depois da passagem de refer�ncia: %d",dados.conta);
    printf("\n--------------------------------------------------------------------------------------------------------------------\n");

//Passando uma struct por refer�ncia.
    dados.idade=0;
    dados.nome[30];
    printf("\n\tVariaveis da struct antes da passagem da struct por refer�ncia: idade %d, Nome %s",dados.idade,dados.nome);
    atribuir(&dados);
    printf("\n\tVariaveis depois da passagem da struct: Idade: %d anos, Nome: %s",dados.idade,dados.nome);
    printf("\n--------------------------------------------------------------------------------------------------------------------\n");

//passando e recebendo uma struct
    a=imprimedados(a);
    printf("\n\tStruct depois de receber o retorno da fun��o N�mero: %d, Bairro: %s",a.numero,a.bairro);

    printf("\n--------------------------------------------------------------------------------------------------------------------\n\n");


}


int passagem(int x)
{
    x=10+10;

    printf("\n\tPassagem por valor\n\tSoma entre 10 + 10 = %d\n",x);
}
void passagem_por(int *y)
{
    *y=*y+5;

    printf("\n\tPassagem por referencia: \n\tResultado da soma = %d\n",*y);
}

void imprime_valor(int n)
{
    n=n+1;
    printf("\n\tResultado da soma = %d\n",n);
}

void soma_imprime_valor(int *n)
{
    *n=*n+1;
    printf("\n\tResultado da soma = %d\n",*n);
}

void atribuir(struct banco *dados)
{
    dados->idade=40;
    strcpy(dados->nome,"Albert");

    printf("\n\tMeu nome � %s tenho %d anos\n",dados->nome,dados->idade);
}

struct endereco imprimedados(struct endereco a)
{
    a.numero=15;
    strcpy(a.bairro,"Brotas");

    printf("\n\tBairro: %s ,N�mero: %d\n",a.bairro,a.numero);

    return a;
}
