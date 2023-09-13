/*

Dada uma série de colchetes, parênteses e chaves abertos ou fechados, retorne
verdadeiro se a série estiver balanceada (bem formada).
○ Exemplo 1, dada a string "([]) [] ({})", a saída deve ser true
○ Exemplo 2, dada a string "([)]" ou "((()", a saída deve retornar false

*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Função para verificar se a série está bem balanceada
bool isBalanced(char *s) {
    int n = strlen(s);
    char stack[n];
    int top = -1; // Topo da pilha

    for (int i = 0; i < n; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            // Se encontrar um caractere de abertura, empilha na pilha
            top++;
            stack[top] = s[i];
        } else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
            // Se encontrar um caractere de fechamento, verifica se corresponde ao topo da pilha
            if (top == -1) {
                return false; // Não há correspondência para fechar
            }
            if ((s[i] == ')' && stack[top] != '(') ||
                (s[i] == ']' && stack[top] != '[') ||
                (s[i] == '}' && stack[top] != '{')) {
                return false; // Não corresponde ao topo da pilha
            }
            top--;
        }
    }

    // Se a pilha estiver vazia no final, a série está bem balanceada
    return top == -1;
}

int main() {
    char s1[] = "([])[]({})";
    if (isBalanced(s1)) {
        printf("Exemplo 1: true\n");
    } else {
        printf("Exemplo 1: false\n");
    }

    char s2[] = "([)]";
    if (isBalanced(s2)) {
        printf("Exemplo 2 (1): true\n");
    } else {
        printf("Exemplo 2 (1): false\n");
    }

    char s3[] = "((()";
    if (isBalanced(s3)) {
        printf("Exemplo 2 (2): true\n");
    } else {
        printf("Exemplo 2 (2): false\n");
    }

    return 0;
}
