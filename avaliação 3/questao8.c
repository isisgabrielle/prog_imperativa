// Escrever programa para exibir menu: U – unidade, D – dezena, C – centena, M – unidade de milhar e Z – dezena de milhar;
// ler um número de 0 a 99.999 e deste identificar a unidade, ou a dezena, ou a centena, ou a unidade de milhar, ou a centena de milhar;
//  conforme a opção selecionada. Deve funcionar para o caso do usuário pressionar letras maiúsculas ou minúsculas. Deve ser aplicado switch-case. Deve haver mensagem de erro para o caso do usuário selecionar opção não existente. Deve ser modularizado.
#include <stdio.h>
#include <ctype.h>
char menu() {
char opcao;
      printf("escolha uma opcao do sistema de numeracao decimal: \n");
      printf("U- unidade\n");
      printf("D- dezena\n");
      printf("C- centena\n");
      printf("M- unidade de milhar\n");
      printf("Z- dezena de milhar\n");
      scanf("%c", &opcao);
return opcao;
}


 
int unidade(int n1) { 
    printf("a unidade desse numero eh %d", n1 % 10); 
}

int dezena(int n1) {
    printf("a dezena desse numero eh %d", (n1 / 10) % 10);
}

int centena(int n1) {
    printf("a centena desse numero eh %d", (n1 / 100) % 10);
}
int umilhar(int n1) {
    printf("a unidae de milhar desse numero eh %d", (n1 / 1000) % 10);
}
int dmilhar(int n1) {
    printf("a dezena de milhar desse numero eh %d", (n1 / 10000) % 10);
}

int main() {
      char opcao;
      int n1;
      opcao = menu();
      printf("digite um numero de 0 a 99.999: ");
      scanf("%d", &n1);
      if (n1>= 0 && n1<= 99999)
      switch (opcao) {
            case 'u':
            case 'U': unidade(n1); break;
            case 'd':
            case 'D': dezena(n1); break;
            case 'c':
            case 'C': centena(n1); break;
            case 'm':
            case 'M': umilhar(n1); break;
            case 'z':
            case 'Z': dmilhar(n1); break;
            default: printf("ERRO, voce escolheu um opcao nao existente");
            }
      else {
      printf("o numero nao atende aos requisitos");
      }
      return 0;
}
      
