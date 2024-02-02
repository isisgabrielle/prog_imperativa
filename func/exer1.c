// diz quantas caixas precisam ser adquiridas

    #include <stdio.h>
    #include <math.h>

    int quociente(int dividendo, int divisor) {
        float Divisao;
        Divisao = (float) dividendo / divisor;
        Divisao = ceil(Divisao);
        return (int) Divisao;
    }

    int main() { 
        int comprimidos,caixa;
        
        printf("quantos comprimidos voce necessita: ");
        scanf ("%d",&comprimidos);
    
        printf ("quantas unidades de comprimido tem na caixa deste: ");
        scanf ("%d",&caixa);
        printf ("compre %d caixas", quociente(comprimidos,caixa));
        return 0;
    }
