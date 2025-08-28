/*Escreva um subprograma recursivo que receba como entrada um vetor de 10
números inteiros e um número inteiro N entre 1 e 10 e verifique quantos números
pares existem a partir da posição N do vetor.*/

#include <stdio.h>

int contaPares(int vetor[], int n, int pos) {
    if (pos >= n) {
        return 0;
    }
    int count = (vetor[pos] % 2 == 0) ? 1 : 0;
    return count + contaPares(vetor, n, pos + 1);
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
        int pares = contaPares(vetor, 10, n - 1);
        printf("Existem %d numeros pares a partir da posicao %d.\n", pares, n);
    }

    return 0;
}
