//Escrever um programa em C sobre investimento. Deve ser efetuada a leitura do valor inicial investido, 
//do valor investido mensalmente e do tempo de investimento (desconsiderar juros) e retornar o valor final (montante)
// e o valor do rendimento (montante – valor inicial investido). Deve ser aplicado um módulo(função) com dois parâmetros de saída.
#include <stdio.h>

float resultado (float valori, float valorm, float temp, float *montante, float *rendimento){ 
     *montante = valori+ (valorm * temp), *rendimento = *montante - valori ;
}
    

int main() { 
    float valorInicial, valorMensal,tempo, montante,rendimento;
    printf("digite o valor inicial investido : ");
    scanf ("%f",&valorInicial);
    printf("digite o valor investido mensalmente : ");
    scanf ("%f",&valorMensal);
    printf("digite o tempo de investimento : ");
    scanf ("%f",&tempo);
    resultado(valorInicial,valorMensal, tempo, &montante,&rendimento);
    printf ("o seu montante eh de %.2f\n", montante);
    printf ("o seu rendimento eh de %.2f", rendimento);
 }