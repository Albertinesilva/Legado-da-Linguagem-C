#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>


void main()
{
    setlocale(LC_ALL,"portuguese");

    int num;

    printf("Digite um n�mero que voc� quer que escreva por extenso: ");
    fflush(stdin);
    scanf("%d",&num);

//COME�A COM O COMANDO (SWITCH + VARIAVEL)
    switch (num)
    {

//TODOS OS (CASE) � ACOMPANHADO DA OP��O E DOIS PONTOS. OBS: N�O E PONTO E VIRGULA
    case 1:
        printf("UM\n");
        break;

    case 2:
        printf("DOIS\n");
        break;

    case 3:
        printf("TR�S\n");
        break;

    case 4:
        printf("QUATRO\n");
        break;

//N�O E OBRIGATORIO USAR O (BREAK) NO COMANDO (DEFAULT).
    default:
        printf("ERRO!\n");
        break;

    }
    printf("\nAcabou!\n");
}
