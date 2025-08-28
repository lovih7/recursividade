/*Escreva um subprograma recursivo que receba como entrada um vetor de 10
números inteiros e um número inteiro N entre 1 e 10 e calcule a soma de todos os
elementos do vetor a partir da posição N.*/

#include <stdio.h>

int somaVetor(int vetor[], int n, int pos) {
    if (pos >= n) {
        return 0;
    }
    return vetor[pos] + somaVetor(vetor, n, pos + 1);
}

int main() {
    int vetor[10];
    int n;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero inteiro entre 1 e 10: ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Numero invalido.\n");
    } else {
        printf("A soma dos elementos a partir da posicao %d e: %d\n", n, somaVetor(vetor, 10, n - 1));
    }

    return 0;
}
