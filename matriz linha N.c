/*Escreva um subprograma recursivo que receba como entrada duas matrizes
quadradas de ordem 5 de números inteiros e um número inteiro N entre 1 e 5 e
verifique se as duas matrizes são idênticas a partir da linha N.*/

#include <stdio.h>

const int tmh = 5;

int comparar_matrizes(int matriz1[tmh][tmh], int matriz2[tmh][tmh], int linha) {
    if (linha >= tmh) {
        return 1;  
    }
    for (int k = 0; k < tmh; k++) {
        if (matriz1[linha][k] != matriz2[linha][k]) {
            return 0; 
        }
    }
    return comparar_matrizes(matriz1, matriz2, linha + 1);
}

int main (){
    srand(time(NULL));

    int matriz1[tmh][tmh], matriz2[tmh][tmh];

    for (int i = 0; i < tmh; i++) {
        for (int j = 0; j < tmh; j++) {
            matriz1[i][j] = rand() % 10;
            matriz2[i][j] = matriz1[i][j];
        }
    }

    int N;
    printf("Digite o valor de N (1-5): ");
    scanf("%d", &N);

    if (N < 1 || N > 5) {
        printf("Valor de N inválido. Deve estar entre 1 e 5.\n");
        return 1;
    }

    if (comparar_matrizes(matriz1, matriz2, N - 1)) {
        printf("As matrizes são idênticas a partir da linha %d.\n", N);
    } else {
        printf("As matrizes são diferentes a partir da linha %d.\n", N);
    }

    return 0;
}