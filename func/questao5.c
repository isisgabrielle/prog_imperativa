// Escrever um programa em C para ler o raio de um círculo e exibir em tela a área desse (círculo)
// usando a fórmula: Área = π . raio2 Usar um módulo/função para cálculo da área, outro módulo/função para cálculo doquadrado.
// E usar uma constante para definição de π. Recomenda-se o uso de função e/ou constante nativa, se houver.

#include <stdio.h>
int quadrado(int raio){
    return raio * raio;
}
int area(int raio){
    return quadrado(raio) * 3.14;
}
int main(){
    int raio;
    printf("digite o raio do circulo: ");
    scanf("%d", &raio);
    printf("a area do circulo eh %d ", area(raio));
}