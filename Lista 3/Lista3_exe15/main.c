#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, fatorial=1;
    printf("Digite um n�mero para ser calculado o valor de seu fatorial: ");
    scanf("%d", &numero);
    for (int i=numero; i>=1; i--)
        fatorial = fatorial *i;
    printf("O valor do fatorial �: %d ", fatorial);

}
