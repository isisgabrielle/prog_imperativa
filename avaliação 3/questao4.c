//Faça um programa para ler um número inteiro, positivo de três dígitos, e gerar outro número formado pelos dígitos invertidos do
//número lido. (Ex: Numero Lido = 123; Numero Gerado = 321) Em seguida informar: NÚMERO GERADO MAIOR QUE NÚMERO LIDO ou NÚMERO LIDO MAIOR QUE NÚMERO GERADO, ou ainda, NÚMERO GERADO IGUAL AO NÚMERO LIDO.
#include <stdio.h>
#include <math.h>

int main(){
    int numero, primeiro,segundo,terceiro;
    printf("digite um numero inteiro de tres digitos: ");
    scanf("%d", &numero);
    primeiro = numero/100;
    segundo = (numero/ 10) % 10;
    terceiro = numero % 10;
    printf ("esse numero com digitos invertidos eh igual a %d", terceiro);
    printf ("%d", segundo);
    printf ("%d",primeiro);
    if (terceiro> primeiro)
        printf(", NUMERO GERADO MAIOR QUE NUMERO LIDO");
    else if (terceiro < primeiro)
        printf(", NUMERO LIDO MAIOR QUE NUMERO GERADO");
    else
        printf(", NUMERO IGUAL AO NUMERO LIDO");
    return 0;
}