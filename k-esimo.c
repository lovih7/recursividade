/*Escreva um subprograma recursivo que receba como entrada um número inteiro n e
um número inteiro positivo k e identifique o k-ésimo algarismo do número n (da
direita para a esquerda). Por exemplo, se n for 1957 e k for igual a 3, o resultado do
subprograma deve ser o número 9.*/

#include <stdio.h>

int k_esimo_algarismo(int n, int k) {
    if (k == 1) {
        return n % 10;
    }
    return k_esimo_algarismo(n / 10, k - 1);
}

int main(){
    printf("%d",k_esimo_algarismo(1957,3));
    return 0;
}