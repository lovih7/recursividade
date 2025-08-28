/*Escreva um subprograma recursivo que receba como entrada um vetor de 10
números inteiros, um número inteiro N entre 1 e 10 e um número inteiro X e
verifique quantas vezes o número X aparece no vetor a partir da posição N.*/

#include <stdio.h>

int contaOcorrencias(int vetor[], int n, int pos, int x) {
    if (pos >= n) {
        return 0;
    }
    int count = (vetor[pos] == x) ? 1 : 0;
    return count + contaOcorrencias(vetor, n, pos + 1, x);
}

int main() {
    int vetor[10];
    int n, x;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero inteiro entre 1 e 10: ");
    scanf("%d", &n);

    printf("Digite o numero a ser contado: ");
    scanf("%d", &x);

    if (n < 1 || n > 10) {
        printf("Numero invalido.\n");
    } else {
        int ocorrencias = contaOcorrencias(vetor, 10, n - 1, x);
        printf("O numero %d aparece %d vezes a partir da posicao %d.\n", x, ocorrencias, n);
    }

    return 0;
}
