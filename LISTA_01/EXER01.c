/*

Dado um vetor de números inteiros v de tamanho n e um número k, retorne verdadeiro
se a soma de qualquer par de números em v for igual a k.
○ Exemplo: dado v = [10,15,3,7] e k = 17, a saída deve ser true, pois 10 + 7 é 17

*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    int n, k;
    printf("Qual tamanho do vetor?\n");
    scanf("%d", &n);

    printf("Qual o valor da soma procurada? \n");
    scanf("%d", &k);

    int v[n];

    printf("Qual seu vetor: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }


    return 0;
}