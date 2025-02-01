#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>


int main(void)
{

    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));

    int x =10;
    double y =20.50;
    char z='a';

    int *ponteiro_x=&x;
    double *ponteiro_y=&y;
    char *ponteiro_z=&z;

    //Acessa o endere�o e o valor de cada Ponteiro.
    printf("\nEndere�o X = %d - Valor X = %d",ponteiro_x,*ponteiro_x);
    printf("\nEndere�o y = %d - Valor y = %.2f",ponteiro_y,*ponteiro_y);
    printf("\nEndere�o Z = %d - Valor Z = %c\n",ponteiro_z,*ponteiro_z);

    //Soma entre dois ponteiros: O ponteiro_x est� com o endere�o da vari�vel (X),cujo o valor � 10.
    //O ponteiro_y est� com o endere�o da variavel (y),cujo o valor � 20.50;
    double soma = *ponteiro_x + *ponteiro_y;
    printf("\n\nResultado da soma entre dois ponteiros = %.2f\n",soma);

    //Esta apontando para o endere�o da variavel (J).

    int j=25;
    int *resultado;

    printf("\nEndere�o da mem�ria de J = %d",&j);

    //Informando manualmente o endere�o de mem�ria da variavel (J).
    resultado = 6356688;
    printf("\nValor do ponteiro RESULTADO = %d\n",*resultado);

    return 0;
}
