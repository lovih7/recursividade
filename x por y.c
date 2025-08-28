/*Escreva um subprograma recursivo que receba como entrada dois números inteiros x
e y e calcule o valor do produto de x por y.*/

#include <stdio.h>

int produto(int x, int y) {
    if (y == 0) {
        return 0;
    }
    return x + produto(x, y - 1);
}

int main() {
    int x, y;
    printf("Digite dois numeros inteiros (x e y): ");
    scanf("%d %d", &x, &y);
    printf("Produto de %d e %d = %d\n", x, y, produto(x, y));
    return 0;
}
