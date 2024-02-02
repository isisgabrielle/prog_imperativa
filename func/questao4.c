    //Escrever um programa em C para ler uma temperatura em Celsius C e a retornar em Fahrenheit e em Kelvin. //Fórmulas de conversão para Fahrenheit: F = (C * 9/5) + 32; para Kelvin: K = C + 273,5. Criar uma função para cada conversão.

    #include <stdio.h>

    int conversaokelvin (int temperatura ){ 
        return temperatura + 273;
    }
    int conversaofahrenheit (int temperatura) {
        return (temperatura * 9/5 ) + 32;
    }

    int main() { 
        int temperatura;
        printf("digite a temperatura em celsius : ");
        scanf ("%d",&temperatura);
        printf ("a temperatura em kelvin eh igual a %d e em fahrenheit %d", conversaokelvin(temperatura), conversaofahrenheit (temperatura));
        return 0;
    }