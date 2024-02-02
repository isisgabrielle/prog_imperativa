    //Escrever programa em C para ler um número N e retornar N3 (N ao cubo),aplicando função (que calcula cubo).

    #include <stdio.h>

    int cubo (int numero ){ 
        return numero * numero * numero ;
    }

    int main() { 
        int numero;
        printf("digite o numero : ");
        scanf ("%d",&numero);
        printf ("esse numero ao cubo eh igual a %d ", cubo(numero));
        return 0;
    }
