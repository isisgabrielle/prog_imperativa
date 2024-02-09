// JK evitar "estouro" de cartão de crédito
#include <stdio.h>
void ValidaCompra(float *L){
  float D; 
  int numbcompra;
  printf("Debito: ");
  scanf("%f",&D);
  if (*L - D >= 0){
    numbcompra++;
    printf("Compra possivel! \n");
    *L = *L - D;
    printf("o numero da compra eh %d \n", numbcompra);
  }
  else {
  printf("Compra ""estourarah"" o cartao! \n");
  printf("Limite restante: %.2f \n\n",*L);}
}

int main(){
  float Limite;
  printf("Limite do cartao: ");
  scanf("%f",&Limite);
  while (Limite>0) {
    ValidaCompra(&Limite);
  }
  printf("Seu limite de compras acabou!");
  return 0;}