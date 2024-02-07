// escrever um programa em C, para, dado o número de inscritos no passeio ao Museu, exibir o número de viagens que devem ser necessárias
// e o número de passagens de coletivo. Exemplos: se 22 pessoas – 2 viagens de kombi e 0 passagem em coletivo; se 37 pessoas – 3 viagens e 4 passagens em coletivo. Vale esclarecer que se o número de passageiros for inferior a 11, Sr. Zé os levará de Kombi.
#include <stdio.h>
#include <math.h>

int quociente(int dividendo, int divisor)
{
    float Divisao;
    Divisao = (float)dividendo / divisor;
    return (int)Divisao;
}

int main()
{
    int inscritos, resto;
    printf("digite o numero de inscritos no passeio ao museu: ");
    scanf("%d", &inscritos);
    resto = inscritos % 11;
    if (inscritos < 11)
        printf("sr.ze os levara de kombi");
    else if (inscritos % 11 == 0)
        printf("o numero de viagens necessarias eh %d", quociente(inscritos, 11));
    else
        printf("o numero de viagens necessarias eh %d", quociente(inscritos, 11));
    printf("o numero de viagens necessarias de coletivo eh de %d", resto);
}