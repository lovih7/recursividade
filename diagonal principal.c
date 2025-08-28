/*Escreva um subprograma recursivo que receba como entrada uma matriz quadrada
de ordem 5 de números reais e um número inteiro N (entre 1 e 5) e imprima os N
primeiros números da diagonal principal.*/


#include <stdio.h>

void imprimeDiagonalPrincipal(float matriz[5][5], int n, int i) {
    if (i < n) {
        printf("%f\n", matriz[i][i]);
        imprimeDiagonalPrincipal(matriz, n, i + 1);
    }
}

int main() {
    float matriz[5][5];
    int n;

    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Digite um numero inteiro entre 1 e 5: ");
    scanf("%d", &n);

    if (n < 1 || n > 5) {
        printf("Numero invalido.\n");
    } else {
        printf("Os %d primeiros numeros da diagonal principal sao:\n", n);
        imprimeDiagonalPrincipal(matriz, n, 0);
    }

    return 0;
}
