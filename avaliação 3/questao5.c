//Faça um programa para verificar se determinado número inteiro lido N é divisível por A ou B, mas não simultaneamente pelos
//dois valores dados. São A e B, bem como N, dados pelo usuário. Atendendo a condição estabelecida, emitir mensagem “ATENDE
// CONDIÇÃO”; caso contrário, exibir: “NÃO ATENDE CONDIÇÃO”.
#include <stdio.h>
int main(){
    int numeroint,a,b,resto, resto2;
    printf("digite o numero inteiro: ");
    scanf("%d", &numeroint);
    printf("digite o numero para checar se eh divisivel: ");
    scanf("%d", &a);
    printf("digite outro numero para checar se eh divisivel: ");
    scanf("%d", &b);
    resto =numeroint % a ;
    resto2 = numeroint % b;
    if (resto == 0)
        printf("ATENDE A CONDICAO");
    else if (resto2 == 0)
        printf("ATENDE A CONDICAO");
    else
        printf("NAO ATENDE A CONDICAO");
    
}