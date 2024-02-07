// dado um numero na tela printa os numeros de 1 ate o numero da interacao atual sendo q serao feitas n interacoes 
#include <stdio.h> 
int main (){
  int numero, cont_linha, cont_coluna;
  printf ("Digite um número entre 0 e 40: ");
  scanf ("%d", &numero);
  if (numero >= 0 && numero <= 40) {
    for (cont_coluna = 0; cont_coluna <= numero; cont_coluna++) {
        cont_linha = 1;
      for (cont_linha = cont_linha; cont_linha < cont_coluna; cont_linha++) {
        printf ("%d", cont_linha);
      printf ("\n"); } }
  else {
    printf ("O número escolhido é menor que 0 ou maior que 40");}
}