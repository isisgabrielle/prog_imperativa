// ler peso e altura e exibir o imc, e determinar o nivel de obesidade da pessoa
#include <stdio.h>
int main()
{
    float peso, altura, imc;
    printf("digite seu peso (massa): ");
    scanf("%f", &peso);
    printf("digite sua altura: ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    if (imc < 18.5)
        printf("magreza ");
    else if (imc <= 24.9)
        printf("saudavel ");
    else if (imc <= 29,9)
        printf("sobrepeso ");
    else if (imc <= 34.9)
        printf("obsidade grau um");
    else if (imc <= 39.9)
        printf("obesidade grau dois (severa)");
    else
        printf(" tres(morbida) ");
}
