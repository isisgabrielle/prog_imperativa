//Escrever programa em C para ler número de gatos capturados e exibir a
//distribuição das castrações entre os veterinários. Vale
//esclarecer que se capturados 4 ou menos gatos, as castrações ficam sob a responsabilidade de todos os veterinários, em conjunto.
#include <stdio.h>
#include <math.h>

int quociente(int dividendo, int divisor){
    float Divisao;
    Divisao = (float)dividendo / divisor;
    return (int)Divisao;
}

int main(){
    int gatos, resto;
    printf("digite o numero de gatos capturados: ");
    scanf("%d", &gatos);
    resto = gatos % 4;
    if (gatos <= 4)
        printf("as castrações ficam sob a responsabilidade de todos os veterinários");
    else if (gatos % 4 == 0)
        printf("serao %d castracoes pra cada veterinario experiente", quociente(gatos, 4));
    else
        printf("serao %d castracoes pra cada veterinario experiente", quociente(gatos, 4));
    printf(" e %d castracoes para o recem formado", resto);
}