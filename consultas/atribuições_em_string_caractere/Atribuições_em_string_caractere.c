#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main(){
setlocale(LC_ALL,"portuguese");


//TEM QUE BAIXAR A BIBLIOTECA (#INCLUDE <STRING.H> E UTILIZAR O
//COMANDO STRCPY PARA ATRIBUI��O DE STRINGS)
char nome[10];
strcpy (nome,"Albert");
printf("Muito prazer %s \n",nome);


//(STRCPY) � UTILIZADO PARA A ATRIBUI��O DE STRINGS
char situacao[10];
float media = 8.5;

strcpy (situacao, (media >= 7) ? "APROVADO" : "REPROVADO");
printf("\nA situa��o do aluno � %s\n ", situacao);

//ESSE RESULTADO QUER DIZER QUE A STRING "ALBERT" TEM (6 LETRAS)
//USANDO O COMANDO (STRLEN)
char nome1[10] = "Albert";
int tam = strlen (nome1);

printf("\nO nome de %s tem %i letras\n ",nome1,tam);

//ESSE RESULTADO QUER DIZER QUE A STRING "GUANABARA" E MAIOR QUE A STRING "ALBERT"
//UTILIZANDO O COMANDO (STRCMP)
char nome2[] = "Guanabara";
char nome3[] = "Albert";
int res = strcmp (nome2,nome3);

printf("\nO resultado da compara��o � %i\n",res);


//JUNTA UMA STRING COM A OUTRA: UTILIZANDO O COMANDO (STRCAT)
//PARA O NOME IMPRIMIR SEPARADO DA UM ESPA�O NAS ASPAS DA STRING. EX: ( "ALBERT  ")
char s1[] = "Albert ";
char s2[] = "silva";

printf("\n%s\n",strcat(s1 , s2));

//� UTILIZADO O COMANDO (STRUPR) PARA TRANSFOMAR A STRING EM MAIUSCULA
//NESSE EXMPLO O NOME ALBERT VAI IMPRIMIR EM MAIUSCULA
char n[] = "albert";
strupr(n);
printf("\nO nome albert passou para maiuscula %s\n ",n);

//� UTILIZADO O COMANDO (STRLWR) PARA TRANSFORMAR A STRING EM MINUSCULA
//NESSE EXEMPLO O NOME ALBERT VAI IMPRIMIR EM MINUSCULA
char n1[] = "ALBERT";
printf("\nO nome ALBERT passou para minusculo %s\n ",strlwr(n1));




}
