//Escrever programa , sem aplicar resto de divisão (%) e valor do quociente (/), para calcular a quantidade de meses contidos numa dada quantidade de dias. Considerar que todos os meses são compostos por 30 dias e desprezar o montante de dias que não formam pelo menos
//um mês completo (resto).
#include <stdio.h>
int main(){ 

int dias,meses;
printf("digite a quantidade de dias: ");
scanf("%d", &dias);
meses = 0;
    while (dias >= 30) {
        dias -= 30;
        meses++;
    }
printf("tem %d meses contidos", meses);
return 0;


}
