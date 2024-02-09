#include <stdio.h>
int main () {
  int port, mat;
  float red; 
  float aprovados = 0;
  char sair;
  printf ("quantos acertos em portugues matematica e a nota de redacao:\n ");
  while (1){ 
    scanf("%d",&port);
  if (port<0) {
    printf("Deseja sair? (S para Sim / N para Nao): ");
    scanf(" %c", &sair);  // Note the space before %c to consume any newline characters
  if (sair == 'S' || sair == 's') {
     break;
     }
  else {
       continue;
            }
  }
   
scanf("%d", &mat);
scanf("%f", &red);
 if (port >= 40 && mat >= 21 && red >= 7) {
     aprovados++;
 } 
 else {
       aprovados = aprovados ;
        }
}
printf("o numero de aprovados eh %2.f",aprovados);
return 0;
}