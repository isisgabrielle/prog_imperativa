//Escrever um programa em C para ler um valor V em reais, taxa de câmbio fixa de dólar e taxa de câmbio fixa de euro 
// e exibir em tela oscorrespondentes a V em dólar e em euro. Para tanto, criar função F em que dados valor e taxa de câmbio, retorna o valor//convertido. Criar módulo com aplicação de F, parâmetros de entrada e dois parâmetros de saída: valor emd ólar e valor em euro. 

#include <stdio.h>

float resultado (float valorReal, float taxadolar, float taxaeuro, float *valordolar, float *valoreuro){ 
     *valordolar = valorReal/taxadolar, *valoreuro = valorReal/taxaeuro ;
}
    

int main() { 
     float valorReal, taxacambiod,taxaeuro, valordolar,valoreuro;
     printf("digite o valor em reais: ");
     scanf ("%f",&valorReal);
     printf("digite a taxa de cambio fixa do dolar : ");
     scanf ("%f",&taxacambiod);
     printf("digite a taxa fixa do euro : ");
     scanf ("%f",&taxaeuro);
     resultado(valorReal,taxacambiod, taxaeuro, &valordolar,&valoreuro);
     printf ("esse valor em dolar equivale a %.2f\n", valordolar);
     printf ("esse valor em euro equivale a %.2f", valoreuro);
}