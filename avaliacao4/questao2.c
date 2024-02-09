//Ajustar o código dado de forma que seja identificado também quando a
//meta da vaquinha foi ultrapassada, passando a haver duas
//mensagens de retorno ao usuário, e para, sempre que houver uma
//doação, exibir o valor parcial alcançado.
#include <stdio.h> 
int main (){
    float meta , doacao, soma = 0 ;
    printf("meta da vaquinha: ");
    scanf("%f",&meta);
    do {
      printf("valor da doacao: ");
      scanf ("%f", &doacao);
      soma = soma + doacao;}
    while (soma<meta);
    if (soma>meta){
    printf ("a meta da vaquinha ultrapassada!");}
    else (soma == meta);{
    printf("a meta da vaquinha foi atingida");}
    return 0; 
    }
