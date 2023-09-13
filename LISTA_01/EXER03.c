/*

Dado um vetor de números inteiros v, encontre o primeiro inteiro positivo ausente no
vetor. Em outras palavras, deve ser retornado o menor inteiro positivo que não existe no
vetor. A matriz pode conter duplicados e números negativos também. O algoritmo deve
apresentar complexidade de tempo linear e de espaço constante (pode desconsiderar
o esforço para ordenação do vetor).
○ Exemplo 1, dado v = [3,4,-1,1], a saída esperada é 2
○ Exemplo 2, dado v = [1,2,0], a saída esperada é 3

*/
#include <stdlib.h>
#include <stdio.h>

int compara(const void* a, const void* b) {
    return *(int *) a - *(int *) b;
}

int main(){
        int tam, n;
        printf("Qual o tamanho do seu vetor?\n");
        scanf("%d", &tam);
        int v[tam];

        printf("Qual o seu vetor?\n");
        for(int i = 0; i < tam; i++){
              scanf("%d", &v[i]);
        }
        
        qsort(v, tam, sizeof(int), compara);

        for(int i = 0; i < tam; i++){
            n = v[i];
            n += 1;
            if(n > 0 && n != v[i+1]){
                printf("VALOR QUE FALTA: %d \n", n);
                return 0;
            }
        } 
        printf("\n");

    return 0;
}

