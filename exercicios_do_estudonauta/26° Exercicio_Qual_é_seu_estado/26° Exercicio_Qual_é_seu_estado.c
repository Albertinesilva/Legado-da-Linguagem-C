#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main (){
setlocale(LC_ALL,"portuguese");

char estado[10];

printf("Em que estado do Brasil voc� nasceu? ");
fflush(stdin);
gets(estado);

if (strcmp(estado,"RJ")== 0) {
    printf("Nascendo em %s voc� � CARIOCA\n",estado);

    }else{
    if (strcmp(estado, "SP")== 0) {
        printf("Nascendo em %s voc� � PAULISTA\n",estado);

        }else{
        if (strcmp(estado, "MG")== 0) {
            printf("Nascendo em %s voc� � MINEIRO\n",estado);

            }else{
            if (strcmp(estado, "AL")== 0) {
                printf("Nascendo em %s voc� � ALAGOANO\n",estado);


                }else{
                if (strcmp(estado, "RN")== 0){
                    printf("Nascendo em %s voc� � POTIGUAR\n",estado);

                    }else{
                    if(strcmp(estado, "BA")== 0){
                        printf("Nascendo em %s voc� � SOTEROPOLITANO\n",estado);
                        }else{
                            printf("Nascendo em %s voc� � natural da sua cidade, mas ainda n�o sei como te chamar!",estado);

                        }

                    }
                }
            }
        }
    }
}










