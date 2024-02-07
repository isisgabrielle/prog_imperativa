//Ler notas de alunos e identificar se cada foi aprovado. considerar como sistema de avaliação: em princípio, 3 notas;
// são aprovados os alunos com média 7; para os alunos com média acima de 3, é possibilitado fazer 4a avaliação, então a média passa a ser 5 para obtenção da aprovação. Após a identificação de que um aluno foi aprovado, ou não; deve ser questionado se o usuário (do programa) deseja verificar a situação de outro aluno.
#include <stdio.h>
int main() {
  float nota1, nota2, nota3, nota4, media, medianova; 
  char continuar;
  while (1) {
  printf ("digite a primeira nota: ");
  scanf("%f",&nota1);
  printf("digite a segunda nota: ");
  scanf ("%f",&nota2);
  printf("digite a terceira nota: ");
  scanf ("%f",&nota3);
  media = (nota1+ nota2+ nota3)/3;
  if (media>= 7) {
    printf("o aluno foi aprovado");
  }
  else if (media<= 3){
   printf ("o aluno foi reprovado");}
  else {
    printf("o aluno tem direito a fazer a quarta avaliacao\n");
    printf("digite a nota da quarta avaliacao: ");
    scanf("%f", &nota4); }
    medianova = (nota1+ nota2+ nota3+ nota4)/4;
    if (medianova>=5){
    printf ("o aluno foi aprovado");}
    else{
    printf("o aluno foi reprovado");}
    printf("\n deseja verificar a situacao de outro aluno? S ou N): ");
    scanf(" %c", &continuar);

        if (continuar != 'S' && continuar != 's') {
            break;
        }
    }

    return 0;
}


