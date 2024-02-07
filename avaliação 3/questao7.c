// Escrever programa para: (a) exibir menu: 1 – area, 2 – perímetro e 3 – diagonal; (d) ler
// medida de lado de um quadrado; (c) exibir a informação solicitada pelo usuário conforme opção de menu selecionada.
// Deve haver mensagem de erro para o caso do usuário selecionar opção não existente. Deve ser modularizado.
#include <stdio.h>
#include <ctype.h>
#include <math.h>
int menu (){

int opcao;
 printf ("digite qual operacao voce quer realizar: \n");
 printf ("1- area\n");
 printf ("2- perimetro\n");
 printf ("3- diagonal\n");
 scanf ("%d",&opcao);
 return opcao;}

int area (int n1){ printf("a area desse numero eh %d", n1 *n1 );}

int perimetro (int n1){ printf("o perimetro do quadrado eh %d", n1 * 4);
}

float diagonal (float n1) {
      printf("a diagonal do quadrado eh %2.f", n1 * sqrt(2));
}

int main()
{
      int medquad;
      printf("digite a medida do lado do quadrado: ");
      scanf("%d", &medquad);
      char operador = menu();
      switch (operador) {
      case 1 : area(medquad); break;
      case 2 : perimetro(medquad);break;
      case 3 : diagonal(medquad);break;
      default : printf("ERRO, voce escolheu um opcao nao existente");}
       return 0;
}