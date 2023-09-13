/*

Considere uma escadaria com n degraus e você pode subir 1 ou 2 degraus por vez.
Dado n, retorne o número de maneiras únicas de subir a escada.
○ Exemplo, dado n = 4, existem 5 maneiras exclusivas
■ [1,1,1,1], [2,1,1], [1,2,1], [1,1,2], [2, 2]

*/
#include <stdio.h>

int degrau(int n) {
    if (n <= 1) {
        return 1;
    }
    
    int prev1 = 1; 
    int prev2 = 1; 
    
    for (int i = 2; i <= n; i++) {
        printf("prev1: %d ", prev1);
        printf("prev2: %d\n", prev2);
        int atual = prev1 + prev2; 
        prev2 = prev1; 
        prev1 = atual; 
    }
    
    return prev1;
}

int main() {
    int n = 7;
    int maneiras = degrau(n);
    printf("Para %d degraus, existem %d maneiras únicas de subir a escada.\n", n, maneiras);
    
    return 0;
}
