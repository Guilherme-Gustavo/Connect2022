#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int codigoFuncionario;
    float salario;
    printf("Codigo 101 para Gerente;\n");
    printf("Codigo 102 para Engenheiro;\n");
    printf("Codigo 103 para Gerente;\n");
    printf("\"C�digo qualquer\" para outro cargo;\n");

    printf("Digite o c�digo do cargo do funcion�rio presente na tabela: ");
    scanf("%d", &codigoFuncionario);
    printf("Digite o sal�rio do funcion�rio: ");
    scanf("%f", &salario);

    if (codigoFuncionario==101){
        printf("\nO sal�rio do gerente antes do aumento era de R$%.2f e agora, com o aumento de 10%% � de R$%.2f.", salario, salario*1.1);
    } else if (codigoFuncionario==102){
        printf("\nO sal�rio do engenheiro antes do aumento era de R$%.2f e agora, com o aumento de 20%% � de R$%.2f.", salario, salario*1.2);
    } else if (codigoFuncionario==103){
        printf("\nO sal�rio do t�cnico antes do aumento era de R$%.2f e agora, com o aumento de 30%% � de R$%.2f.", salario, salario*1.3);
    } else
    printf("\nO sal�rio deste funcion�rio era de R$%.2f antes do aumento e agora, com o aumento de 40%% � de R$%.2f.", salario, salario*1.4);

}
