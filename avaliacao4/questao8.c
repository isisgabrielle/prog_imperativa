// dado um numero na tela printa os numeros de 1 ate o numero da interacao atual sendo q serao feitas n interacoes 
#include <stdio.h>

int main() {
    int numero;

    printf("digite um numero entre 1 e 40: ");
    scanf("%d", &numero);
    if (1 <= numero && numero <= 40) {
        for (int inicial = 1; inicial <= numero; inicial++) {
            for (int coluna = 1; coluna <= inicial; coluna++) {
                printf("%d ", coluna);
            }
            printf("\n");
        }
    } else {
        printf("Numero fora da faixa permitida.\n");
    }
}