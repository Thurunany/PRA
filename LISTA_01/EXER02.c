/*

Dado um vetor de números inteiros v, retorne um novo vetor de forma que cada
elemento no índice i seja o produto de todos os números na matriz original, com
exceção de i.
○ Exemplo 1: dado v = [1,2,3,4,5], a saída esperada é [120,60,40,30,24]
○ Exemplo 2: dado v = [3,2,1], a saída esperada é [2,3,6]

*/
#include <stdlib.h>
#include <stdio.h>

int main(){
        int n = 1, tam;
        printf("Qual o tamanho do seu vetor?\n");
        scanf("%d", &tam);
        int v[tam], v2[tam];

        printf("Qual o seu vetor?? \n");
        for(int i = 0; i < tam; i++){
                scanf("%d", &v[i]);
                n *= v[i];
        }
        printf("%d \n", n);

        for(int i = 0; i < tam; i++){
            v2[i] = n / v[i];
            printf("%d ", v2[i]);
        }


        return 0;
}
