#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero, soma=0;
    int i=2;
    printf("Informa��es ao usu�rio:\nDigite n�meros positivos para serem somados.\nQuando digitar um n�mero negativo, o programa ser� encerrado\ne este n�mero n�o ser� contabilizado na soma total dos positivos.\n\n");
    printf("Digite o 1� n�mero: ");
    scanf("%f", &numero);
    if (numero>=0)
        soma=soma+numero;
    while (numero>=0){
        printf("Digite o %d�: ", i);
        scanf("%f", &numero);
        i+=1;
        if (numero>=0)
        soma=soma+numero;
    }
    printf("Programa encerrado.\nA soma dos n�meros � de %f.", soma);

}
