/*Escreva um subprograma recursivo que receba como entrada um vetor de dez
números inteiros já ordenados, um número inteiro X, e dois índices M e N e verifique
se o número X está presente no vetor entre as posições M e N. Esta verificação deve
ser feita através de uma busca binária.*/

int busca_binaria_rec(int vetor[], int x, int m, int n) {
    if (m > n) {
        return 0; // Não encontrado
    }
    int meio = m + (n - m) / 2;
    if (vetor[meio] == x) {
        return 1; // Encontrado
    } else if (x < vetor[meio]) {
        return busca_binaria_rec(vetor, x, m, meio - 1);
    } else {
        return busca_binaria_rec(vetor, x, meio + 1, n);
    }
}