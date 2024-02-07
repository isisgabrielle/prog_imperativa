#include <stdio.h>
int main () {
  int port, mat; float red; 
  float aprovados;
  printf ("quantos acertos em portugues matematica e a nota de redacao:\n ");
  while (1){ 
    scanf("%d",&port);
    if (port>=0) {
    scanf("%d",&mat);
    scanf("%f",&red);
    }
    else { 
      break;

    }
    if (port >= 40 && mat >= 21 && red>= 7) { 
      aprovados++;
    }
    else { 
      aprovados=aprovados;
      }
  }
  printf("o numero de aprovados eh %2.f",aprovados);

}