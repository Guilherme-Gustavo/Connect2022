#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int quilometragem, numero_da_parada=2;
    printf("Digite a quilometragem percorrida desde o in�cio da viagem at� a 1� parada: ");
    scanf("%d", &quilometragem);
    printf("A quilometragem percorrida at� agora � de: %dkm\n", quilometragem);

    for (int i=quilometragem; i<4000;){
        printf("Digite a quilometragem percorrida desde a parada anterior at� a parada atual: ");
        scanf("%d", &quilometragem);
        i=i+quilometragem;
        printf("\nA quilometragem percorrida at� agora � de: %dkm\n", i);
    }
}
