#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int n=10;
    float vetor[n], menorq15=0, igual15=0, maiorq15=0, somamaiorq15=0;
    for (int i=0; i<n; i++){
        printf("Digite o valor de vetor[%d]: ", i);
        scanf("%f", &vetor[i]);
        if (vetor[i]<15)
            menorq15+=vetor[i];
        if (vetor[i]==15)
            igual15+=1;
        if (vetor[i]>15){
            somamaiorq15+=vetor[i];
            maiorq15+=1;
        }
    }
    printf("\nA soma dos elementos que s�o menores que 15 � de: %f", menorq15);
    printf("\nA quantidade de elementos que s�o iguais a 15 � de: %d", (int)igual15);
    printf("\nA m�dia dos valores maiores que 15 � de: %f", somamaiorq15/maiorq15 );
}
