// Escrever um programa em C para ler peso em kg e altura em m. Calcular e exibir o IMC da pessoa considerando
// IMC = peso / altura2 Para cálculo de IMC usar função, e nessa aplicar função de cálculo da potência (seja definida pelo programação ou nativa).
#include <stdio.h>

    float imc (float peso, float altura ){ 
        return peso/ (altura * altura) ;
    }
    

    int main() { 
        float peso, altura;
        printf("digite seu peso : ");
        scanf ("%f",&peso);
        printf("digite sua altura : ");
        scanf ("%f",&altura);
        printf ("seu imc eh de %.2f", imc (peso,altura));
        return 0;}