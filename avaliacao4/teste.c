#include <stdio.h>
int main(){
int ph, escolha;
  printf("digite a sequencia de numeros: \n");
while (1){
    scanf("%d", &ph);
    if (ph> 7){
      printf("basica\n"); }
    else if (ph < 7){
      printf("acida\n"); }
    else{
      printf("neutra\n"); }
  
printf("deseja continuar: ");
scanf ("%d", &escolha);
if (escolha!= 's' && escolha != 'S') {
  break;
  }
   
{ printf("programa encerrado\n");
}

}

 
}