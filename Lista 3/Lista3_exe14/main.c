#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()  //n�o sei fazer este ainda
{

    setlocale (LC_ALL, "Portuguese");
    char resposta[4];
    printf("Responda � pergunta seguinte com \"Sim\" ou \"N�o\".\n");
    do{
        printf("Ol� tudo bem?\n");
        scanf("%s", &resposta);
        //printf("%s", resposta);
      /*  if (resposta=="Sim")
            printf("%s", resposta); */
        }while (resposta==Sim);
    }

