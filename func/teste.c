#include <stdio.h>

int main(){
    float array[3];
    float montante;
    float rendimento;
    printf("Insira o valor inicial: ");
    scanf("%f", &array[0]);
    printf("digite o valor investido mensalmente : ");
    scanf ("%f", &array[1]);
    printf("digite o tempo de investimento : ");
    scanf ("%f", &array[2]);
    montante = array[0] + (array[1] * array[2]);
    rendimento = montante - array[0];
    //printf (array[0], array[1], array[2]);
    printf ("o seu montante eh de %.2f\n", montante);
    printf ("o seu rendimento eh de %.2f", rendimento);
    return 0;
}