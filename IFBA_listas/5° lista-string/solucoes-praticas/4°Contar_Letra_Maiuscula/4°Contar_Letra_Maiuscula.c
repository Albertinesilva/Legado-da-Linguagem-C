#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL,"portuguese");

    char nome[50],copia[50],letras[50];
    int i=0, tam=0,cont=0;


    printf("\n\tInforme um nome ou frase: ");
    fflush(stdin);
    gets(nome);

    strcpy(copia,nome);
    tam=strlen(nome);
    strupr(copia);

    printf("\n\n\tTamanho da STRING: %d\n\tNome: %s\n\tMaiuscula %s\n",tam,nome,copia);

    for(i=0; i<tam; i++)
    {
        //COPARANDO SE � MAIUSCULA OU N�O
        if(nome[i]>='A'&& nome[i]<='Z') //PODE SER ASSIM-> if(nome[i]==copia[i]) PALAVRA COPIA ESTA EM MAIUSCULA
        {
            letras[cont]=nome[i];
            cont++;
        }

    }

    letras[cont]='\0';

    if(cont==0)
    {
        printf("\n\n\tO NOME: %s, N�O POSSUI LETRAS MAIUSCULAS\n",nome);

    }
    else
    {
        printf("\n\tO NOME: %s, POSSUI %d LETRAS MAIUSCULAS QUE S�O: %s\n\n",nome,cont,letras);

    }

}
