#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n_0a100=0, n_101_200=0, n_maiorq200=0, negativos=0, numero;
    for (int i=1; i<=20; i++){
        printf("Digite o %d� n�mero inteiro: ", i);
        scanf("%d", &numero);
        if (numero>=0 && numero<=100){
            n_0a100+=1;
        }
        else if (numero>=101 && numero<=200){
            n_101_200+=1;
        }
        else if (numero>200){
            n_maiorq200+=1;
        }else //usando um else para contabilizar os numeros negativos, que n�o satisfazem as condi��es acima
            negativos+=1;
        }

    printf("A quantidade de n�meros entre 0 e 100 �: %d\n", n_0a100);
    printf("A quantidade de n�meros entre 101 e 200 �: %d\n", n_101_200);
    printf("A quantidade de n�meros maiores que 200 �: %d\n", n_maiorq200);
    printf("A quantidade de n�meros que n�o satisfazem as condi��es acima � de: %d\n", negativos); //usando um else para contabilizar os numeros negativos, que n�o satisfazem as condi��es acima
}
