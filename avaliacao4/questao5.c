// escreva um programa que recebe uma sequencia de numeros cada um em uma linha e para quando o ultim eh menos um, o programa vai determinar a acidez.
#include <stdio.h>
int main(){
int ph;
  printf("digite a sequencia de numeros: \n");
while (1){
    scanf("%d", &ph);
    if (ph == -1){
      break; }
    else if (ph> 7){
      printf("basica\n"); }
    else if (ph < 7){
      printf("acida\n"); }
    else{
      printf("neutra\n"); }
  }
 { 
printf("programa encerrado\n");
}
}
