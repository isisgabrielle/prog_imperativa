// exibe o número de turmas a serem formadas.

    #include <stdio.h>
    #include <math.h>
    int quociente(int dividendo, int divisor){
        float Divisao;
        Divisao = (float) dividendo / divisor;
        Divisao = ceil(Divisao);
        return (int) Divisao;
    }
    int main() { 
        int alunostotal,capacidade;
        
        printf("qual eh o numero total de alunos matriculados? ");
        scanf ("%d",&alunostotal);
    
        printf ("qual eh o numero maximo de alunos por turma? ");
        scanf ("%d",&capacidade);
        printf ("serao formadas %d turmas",quociente(alunostotal,capacidade));
        return 0;
    }
