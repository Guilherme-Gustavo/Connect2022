#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n,soma=0;
    for (int i=1;i<=10;i++){
        printf("Escreva o %d� n�mero: ", i);
        scanf ("%f", &n);
        soma=soma+n;
    }
    printf("A soma dos 10 n�meros � de: %f", soma);
}
