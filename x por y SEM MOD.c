/*Escreva um subprograma recursivo que receba como entrada dois números inteiros x
e y e calcule o resto da divisão de x por y. Para isso, não deve ser usada a função
mod.*/

int resto(int x, int y) {
    if (x < y) {
        return x;
    }
    return resto(x - y, y);
}

int main() {
    int x, y;
    printf("Digite dois numeros inteiros (x e y): ");
    scanf("%d %d", &x, &y);
    if (y == 0) {
        printf("Divisao por zero nao e permitida.\n");
    } else {
        printf("Resto de %d por %d = %d\n", x, y, resto(x, y));
    }
    return 0;
}
