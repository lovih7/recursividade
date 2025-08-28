/*Escreva um subprograma recursivo que receba como parâmetros de entrada dois
números inteiros M e N e calcule a soma de todos os números do intervalo [M, N].*/
#include <stdio.h>

int somaIntervalo(int m, int n) {
    if (m > n) {
        return 0;
    }
    return m + somaIntervalo(m + 1, n);
}

int main() {
    int m, n;
    printf("Digite dois numeros inteiros (M e N): ");
    scanf("%d %d", &m, &n);
    printf("Soma do intervalo [%d, %d] = %d\n", m, n, somaIntervalo(m, n));
    return 0;
}
