// Escrever programa para ler as três notas de um aluno, calcular a média deste (média ponderada: primeira nota com peso 1,
// segunda nota com peso 2 e terceira nota com peso 3) e determinar a situação do aluno: APROVADO – se média igual ou superior a 7;
//  EM RECUPERAÇÃO – se não aprovado e com média igual ou superior a 5; REPROVADO – quando média inferior a 5.
#include <stdio.h>
#include <math.h>

int main(){
    int pnota, snota, tnota, media;
    printf("digite a primeira nota: ");
    scanf("%d", &pnota);
    printf("digite a segunda nota: ");
    scanf("%d", &snota);
    printf("digite a terceira nota: ");
    scanf("%d", &tnota);
    media = (float)(pnota * 1 + snota * 2 + tnota * 3) / 6;

    if (media >= 7)
        printf("PARABENS VOCE FOI APROVADO");
    else if (media >= 5)
        printf(" RECUPERACAO");
    else
        printf("REPROVADO");
    return 0;
}